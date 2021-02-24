//
// Created by ali on 26.12.2020.
//
//#include <algorithm>
//#include <limits>
//#include <fstream>

#include "imgUtils.h"

bool imgUtils::readImg(std::string &imgPath, Image &image ) {

    /* Open PPM file. */
    std::ifstream input(imgPath, std::ios::binary);
    if (!input.is_open()) {
        std::cerr << "[ERROR] Cannot open image: " << imgPath << std::endl;
        return false;
    }

    /* Read in magic number. */
    std::string magicNumber;
    input >> magicNumber;
    if (magicNumber != "P6" && magicNumber != "P5") {
        std::cerr << "[ERROR] Error reading magic number from file." << std::endl;
        return false;
    }

    uint16_t maxValue;
    /* Read in image width, height, and max intensity value. */
    input >> image.width >> image.height >> maxValue;
    if (!input.good()) {
        std::cerr << "[ERROR] Error, premature end of file while reading header." << std::endl;
        return false;
    }

    if (magicNumber == "P5")
        image.depth = 8;
    else if (magicNumber == "P6")
        image.depth = 24;

    /* Skip line break. */
    input.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    uint8_t *data = new uint8_t[image.size()];
    image.data.reset(data, std::default_delete<uint8_t[]>());

    /* Read in raw pixel data. */
    input.read((char*)image.data.get(), image.size());
    if (!input.good()) {
        std::cerr << "[ERROR] Error, only read " << input.gcount() << " bytes." << std::endl;
        return false;
    }
    return true;
}

bool imgUtils::resizeImg(Image &img_in, unsigned char *ddest, uint16_t w2, uint16_t h2) {
    /*****
*
C
C   RESIZE USES BI-LINEAR INTERPOLATION TO CHANGE THE PICTURE ON
C   WORKFILE WFIN TO A DIFFERENT SIZE PICTURE ON WFOUT.  OUTPIX IS THE
C   NUMBER OF PIXELS/LINE ON THE NEW PICTURE, AND OUTLIN IS THE NUMBER
C   OF LINES
C
******/

//    void Resize(unsigned char*src, int w1, int h1, unsigned char* dest, int w2, int h2)

        // arbitrary resize.
        //dest.maxVal = src.maxVal;
        int16_t w1 = img_in.width;
        int16_t h1 = img_in.height;
//        int16_t w2 = img_out_width;
//        int16_t h2 = img_out_height;
//        int16_t dind = 0;

        unsigned char *dsrc = img_in.data.get();
//        unsigned char ddest[w2*h2*3] ;// = img_out.data.get();
//        std::shared_ptr<uint8_t[] > ddest(new uint8_t [w2*h2*3], [](uint8_t * p){delete[] p;});


        bool bUpsampleX = ( w1 < w2 );
        bool bUpsampleY = ( h1 < h2 );

        // If too many input pixels map to one output pixel, our 32-bit accumulation values
        // could overflow - so, if we have huge mappings like that, cut down the weights:
        //    256 max color value
        //   *256 weight_x
        //   *256 weight_y
        //   *256 (16*16) maximum # of input pixels (x,y) - unless we cut the weights down...
        int weight_shift = 0;
        float source_texels_per_out_pixel = (( w1 / (float) w2 + 1)
                                             * ( h1 / (float) h2 + 1)
        );
        float weight_per_pixel = source_texels_per_out_pixel * 256 * 256; //weight_x * weight_y
        float accum_per_pixel = weight_per_pixel * 256; //color value is 0-255
        float weight_div = accum_per_pixel / 4294967000.0f;
        if (weight_div > 1)
            weight_shift = (int)ceilf(logf((float)weight_div) / logf(2.0f));
        weight_shift = std::min(15, weight_shift);  // this could go to 15 and still be ok.

        float fh = 256 * h1 / (float) h2;
        float fw = 256 * w1 / (float) w2;

        // FOR EVERY OUTPUT PIXEL
        for (int y2 = 0; y2< h2; y2++)
        {
            // find the y-range of input pixels that will contribute:
            int y1a = (int)((y2)*fh);
            int y1b = (int)((y2 + 1)*fh);
            if (bUpsampleY) // map to same pixel -> we want to interpolate between two pixels!
                y1b = y1a + 256;
            y1b = std::min(y1b, 256 * h1 - 1);
            int y1c = y1a >> 8;
            int y1d = y1b >> 8;

            for (int x2 = 0; x2<w2; x2++)
            {
                // find the x-range of input pixels that will contribute:
                int x1a = (int)((x2)*fw);
                int x1b = (int)((x2 + 1)*fw);
                if (bUpsampleX) // map to same pixel -> we want to interpolate between two pixels!
                    x1b = x1a + 256;
                x1b = std::min(x1b, 256 * w1 - 1);
                int x1c = x1a >> 8;
                int x1d = x1b >> 8;

                // ADD UP ALL INPUT PIXELS CONTRIBUTING TO THIS OUTPUT PIXEL:
                unsigned int r = 0, g = 0, b = 0, a = 0;
                for (int y = y1c; y <= y1d; y++)
                {
                    unsigned int weight_y = 256;
                    if (y1c != y1d)
                    {
                        if (y == y1c)
                            weight_y = 256 - (y1a & 0xFF);
                        else if (y == y1d)
                            weight_y = (y1b & 0xFF);
                    }

                    unsigned char *dsrc2 = &dsrc[(y* w1 + x1c)*3];
                    for (int x = x1c; x <= x1d; x++)
                    {
                        unsigned int weight_x = 256;
                        if (x1c != x1d)
                        {
                            if (x == x1c)
                                weight_x = 256 - (x1a & 0xFF);
                            else if (x == x1d)
                                weight_x = (x1b & 0xFF);
                        }

                        //
                        unsigned int r_src = * dsrc2++;//
                        unsigned int g_src = * dsrc2++;
                        unsigned int b_src = * dsrc2++;
                        unsigned int w = (weight_x * weight_y) >> weight_shift;
                        r += r_src * w;
                        g += g_src * w;
                        b += b_src * w;
                        a += w;
                    }
                }

                // write results
//                ddest[d/ind++]= (r / a);
//                ddest[dind++] = (g / a);
//                ddest[dind++] = (b / a);

                *(ddest++) = (r / a);
                *(ddest++) = (g / a);
                *(ddest++) = (b / a);
            }
        }
//    img_out.data.reset(  ddest.get()) ;
    return true;
}
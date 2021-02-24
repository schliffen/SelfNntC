//
// Created by ali on 26.12.2020.
//

#ifndef SUBLENET_IMGUTILS_H
#define SUBLENET_IMGUTILS_H

#include <iostream>
#include <algorithm>
#include <limits>
#include <fstream>
#include <cstdint>
#include <memory>
#include <string>
#include <utility>
#include <vector>
#include <math.h>

/*
 * Currently only works for ppm images
 * */
/**
 * @brief
 * Struct representing a single image
 */
typedef struct Image {
    /** Labels describing the type of image */
    enum class Label {
        /** Unknown or unassigned. */
        Unknown = 0,
        /** Frontal, ISO/IEC 19794-5:2005 compliant. */
        Iso,
        /** From law enforcement booking processes. Nominally frontal. */
        Mugshot,
        /** The image might appear in a news source or magazine.
         * The images are typically well exposed and focused but
         * exhibit pose and illumination variations. */
        Photojournalism,
        /** The image is taken from a child exploitation database.
         * This imagery has highly unconstrained pose and illumination */
        Exploitation,
        /** Unconstrained image, taken by an amateur photographer, exhibiting
         * wide variations in pose, illumination, and resolution.
         */
        Wild
    };

    /** Number of pixels horizontally */
    uint16_t width;
    /** Number of pixels vertically */
    uint16_t height;
    /** Number of bits per pixel. Legal values are 8 and 24. */
    uint8_t depth;
    /** Managed pointer to raster scanned data.
     * Either RGB color or intensity.
     * If image_depth == 24 this points to  3WH bytes  RGBRGBRGB...
     * If image_depth ==  8 this points to  WH bytes  IIIIIII */
    std::shared_ptr<uint8_t> data;
    /** @brief Single description of the image.  */
    Label description;

    Image() :
            width{0},
            height{0},
            depth{24},
            description{Label::Unknown}
    {}

    Image(
            uint16_t width,
            uint16_t height,
            uint8_t depth,
            std::shared_ptr<uint8_t> &data,
            Label description
    ) :
            width{width},
            height{height},
            depth{depth},
            data{data},
            description{description}
    {}

    /** @brief This function returns the size of the image data. */
    size_t size() const { return (width * height * (depth / 8)); }
} Image;


class imgUtils {

public:
    bool readImg(std::string &, Image &);
    // resize image
    bool resizeImg(Image &, unsigned char *, uint16_t w2, uint16_t h2);

};


#endif //SUBLENET_IMGUTILS_H

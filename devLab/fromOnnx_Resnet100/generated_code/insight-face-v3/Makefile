CC = gcc
CFLAGS = -Wall -flto -O3 -march=native -DINFO
LDFLAGS = -L../../../ai-cnn
LD_LIBS = -ai-cnn -lm

# list of all generated .c files.
NETWORK_LIST = Resnet100_network_initialization.c Resnet100_network_cleanup.c Resnet100_network.c

dummy_input: dummy_input.c $(NETWORK_LIST) libai-cnn.a
	$(CC) dummy_input.c $(NETWORK_LIST) -I../../.. $(CFLAGS) $(LDFLAGS) $(LD_LIBS) -o dummy_input

reference_input: reference_input.c $(NETWORK_LIST) libai-cnn.a
	$(CC) reference_input.c $(NETWORK_LIST) -I../../.. $(CFLAGS) $(LDFLAGS) $(LD_LIBS) -o reference_input

insight-face-v3: insight-face-v3.c $(NETWORK_LIST) libai-cnn.a
	$(CC) insight-face-v3.c $(NETWORK_LIST) -I../../.. $(CFLAGS) $(LDFLAGS) $(LD_LIBS) -o insight-face-v3

all: dummy_input reference_input insight-face-v3

.PHONY: clean
clean:
	rm -rf insight-face-v3 dummy_input reference_input


.PHONY: libai-cnn.a
libai-cnn.a:
	$(MAKE) -C ../../../ai-cnn
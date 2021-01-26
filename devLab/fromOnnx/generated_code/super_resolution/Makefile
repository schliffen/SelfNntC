CC = gcc
CFLAGS = -Wall -flto -O3 -march=native -DINFO
LDFLAGS = -L../../../ai-cnn
LD_LIBS = -ai-cnn -lm

# list of all generated .c files.
NETWORK_LIST = network_initialization.c network_cleanup.c network.c

dummy_input: dummy_input.c $(NETWORK_LIST) libai-cnn.a
	$(CC) dummy_input.c $(NETWORK_LIST) -I../../.. $(CFLAGS) $(LDFLAGS) $(LD_LIBS) -o dummy_input

reference_input: reference_input.c $(NETWORK_LIST) libai-cnn.a
	$(CC) reference_input.c $(NETWORK_LIST) -I../../.. $(CFLAGS) $(LDFLAGS) $(LD_LIBS) -o reference_input

super_resolution: super_resolution.c $(NETWORK_LIST) libai-cnn.a
	$(CC) super_resolution.c $(NETWORK_LIST) -I../../.. $(CFLAGS) $(LDFLAGS) $(LD_LIBS) -o super_resolution

all: dummy_input reference_input super_resolution

.PHONY: clean
clean:
	rm -rf super_resolution dummy_input reference_input


.PHONY: libai-cnn.a
libai-cnn.a:
	$(MAKE) -C ../../../ai-cnn
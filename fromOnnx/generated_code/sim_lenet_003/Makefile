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

sim_lenet_003: sim_lenet_003.c $(NETWORK_LIST) libai-cnn.a
	$(CC) sim_lenet_003.c $(NETWORK_LIST) -I../../.. $(CFLAGS) $(LDFLAGS) $(LD_LIBS) -o sim_lenet_003

all: dummy_input reference_input sim_lenet_003

.PHONY: clean
clean:
	rm -rf sim_lenet_003 dummy_input reference_input


.PHONY: libai-cnn.a
libai-cnn.a:
	$(MAKE) -C ../../../ai-cnn
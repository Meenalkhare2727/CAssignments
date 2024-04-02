TARGET=assign3



CSRCS= $(TARGET).c 
COBJS= $(CSRCS:.c=.o)

CC=gcc
CFLAGS=
LDFLAGS=

$(TARGET): $(COBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

run:
	./$(TARGET)

clean:
	rm $(TARGET) $(COBJS)

.phony: run clean



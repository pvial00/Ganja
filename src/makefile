CC=gcc
CFLAGS=-O3 -std=c99 -w
TARGET=ganjasum
all: $(TARGET)

$(TARGET): ganja_hash.c
	$(CC) ganja_hash.c $(CFLAGS) -o $(TARGET)

clean:
	$(RM) $(TARGET)

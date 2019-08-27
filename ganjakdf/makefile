CC=gcc
CFLAGS=-O3 -std=c99 -w
TARGET=ganjakdf
all: $(TARGET)

$(TARGET): ganja_kdf.c
	$(CC) ganja_kdf.c $(CFLAGS) -o $(TARGET)

clean:
	$(RM) $(TARGET)

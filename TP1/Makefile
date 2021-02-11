CC = gcc
RM = rm -rf 
CFLAGS = -Wall

TARGET: EX_1B EX_3B EX_5A EX_5B EX_6A EX_6B EX_6C EX_10 EX_11A EX_11B EX_11C EX_12A

all: $(TARGET)

$(TARGET): $(TARGET).c
	@$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	@$(RM) $(TARGET)

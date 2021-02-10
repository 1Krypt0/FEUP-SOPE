CC = gcc
RM = rm -rf 
CFLAGS = -Wall -Wextra

TARGET: EX_5A EX_10 EX_11A EX_11B EX_11C EX_12A

all: $(TARGET)

$(TARGET): $(TARGET).c
	@$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c

clean:
	@$(RM) $(TARGET)

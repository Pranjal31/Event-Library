# compiler
CC = gcc

# compiler flags
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c event.c client.c

# object files
OBJS = $(SRCS:.c=.o)

# target executable
TARGET = program

# link object files into target executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

# compile .c files into .o files
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

event.o: event.h event.c
	$(CC) $(CFLAGS) -c event.c

client.o: client.h client.c
	$(CC) $(CFLAGS) -c client.c

clean:
	rm -f $(OBJS) $(TARGET)

# Variables
CC = gcc
CFLAGS =  -g
OBJ = main.o matmult.o
EXEC = matrix_multiply

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJ)

# Compile main.c
main.o: main.c
	$(CC) $(CFLAGS) -c main.c

# Compile matmult.c
matmult.o: matmult.c
	$(CC) $(CFLAGS) -c matmult.c

# Clean up object files and executable
clean:
	rm -f *.o

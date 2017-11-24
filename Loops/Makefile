# Makefile for Loops project

# List of files
C_SRCS		= main.c loops.c
C_OBJS		= main.o loops.o
C_HEADERS	= 

OBJS		= ${C_OBJS} 
EXE	        = loops

# Compiler and loader commands and flags
GCC	= gcc
GCC_FLAGS	= -g -std=c99 -Wall -c
LD_FLAGS	= -g -std=c99 -Wall

# Compile .c files to .o files
.c.o:
	$(GCC) $(GCC_FLAGS) $<

# Target is the executable
default: $(OBJS)	
	$(GCC) $(LD_FLAGS) $(OBJS) -o $(EXE)

# Recompile C objects if headers change
${C_OBJS}:      ${C_HEADERS}

# Clean up the directory
clean:
	rm -f *.o *~ $(EXE) 



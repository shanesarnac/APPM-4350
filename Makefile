OBJ =  phase_velocities.o
CC = g++
CFLAGS = -Wall -g 
TARGETS = phase_velocities.cpp

analysis: $(TARGETS)
	$(CC) $(CFLAGS) $(TARGETS) -lm -o velocities
	
clean: 
	rm -f *.o
	rm -f velocities

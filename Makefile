SOURCES = 
CC = g++
FLAG = -Wall -o

All: 
	$(CC) $(FLAG) execute $(SOURCES) 

clean:
	rm execute
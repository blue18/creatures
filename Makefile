SOURCES = driver.cpp creature.cpp demon.cpp cyberdemon.cpp balrog.cpp human.cpp world.cpp
CC = g++
FLAG = -Wall -o

All: 
	$(CC) $(FLAG) execute $(SOURCES) 

clean:
	rm execute

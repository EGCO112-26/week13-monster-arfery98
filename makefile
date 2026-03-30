compile: main.cpp
	g++  monster.cpp main.cpp -o monster


run: monster
	./monster


clean: monster
	rm monster


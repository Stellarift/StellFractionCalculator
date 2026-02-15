all:
	clang++ -std=c++17 fraction.cpp main.cpp -o fraction

run: all
	./fraction

clean:
	rm -f fraction

rebuild: clean all
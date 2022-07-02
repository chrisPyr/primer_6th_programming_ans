CXX:=clang++
FLAGS:=--std=c++17 -O3 -Wall -Wextra
SRC:=$(wildcard *.cpp)

default: 9_4

9_4: $(SRC)
	$(CXX) $^ -o $@

.PHONY: clean run
run:
	./9_4
clean:
	$(RM) 9_4

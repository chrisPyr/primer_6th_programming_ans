CXX:=clang++
FLAGS:=--std=c++17
SRC:=$(wildcard *.cpp)

default: 9_1

9_1: $(SRC)
	$(CXX) $^ -o $@

.PHONY: clean run
run:
	./9_1
clean:
	$(RM) 9_1

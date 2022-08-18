SRC:=$(wildcard *.cpp)
FLAGS:= -O3 -Wextra -Wall -std=c++11
CXX:=clang++

default: 10_1

10_1: $(SRC)
	$(CXX) $^ -o $@

.PHONY: clean run
clean:
	$(RM) ./10_1
run:
	./10_1

CXX:=clang++
FLAGS:=--std=c++17 -O3 -Wall -Wextra
SRC:=$(wildcard *.cpp)

default: 10_5

10_5: $(SRC)
	$(CXX) $^ -o $@

.PHONY: clean run
run:
	./10_5
clean:
	$(RM) 10_5

CXX:=clang++
FLAGS:=--std=c++17 -O3 -Wall -Wextra
SRC:=$(wildcard *.cpp)

default: 10_4

10_4: $(SRC)
	$(CXX) $^ -o $@

.PHONY: clean run
run:
	./10_4
clean:
	$(RM) 10_4

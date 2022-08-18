CXX:=clang++
FLAGS:=--std=c++17 -O3 -Wall -Wextra
SRC:=$(wildcard *.cpp)

default: 10_3

10_3: $(SRC)
	$(CXX) $^ -o $@

.PHONY: clean run
run:
	./10_3
clean:
	$(RM) 10_3

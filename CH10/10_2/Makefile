SRC:=$(wildcard *.cpp)
FLAGS:= -O3 -Wextra -Wall -std=c++11
CXX:=clang++

default: 10_2

10_2: $(SRC)
	$(CXX) $^ -o $@

.PHONY: clean run
clean:
	$(RM) ./10_2
run:
	./10_2

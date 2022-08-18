SRC:=$(wildcard *.cpp)
FLAGS:= -Wextra -Wall -std=c++11

default: 1

1: $(SRC)
	clang++ $^ -o $@

.PHONY: clean
clean:
	$(RM) ./1

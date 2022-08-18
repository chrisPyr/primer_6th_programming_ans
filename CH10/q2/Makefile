SRC:=$(wildcard *.cpp)
FLAGS:= -Wextra -Wall -std=c++11

default: 2

2: $(SRC)
	clang++ $^ -o $@

.PHONY: clean
clean:
	$(RM) ./2

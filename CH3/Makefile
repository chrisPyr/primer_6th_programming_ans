CXX=clang++
CXXFLAGS= -std=c++17 -O3 -Wall -Wextra

.PHONY: clean 3_1 3_2

all:
	@echo "Please enter the number of excercise e.g. make 3_1"

3_1: 3_1.cpp
	@${CXX} ${CXXFLAGS} -o $@.out $^
	@./3_1.out

clean:
	${RM} *.out


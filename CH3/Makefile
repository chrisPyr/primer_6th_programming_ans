CXX=clang++
CXXFLAGS= -std=c++17 -O3 -Wall -Wextra

.PHONY: clean 3_1 3_2

all:
	@echo "Please enter the number of excercise e.g. make 3_1"

3_1: 3_1.cpp
	@${CXX} ${CXXFLAGS} -o $@.out $^
	@./3_1.out
3_2: 3_2.cpp
	@${CXX} ${CXXFLAGS} -o $@.out $^
	@./3_2.out
3_3: 3_3.cpp
	@${CXX} ${CXXFLAGS} -o $@.out $^
	@./3_3.out
3_4: 3_4.cpp
	@${CXX} ${CXXFLAGS} -o $@.out $^
	@./3_4.out
3_5: 3_5.cpp
	@${CXX} ${CXXFLAGS} -o $@.out $^
	@./3_5.out
3_6: 3_6.cpp
	@${CXX} ${CXXFLAGS} -o $@.out $^
	@./3_6.out
3_7: 3_7.cpp
	@${CXX} ${CXXFLAGS} -o $@.out $^
	@./3_7.out

clean:
	${RM} *.out


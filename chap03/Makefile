CXX := g++
CXXFLAGS := -std=c++17 -O2 -Wall -Wextra

SRCS := $(wildcard *.cpp)
PROGS := $(SRCS:.cpp=)

.PHONY: all clean

all: $(PROGS)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(PROGS) *.o core


CXX = g++
CXXFLAGS = -std=c++17 -Wall

all: P24818
	
P24818: P24818.o
	$(CXX) $(CXXFLAGS) -o $@ $^
	$(CXX) $(CXXFLAGS) -c $^

clean:
	rm P24818 P24818.o
.PHONY: all clean

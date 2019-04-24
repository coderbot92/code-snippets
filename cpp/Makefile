SOURCES = $(wildcard *.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
DEPS = $(SOURCES:.cpp=.d)
BINS = $(SOURCES:.cpp=)

CFLAGS += -MMD
CXXFLAGS += -MMD

CXXFLAGS += -Wall -g -std=c++2a

.PHONY: all garbage clean

all: compile garbage

compile: $(BINS)

garbage:
	rm -rf $(OBJECTS) $(DEPS) *.dSYM

clean:
	$(RM) $(BINS)

-include $(DEPS)

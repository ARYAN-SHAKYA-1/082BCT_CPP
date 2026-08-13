# Compiler and flags
CXX = gcc
CXXFLAGS = -Wall -std=c++17
LDFLAGS = -lstdc++

# Automatically find all .cpp files in these folders
SRCS = main.cpp \
       include.cpp \
       $(wildcard components/*.cpp) \
       $(wildcard fileHandeling/*.cpp)

# Convert .cpp filenames to .o filenames
OBJS = $(SRCS:.cpp=.o)

# Name of the final executable
TARGET = project

# Default target — builds the executable
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) $(LDFLAGS) -o $(TARGET)

# Remove all compiled files
clean:
	rm -f $(OBJS) $(TARGET)

# Rebuild everything from scratch
rebuild: clean all

.PHONY: all clean rebuild
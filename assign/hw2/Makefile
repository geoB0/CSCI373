CXX = g++
CXX_FLAGS = -I. -std=c++11 -Wfatal-errors -Wall -Wextra -Wpedantic -Wconversion -Wshadow

DRIVER=ArrayListDriver

# List of all .cpp source files.
CPP = $(DRIVER).cpp

# Final binary
BIN = $(DRIVER)
OBJ = $(CPP:%.cpp=%.o)
DEP = $(OBJ:%.o=%.d)

#%.o: %.cpp #$(DEPS)
#	$(CC) -c -o $@ $< $(CFLAGS)

#$(DRIVER): $(DRIVER).o ArrayList.h
#	$(CC) -o $(DRIVER) $(DRIVER).o

lab1: $(BIN)
	./$(BIN) < testfile.txt

$(BIN) : $(OBJ)
	$(CXX) $(CXX_FLAGS) $^ -o $@

# Include all .d files
-include $(DEP)

# by calling `-include $(DEP)`.
%.o : %.cpp
	$(CXX) $(CXX_FLAGS) -MMD -c $< -o $@

.PHONY : clean
clean:
	rm -f *.o *.d $(BIN)

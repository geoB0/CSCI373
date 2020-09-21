CXX = g++
CXX_FLAGS = -I. -std=c++11 -Wfatal-errors -Wall -Wextra -Wpedantic -Wconversion -Wshadow

DRIVER=platonicsolids

# List of all .cpp source files.
CPP = $(DRIVER).cpp
OBJ = $(CPP:%.cpp=%.o)
DEP = $(OBJ:%.o=%.d)

# Final binary
BIN = $(DRIVER)

hw1: $(BIN)
	./$(BIN)

$(BIN) : $(OBJ)
	$(CXX) $(CXX_FLAGS) $^ -o $@

# Include all .d files
-include $(DEP)

# by calling `-include $(DEP)`.
%.o : %.cpp
	$(CXX) $(CXX_FLAGS) -MMD -c $< -o $@

.PHONY : clean solution
clean:
	rm -f *.o *.d $(BIN)

solution:
	find . -name "*.solution" | xargs enscript --color=1 -C -Ecpp -fCourier10 -o - | ps2pdf - solution.pdf

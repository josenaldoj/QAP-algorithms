CC = g++
CPPFLAGS = -Wall -W -ansi -pedantic -g -O0 -std=c++14
BIN_DIR = bin
INCLUDE_DIR = include
SRC_DIR = src
OBJS = hungarian.o branch_and_bound.o experiments.o main.o
OUT = qap.out

$(OUT) : $(OBJS)
	@echo "\nLinking...\n"
	@if [ ! -d $(BIN_DIR) ]; then mkdir $(BIN_DIR); fi
	$(CC) $(OBJS) -o $(BIN_DIR)/$(OUT) $(LIBS)
	@echo "\nSuccessfully compiled!\n"

branch_and_bound.o : $(INCLUDE_DIR)/branch_and_bound.h $(SRC_DIR)/branch_and_bound.cpp $(SRC_DIR)/hungarian.cpp
	$(CC) $(CPPFLAGS) -I $(INCLUDE_DIR) -c $(SRC_DIR)/branch_and_bound.cpp

experiments.o : $(INCLUDE_DIR)/experiments.h $(SRC_DIR)/experiments.cpp
	$(CC) $(CPPFLAGS) -I $(INCLUDE_DIR) -c $(SRC_DIR)/experiments.cpp

hungarian.o : $(INCLUDE_DIR)/hungarian.h $(SRC_DIR)/hungarian.cpp
	$(CC) $(CPPFLAGS) -I $(INCLUDE_DIR) -c $(SRC_DIR)/hungarian.cpp

main.o : $(INCLUDE_DIR)/branch_and_bound.h $(SRC_DIR)/main.cpp
	$(CC) $(CPPFLAGS) -I $(INCLUDE_DIR) -c $(SRC_DIR)/main.cpp 

clean:
	rm *.o
# Project: Project3

all: all-before $(BIN) all-after

clean: clean-custom
	${RM} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CC) $(LINKOBJ) -o $(BIN) $(LIBS)

projecttest1.o: projecttest1.cpp
	$(CC) -c projecttest1.cpp -o projecttest1.o $(CFLAGS)

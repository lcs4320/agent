include ../../build.config

CFLAGS = $(DEFINES) $(INCLUDES)

CPPFILES = LogicApplyPolicy.cpp

OBJ = $(CPPFILES:.cpp=.o)

all: $(OBJ)

.cpp.o:
	$(CC) $(CFLAGS) -c $(CPPFILES)

clean:
	rm -f $(OBJ)

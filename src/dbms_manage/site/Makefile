include ../../build.config

CFLAGS = $(DEFINES) $(INCLUDES)

CPPFILES = DBMgrSiteFile.cpp DBMgrSiteVuln.cpp DBMgrSiteVulnScan.cpp

OBJ = $(CPPFILES:.cpp=.o)

all: $(OBJ)

.cpp.o:
	$(CC) $(CFLAGS) -c $(CPPFILES)

clean:
	rm -f $(OBJ)

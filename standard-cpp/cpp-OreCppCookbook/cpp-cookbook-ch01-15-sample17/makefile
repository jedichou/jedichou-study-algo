# Sample - Chapter 1 - Sample 17th
# Specify the target file and the install directory
OUTPUTFILE=hello
INSTALLDIR=binaries

# Default target
.PHONY: all
all: $(OUTPUTFILE)

# Build hello from hello.cpp
$(OUTPUTFILE): hello.cpp
	g++ -o $@ $<

# Copy hello to the binaries subdirectory
.PHONY: install
install:
	mkdir -p $(INSTALLDIR)
	cp -p $(OUTPUTFILE) $(INSTALLDIR)

# Delete hello
.PHONY: clean
clean:
	rm -f $(OUTPUTFILE)

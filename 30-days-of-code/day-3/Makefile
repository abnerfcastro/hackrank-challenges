TARGET = main

CC = gcc -g
CFLAGS = -Wall -std=c99

LINKER = gcc -o
LFLAGS = -Wall -I. -lm

# Directories
INCLUDEDIR = ./include
SRCDIR = ./src
BINDIR = ./bin
OBJDIR = ./obj
ETCDIR = etc

# Create Directories

SOURCES := $(wildcard $(SRCDIR)/*.c)
INCLUDES := $(wildcard $(INCLUDEDIR)/*.h)
OBJECTS := $(SOURCES:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
rm = rm -f

$(BINDIR)/$(TARGET): $(OBJECTS)
	@mkdir -p $(BINDIR)
	@$(LINKER) $@ $(LFLAGS) $(OBJECTS)

$(OBJECTS): $(OBJDIR)/%.o : $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

.PHONEY: run
run:
	@$(BINDIR)/$(TARGET).exe

.PHONEY: runinput
runinput:
	@$(BINDIR)/$(TARGET).exe < $(ETCDIR)/input

.PHONEY: clean
clean:
	@$(rm) $(OBJECTS)

.PHONEY: remove
remove:
	@$(rm) $(BINDIR)/*.exe

# Use @ so the commands won't echo on the console.

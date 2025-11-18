# Makefile for JavaScript Parser
CC = gcc
CFLAGS = -Wall -g -std=c11
RE2C = re2c -c
BISON = bison

TARGET = jsparser
SRCDIR = src
BUILDDIR = build
TESTDIR = tests

# Generated files
LEXER_C = $(BUILDDIR)/lexer.c
PARSER_C = $(BUILDDIR)/parser.c
PARSER_H = $(BUILDDIR)/parser.h

# Source files
SOURCES = $(LEXER_C) $(PARSER_C) $(SRCDIR)/ast.c $(SRCDIR)/main.c
OBJECTS = $(BUILDDIR)/lexer.o $(BUILDDIR)/parser.o $(BUILDDIR)/ast.o $(BUILDDIR)/main.o

all: $(BUILDDIR) $(TARGET)

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

# Generate parser first (creates parser.h that lexer needs)
$(PARSER_C) $(PARSER_H): $(SRCDIR)/parser.y | $(BUILDDIR)
	$(BISON) -d -o $(PARSER_C) $<

# Generate lexer (depends on parser.h)
$(LEXER_C): $(SRCDIR)/lexer.re $(PARSER_H)
	$(RE2C) -o $@ $<

# Compile generated parser
$(BUILDDIR)/parser.o: $(PARSER_C) $(PARSER_H)
	$(CC) $(CFLAGS) -I$(SRCDIR) -I$(BUILDDIR) -c -o $@ $(PARSER_C)

# Compile generated lexer
$(BUILDDIR)/lexer.o: $(LEXER_C) $(PARSER_H)
	$(CC) $(CFLAGS) -I$(SRCDIR) -I$(BUILDDIR) -c -o $@ $(LEXER_C)

# Compile AST implementation
$(BUILDDIR)/ast.o: $(SRCDIR)/ast.c $(SRCDIR)/ast.h
	$(CC) $(CFLAGS) -I$(SRCDIR) -I$(BUILDDIR) -c -o $@ $<

# Compile main
$(BUILDDIR)/main.o: $(SRCDIR)/main.c $(SRCDIR)/ast.h $(PARSER_H)
	$(CC) $(CFLAGS) -I$(SRCDIR) -I$(BUILDDIR) -c -o $@ $<

# Link everything
$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

test: $(TARGET)
	@echo "Running tests..."
	@chmod +x $(TESTDIR)/run_tests.sh
	@$(TESTDIR)/run_tests.sh

clean:
	rm -rf $(BUILDDIR)/*.c $(BUILDDIR)/*.h $(BUILDDIR)/*.o $(TARGET)
	rm -rf $(BUILDDIR)

distclean: clean
	rm -rf $(BUILDDIR)

.PHONY: all clean test distclean
CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS = -lm

SRCDIR = programs
BUILDDIR = bin

SOURCES = $(wildcard $(SRCDIR)/*.c)
TARGETS = $(patsubst $(SRCDIR)/%.c,$(BUILDDIR)/%,$(SOURCES))

.PHONY: all clean

all: $(TARGETS)

$(BUILDDIR)/%: $(SRCDIR)/%.c
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDFLAGS)
	@echo "Compiled $< -> $@"

clean:
	@rm -rf $(BUILDDIR)
	@echo "Cleaned build directory."

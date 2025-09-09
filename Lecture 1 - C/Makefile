GCC = gcc
CFLAGS = -lcs50

# Pattern rule: build any .c file into an executable with the same name
%: %.c
	$(GCC) $< $(CFLAGS) -o $@

# Clean up all executables
clean:
	rm -f compare agree hello_user
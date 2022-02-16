CFLAGS = -std=gnu11 -g -Wall -Wextra

SOURCE = vowelshift stringoperations

all: $(SOURCE)

vowelshift: vowelshift.c
	gcc $(CFLAGS) vowelshift.c -o vowelshift

stringoperations: tests.c stringoperations.c
	gcc $(CFLAGS) tests.c stringoperations.c -o stringoperations

clean:
	rm -f
#!/bin/bash
if [ -e test ]; then
	rm test
fi
cc -Wall -Wextra -Werror *.c -o test
if [ -e test ]; then
	./test
fi

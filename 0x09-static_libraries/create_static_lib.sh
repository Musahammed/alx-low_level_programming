#!/bin/bash
gcc -Wall -Wextra -Werror -pandantic -c *.c
ar rc liball.a *.o

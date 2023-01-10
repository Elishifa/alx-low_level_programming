#!/bin/bash/

gcc -Wall -wedantic -werror -wextra -c *.c
ar rc liball.a *.o
ranlib liball.a

#!bin/bash
gcc -Wall -pentantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.o

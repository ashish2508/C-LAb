//Q3.  Write a program to find the range of unsigned integer data types using a loop.

#include <stdio.h>

int main() { 
    unsigned int a = 1;

    while (a > 0) { a *= 2 ;  }

    printf("Range of unsigned int: 0 to %u\n", a - 1);

    return 0;
}

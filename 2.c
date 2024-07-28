//Q2. Write a program to find the range of integer data types using a loop.

#include <stdio.h>

int main() {

    printf("int: %d to %d\n", -(int)(((unsigned int)~0) >> 1) - 1, (int)(((unsigned int)~0) >> 1));
    return 0;
}

// Q1. Write down a menu driven program to print the size of the different data type. 

// The user prompt must READ like this
// 		Press 1 : to find size of int
// 		Press 2 : to find size of float
// 		Press 3 : to find size of char
// 		Press 4 : to find size of double
// 		Press 5 : to find the size of unsigned int (unsigned int a, access specifier in %u)

#include <stdio.h>

int main() {
    int choice;
    
    printf("Press 1 : to find size of int\n");
    printf("Press 2 : to find size of float\n");
    printf("Press 3 : to find size of char\n");
    printf("Press 4 : to find size of double\n");
    printf("Press 5 : to find the size of unsigned int\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Size of int: %lu bytes\n", sizeof(int));
            break;
        case 2:
            printf("Size of float: %lu bytes\n", sizeof(float));
            break;
        case 3:
            printf("Size of char: %lu bytes\n", sizeof(char));
            break;
        case 4:
            printf("Size of double: %lu bytes\n", sizeof(double));
            break;
        case 5:
            printf("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));
            break;
        default: printf("Invalid choice\n");
    }

    return 0;
}



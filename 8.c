//Q8. Take an integer from the user. Create an array that has the same size as that of the number of digits in the number.  Store each bit the array. Write a program that that print a number which is the reverse of the original number.
// Example: X = 12345 (user input)
// 	Arr = 
// 1
// 2
// 3
// 4
// 5




#include <stdio.h>

int main()
{
    int num, temp, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        temp /= 10;
        count++;
    }

    int arr[count];

    temp = num;

    for (int i = 0; i < count; i++)
    {
        arr[i] = temp % 10;
        temp /= 10;
    }

    printf("Reversed number: ");
    for (int i = 0; i < count; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");

    printf("Array: \n");
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}

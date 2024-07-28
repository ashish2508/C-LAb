#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int n;
    printf("\nEnter the size of the array you wnat to create : ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the value of no. %d of this array : ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nThe value of number %d of this array is : %d\n", i,ptr[i]);
    }
    return 0;
}
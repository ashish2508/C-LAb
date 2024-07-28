//Q6. WAP that takes user input in terms of meter and prints the result in Km: Meter.
// Input : 2430 Output : 2km and 430mtrs.


#include <stdio.h>

int main()
{
    int m;
    float km, metres;

    printf("Enter the value in meters: ");
    scanf("%d", &m);

    printf("The result is: %.d km and %.f m.\n", (int)m / 1000, (float)m - ((m / 1000)) * 1000);

    return 0;
}
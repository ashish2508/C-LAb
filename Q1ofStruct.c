#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cricketer
{
    char Firstname[20];
    char Lastname[20];
    int age;
    int num_of_matches;
    float average;
} cricketer;

int main()
{
    cricketer arr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%s", arr[i].Firstname);
        scanf("%s", arr[i].Lastname);
        scanf("%d", &arr[i].age);
        scanf("%d", &arr[i].num_of_matches);
        scanf("%f", &arr[i].average);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Name : %s %s\n", arr[i].Firstname, arr[i].Lastname);
        printf("Age : %d\n", arr[i].age);
        printf("No_of_Matches Played : %d\n", arr[i].num_of_matches);
        printf("Average runs : %.2f\n\n", arr[i].average);
    }
    return 0;
}
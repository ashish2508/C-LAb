#include <stdio.h>
#include <string.h>

typedef struct cricketer {
    char Firstname[20];
    char lastname[20];
    int age;
    int number_of_matches;
    float average;
} cricketer;

int main() {

    cricketer arr[3];

    for (int i = 0; i < 3; i++) {
        arr[i].average = 0.0; // Initialize average field

        scanf("%s", &arr[i].Firstname);
        scanf("%s", &arr[i].lastname);
        scanf("%d", &arr[i].age);
        scanf("%d", &arr[i].number_of_matches);
        scanf("%f", &arr[i].average);
    }

    for (int i = 0; i < 3; i++) {
        printf("Name: %s %s\n", arr[i].Firstname, arr[i].lastname);
        printf("Age: %d\n", arr[i].age);
        printf("Number of matches: %d\n", arr[i].number_of_matches);
        printf("Average: %f\n", arr[i].average);

        printf("\n"); // Add newline character
    }

    return 0;
}

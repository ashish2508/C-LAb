 //Q7.  Create the 5 array of size 5. The array is named as maths, sci, History, Geography, Eng. Each of the array contains marks in the respective subjects of 5 students named A,B,C,D,E in order. Write a program that calculates average, minimum and maximum marks of
//A. Each Subject      B. Each Student

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_stu = 5;
    int num_sub = 5;

    int **marks = (int **)malloc(num_stu* sizeof(int *));
    for (int i = 0; i < num_stu; i++) {
        marks[i] = (int *)malloc(num_sub * sizeof(int));
    }

    if (marks == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int student = 0; student < num_stu; student++) {
        printf("Enter marks for Student %c (Math sci History Geo Eng): ", 'A' + student);
        for (int subject = 0; subject < num_sub; subject++) {
            scanf("%d", &marks[student][subject]);
        }
    }

    printf("\nSubject-wise Statistics:\n");
    for (int subject = 0; subject < num_sub; subject++) {
        int sum = 0, min = marks[0][subject], max = marks[0][subject];
        for (int student = 0; student < num_stu; student++) {
            int mark = marks[student][subject];
            sum += mark;
            if (mark < min) min = mark;
            if (mark > max) max = mark;
        }
        double average = (double)sum / num_stu;
        printf("Subject %d - Average: %.2lf, Min: %d, Max: %d\n", subject + 1, average, min, max);
    }

    printf("\nStudent-wise Statistics:\n");
    for (int student = 0; student < num_stu; student++) {
        int sum = 0, min = marks[student][0], max = marks[student][0];
        for (int subject = 0; subject < num_sub; subject++) {
            int mark = marks[student][subject];
            sum += mark;
            if (mark < min) min = mark;
            if (mark > max) max = mark;
        }
        double average = (double)sum / num_sub;
        printf("Student %c - Average: %.2lf, Min: %d, Max: %d\n", 'A' + student, average, min, max);
    }
    return 0;
}

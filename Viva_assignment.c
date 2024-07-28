#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student {
    char name[30];
    int roll;
    int sub;
    float *marks;
};
struct Student* createStudent();
void printStudent(struct Student *s);
float calculateAverage(struct Student *s);
float calculateSubjectAverage(struct Student **students, int numStudents, int subjectIndex);
void findHighestAverage(struct Student **students, int numStudents);
void findHighestInEachSubject(struct Student **students, int numStudents, int numSubjects);

int main() {
    int numStudents = 3;
    struct Student *students[numStudents];
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        students[i] = createStudent();
    }
    printf("\nDetails of all students:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nDetails of student %d:\n", i + 1);
        printStudent(students[i]);
    }
    printf("\nAverage marks for each student:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Average marks for student %d (%s): %.2f\n", i + 1, students[i]->name, calculateAverage(students[i]));
    }
    int numSubjects = students[0]->sub;
    printf("\nAverage marks in each subject:\n");
    for (int i = 0; i < numSubjects; i++) {
        printf("Average marks for subject %d: %.2f\n", i + 1, calculateSubjectAverage(students, numStudents, i));
    }
    findHighestAverage(students, numStudents);
    findHighestInEachSubject(students, numStudents, numSubjects);
    return 0;
}

struct Student* createStudent() {
    struct Student *temp = (struct Student*) malloc (sizeof(struct Student));
    printf("Enter the name: ");
    scanf(" %[^\n]s", temp->name);// temp->name can be written as (*temp) name
    printf("Enter the Roll Number: ");
    scanf("%d", &(temp->roll));
    printf("Enter the number of subjects the student has enrolled in: ");
    scanf("%d", &(temp->sub));
    int numSubjects = temp->sub;
    float *marks = (float*) malloc (numSubjects * sizeof(float));
    for (int i = 0; i < numSubjects; i++) {
        printf("Enter mark for subject %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
    temp->marks = marks;
    return temp;
}

void printStudent(struct Student *s) {
    int numSubjects = s->sub;
    printf("Name: %s\n", s->name);
    printf("Roll: %d\n", s->roll);
    printf("Number of subjects enrolled: %d\n", s->sub);
    printf("Marks Secured:\n");
    for (int i = 0; i < numSubjects; i++) {
        printf("Subject %d: %.2f\n", i + 1, s->marks[i]);
    }
    printf("End of Report\n");
}

float calculateAverage(struct Student *s) {
    int numSubjects = s->sub;
    float totalMarks = 0.0;
    for (int i = 0; i < numSubjects; i++) {
        totalMarks += s->marks[i];
    }
    return (totalMarks / numSubjects);
}

float calculateSubjectAverage(struct Student **students, int numStudents, int subjectIndex) {
    float totalMarks = 0.0;
    for (int i = 0; i < numStudents; i++) {
        totalMarks += students[i]->marks[subjectIndex];
    }
    return (totalMarks / numStudents);
}

void findHighestAverage(struct Student **students, int numStudents) {
    float highestAverage = 0.0;
    int index = -1;
    for (int i = 0; i < numStudents; i++) {
        float avg = calculateAverage(students[i]);
        if (avg > highestAverage) {
            highestAverage = avg;
            index = i;
        }
    }
    printf("\nStudent with the highest average mark: %s\n", students[index]->name);
}

void findHighestInEachSubject(struct Student **students, int numStudents, int numSubjects) {
    for (int i = 0; i < numSubjects; i++) {
        float highestMark = 0.0;
        int index = -1;
        for (int j = 0; j < numStudents; j++) {
            if (students[j]->marks[i] > highestMark) {
                highestMark = students[j]->marks[i];
                index = j;
            }
        }
        printf("Subject %d - Student with the highest mark: %s (%.2f)\n", i + 1, students[index]->name, highestMark);
    }
}
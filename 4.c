//Q4. Write down a program that takes sides of a triangle as user input and verify that the triangle can indeed be made out of these. Also tell whether the triangle is equilateral, isosceles or none of these. (Prior to this check the possibility of formation of triangle )

#include <stdio.h>

int main() {
    float s1, s2, s3;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &s1, &s2, &s3);

    if (s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2) {
        if (s1 == s2 && s2 == s3) {
            printf("It's an equilateral triangle.\n");
        } else if (s1 == s2 || s2 == s3 || s3 == s1) {
            printf("It's an isosceles triangle.\n");
        } else {
            printf("It's a scalene triangle.\n");
        }
    } else {
        printf("A triangle cannot be formed with these sides.\n");
    }

    return 0;
}

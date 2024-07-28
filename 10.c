//Q10.  Take n (an integer) from the user. Create an Array of size n that stores n number of elements of Pingal Series.


#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1;
    }

    int pingala[n];

    if (n >= 1) {
        pingala[0] = 0;
    }
    if (n >= 2) {
        pingala[1] = 1;
    }

    for (int i = 2; i < n; i++) {
        pingala[i] = pingala[i - 1] + pingala[i - 2];
    }

    printf("Pingala Sequence (first %d elements):\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d\n", pingala[i]);
    }

    return 0;
}

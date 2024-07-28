//Q5. Write down a program that takes two user inputs. m & p. Create an array that stores p prime numbers greater than m. The must be created using ‘malloc’. Print the array.


#include <stdio.h>
#include <stdbool.h>

bool prime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int m, p;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of p: ");
    scanf("%d", &p);

    printf("Prime numbers greater than %d are:\n", m);
    for (int i = m + 1; i < p; i++) {
        if (prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;

}
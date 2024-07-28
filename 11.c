//Q11. Prime is an Array that stores the prime numbers. Take the user input n, and store n prime numbers  in this array. No space should be wasted.


#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer for n.\n");
        return 1;
    }

    int prime[n];
    int count = 0;
    int num = 2;

    while (count < n) {
        if (is_prime(num)) {
            prime[count] = num;
            count++;
        }
        num++;
    }

    printf("First %d prime numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", prime[i]);
    }
    printf("\n");

    return 0;
}

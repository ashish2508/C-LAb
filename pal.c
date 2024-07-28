#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pal = 1; 

    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            pal = 0; 
            break;
        }
    }

    if (pal) { 
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}

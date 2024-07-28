//Q9. Create an array by taking the size and elements from the user. Calculate the occurrence of each element in the array. 
// Let Arr = 

// 2
// 7
// 2
// 3
// 7


// Output : 2 occurs 2 times
// 	     7 occurs 2 times
// 	2 occurs 2 times
// 	3 occurs 1 time
// 	7 occurs 2 time



#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int counted[size];
    for (int i = 0; i < size; i++) {
        counted[i] = 0;
    }

    printf("Output:\n");
    for (int i = 0; i < size; i++) {
        if (counted[i] == 1) {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                counted[j] = 1;
            }
        }

        printf("%d occurs %d time", arr[i], count);
        if (count > 1) {
            printf("s");
        }
        printf("\n");
    }

    return 0;
}

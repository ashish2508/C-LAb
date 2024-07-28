
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter the number of points: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input. Number of points should be positive.\n");
        return 1;
    }

    int points[n][2];

    printf("Enter the coordinates of the points:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Point %d (x y): ", i + 1);
        scanf("%d %d", &points[i][0], &points[i][1]);
    }

    int option;
    do
    {
        printf("\nMenu:\n1. Calculate distance between two points\n2. Find maximum distance\n3. Find minimum distance\n0. Exit\nEnter your choice: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
        {
            int i, j;
            printf("Enter indices of two points (1-%d): ", n);
            scanf("%d %d", &i, &j);
            if (i < 1 || i > n || j < 1 || j > n)
                printf("Invalid indices. Please enter valid indices.\n");
            else
            {
                int dx = points[j - 1][0] - points[i - 1][0], dy = points[j - 1][1] - points[i - 1][1];
                printf("Distance between point %d and point %d: %d\n", i, j, dx * dx + dy * dy);
            }
            break;
        }
        case 2:
        {
            int maxDistance = 0;
            for (int i = 0; i < n; i++)
                for (int j = i + 1; j < n; j++)
                {
                    int dx = points[j][0] - points[i][0], dy = points[j][1] - points[i][1], distance = dx * dx + dy * dy;
                    if (distance > maxDistance)
                        maxDistance = distance;
                }
            printf("Maximum distance among points: %d\n", maxDistance);
            break;
        }
        case 3:
        {
            int minDistance = -1;
            for (int i = 0; i < n; i++)
                for (int j = i + 1; j < n; j++)
                {
                    int dx = points[j][0] - points[i][0], dy = points[j][1] - points[i][1], distance = dx * dx + dy * dy;
                    if (minDistance == -1 || distance < minDistance)
                        minDistance = distance;
                }
            if (minDistance == -1)
                printf("No minimum distance found. There must be at least two points.\n");
            else
                printf("Minimum distance among points: %d\n", minDistance);
            break;
        }
        case 0:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
            break;
        }
    } 
    while (option != 0);
        free(points);
    return 0;
}

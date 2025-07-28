/* Sorting n strings
@Mahadevan Nair M P
28/07/2025
*/
#include <stdio.h>

int main() {
    int n;
    printf("\nEnter the number of strings: ");
    scanf("%d", &n);

    char a[n][30], temp[30]; // Array to store strings and a temp string for swapping
    int i, j;

    printf("\nEnter the strings one by one:\n");
    for (i = 0; i < n; i++)
        scanf("%s", a[i]); // Read strings

    printf("\nThe strings are:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", a[i]); // Display entered strings

    // Sorting strings using ASCII comparison
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            int k = 0;
            while (a[i][k] == a[j][k]) {
                k++; // Skip matching characters
            }
            if (a[i][k] > a[j][k]) {
                // Swap a[i] and a[j]
                for (k = 0; a[i][k] != '\0' || a[j][k] != '\0'; k++) {
                    temp[k] = a[i][k];
                    a[i][k] = a[j][k];
                    a[j][k] = temp[k];
                }
            }
        }
    }

    printf("\nThe strings in ascending order:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", a[i]); // Print sorted strings

    return 0;
}


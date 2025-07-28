/* To Find the determinant of a 2x2 and 3x3 matrix
@Mahadevan Nair M P
24/07/2025
*/

#include<stdio.h>

// Function to calculate determinant
float determinant(int a[3][3], int n) {
    float dit;

    // Case for 2x2 matrix
    if(n == 2) {
        // Formula: ad - bc
        dit = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
    }
    // Case for 3x3 matrix
    else if(n == 3) {
        dit = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
            - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
            + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);
    }

    return dit; // Return the result
}

int main() {
    int a[3][3], n, i, j;

    // Ask user for the size of the matrix (only 2 or 3 allowed)
    printf("\nEnter the number of rows or columns (2 or 3 only): ");
    scanf("%d", &n);

    // Validate input
    if(n != 2 && n != 3) {
        printf("\nOnly the determinant of 2x2 and 3x3 is possible with this program");
        return 0; // Exit the program
    }

    // Input matrix elements
    printf("\nEnter the elements in the matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    // Display the matrix
    printf("\nYour matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }

    // Call function to calculate determinant
    float deter = determinant(a, n);

    // Display the result
    printf("\nDeterminant of your matrix: %.2f\n", deter);

    return 0;
}


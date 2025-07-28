/* To Find the determinant of a 2x2 and 3x3 matrix
@Mahadevan Nair M P
24/07/2025
*/
#include<stdio.h>

// Function to calculate determinant of 2x2 or 3x3 matrix
int determinant(int a[3][3], int n) {
	int i, j;
	float dit;

	if(n == 2) {
		dit = (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
		return dit;
	} else if(n == 3) {
		dit = a[0][0] * (a[1][1] * a[2][2] - a[1][2] * a[2][1])
		    - a[0][1] * (a[1][0] * a[2][2] - a[1][2] * a[2][0])
		    + a[0][2] * (a[1][0] * a[2][1] - a[1][1] * a[2][0]);

		return dit;
	}
}

int main() {
	int a[3][3], n, i, j;

	// Input order of the matrix (2x2 or 3x3)
	printf("\nEnter the number of rows or columns (2 or 3 only): ");
	scanf("%d", &n);

	// Validate input
	if(n != 2 && n != 3) {
		printf("\nOnly the determinant of 2x2 and 3x3 is possible with this program");
		return 0;
	}

	// Input matrix elements
	printf("\nEnter the elements in the matrix:\n");
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	// Display the matrix
	printf("\nYour matrix:\n");
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	// Calculate and display determinant
	float deter = determinant(a, n);
	printf("\nDeterminant of your matrix: %d", deter);

	return 0;
}


/* Addition and subtraction of matrix
@Mahadevan Nair M P
23/07/2025 */

#include<stdio.h>

int main(){
	int a[5][5], b[5][5], c[5][5], d[5][5], n, m, i, j;

	// Get the number of rows and columns from the user
	printf("\nEnter the rows and columns of the matrix: ");
	scanf("%d%d", &n, &m);
	
	// Input elements for the first matrix
	printf("\nEnter the elements of the 1st matrix:\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}

	// Input elements for the second matrix
	printf("\nEnter the elements of the 2nd matrix:\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &b[i][j]);
		}
	}

	// Display the first matrix
	printf("\nElements in the 1st matrix:\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	// Display the second matrix
	printf("\nElements in the 2nd matrix:\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}

	// Perform matrix addition: c[i][j] = a[i][j] + b[i][j]
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}

	// Display the sum matrix
	printf("\nSum of the 2 matrices:\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}

	// Perform matrix subtraction: d[i][j] = a[i][j] - b[i][j]
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			d[i][j] = a[i][j] - b[i][j];
		}
	}

	// Display the difference matrix
	printf("\nDifference of the 2 matrices:\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			printf("%d ", d[i][j]);
		}
		printf("\n");
	}

	return 0;
}


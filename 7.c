/* Program to display the reverse of an array using recursion
@Mahadevan Nair M P
23/07/2025 */

#include<stdio.h>

int a[10], n;

// Recursive function to display elements in reverse
int disp(int i){
	if(i < 0) // Base case: stop when index is less than 0
		return;

	printf("%d ", a[i]); // Print current element
	return disp(--i); // Recursive call with previous index
}

int main(){
	int i;

	// Ask user for the number of elements
	printf("\nEnter the number of elements in array: ");
	scanf("%d", &n);
	
	// Input array elements
	printf("\nEnter the elements in the array: ");
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);

	// Display message and call the recursive function
	printf("Elements in reverse order are: ");
	disp(n - 1); // Start from the last index

	return 0;
}


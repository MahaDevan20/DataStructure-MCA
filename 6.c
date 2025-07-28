/* Program to display an array using recursion
@Mahadevan Nair M P
23/07/2025 */

#include<stdio.h>

int a[10], n;

// Recursive function to display elements
int disp(int i){
	if(i >= n) // Base case: if index goes out of range, stop
		return;

	printf("%d ", a[i]); // Print current element
	return disp(++i); // Recursive call to print next element
}

int main(){
	int i;

	// Ask user how many elements to enter
	printf("\nEnter the number of elements in array: ");
	scanf("%d", &n);
	
	// Input the elements
	printf("\nEnter the elements in the array: ");
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);

	// Display message and call recursive function
	printf("Elements are: ");
	disp(0);

	return 0;
}


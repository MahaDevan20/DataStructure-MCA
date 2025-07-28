/* To Find the occurrences of an element in an array
@Mahadevan Nair M P
23/07/2025 */

#include<stdio.h>

int main(){
	int count=0, e, i, n;

	// Ask user for number of elements in the array
	printf("\nEnter the number of elements in the array:");
	scanf("%d", &n);
	
	int a[n]; // Declare array of size n
	
	// Input elements into the array
	printf("\nEnter the elements in the array:");
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	
	// Ask the user which element to search for
	printf("\nEnter the element you want to find the occurrence:");
	scanf("%d", &e);
	
	// Search through the array to count and show where the element occurs
	for(i = 0; i < n; i++){
		if(e == a[i]){ // If element matches
			++count; // Increase count
			printf("\nOccurrence at index %d", i); // Print the index
		}
	}
	
	// If element not found at all
	if(count == 0)
		printf("Element not in the array");
	
	// Print total number of times the element occurred
	printf("\nThe element has occurred %d times", count);
	
	return 0;
}


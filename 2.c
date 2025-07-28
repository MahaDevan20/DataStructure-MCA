/* Array operations using Global variable
@Mahdadevan Nair M P
24/07/2025
*/
#include<stdio.h>
#define n 10
int a[n]; // Global array of fixed size
int count = -1; // Tracks number of elements in array

// Function to insert a value at a specified position
void insert(int value, int pos) {
	int i;
	if (count <= 1) {
		a[++count] = value;
	} else {
		for (i = count; i >= pos; i--) {
			a[i + 1] = a[i]; // Shift elements to the right
		}
		a[pos] = value; // Insert at position
		++count;
	}
}

// Function to delete a value from the array
void del(int value) {
	int pos = search(value); // Find position of value
	int i;
	for (i = pos; i <= count; i++) {
		a[i] = a[i + 1]; // Shift elements to the left
		count--; // Decrease count
		printf("\nElement deleted");
	}
}

// Function to search for a value in the array
int search(int value) {
	int i, flag = 0;
	for (i = 0; i <= count; i++) {
		if (a[i] == value) {
			flag = 1;
			break;
		}
	}
	if (flag == 1) {
		printf("\nThe element %d is found at the %d position", value, i);
		return i; // Return index if found
	} else {
		printf("\nElement not in the array");
	}
}

// Function to sort the array in ascending order
void sort() {
	int i, j;
	for (i = 0; i <= count; i++) {
		for (j = i + 1; j <= count; j++) {
			if (a[j] < a[i]) {
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp; // Swap elements
			}
		}
	}
	printf("\nThe array has been sorted!");
}

// Function to display the array contents
void display() {
	int i;
	printf("\nThe array is:");
	for (i = 0; i <= count; i++) {
		printf("%d ", a[i]);
	}
}

// Function to provide user menu and handle choices
void choice() {
	int ch, value, pos;
	while (ch != 6) {
		printf("\n1.Insert\n2.Delete\n3.Search\n4.Sort\n5.Display\n6.Exit\nEnter your choice:");
		scanf("%d", &ch);
		switch (ch) {
			case 1:
				if (count == -1) {
					printf("\nEnter the value you want to insert:");
					scanf("%d", &value);
					insert(value, 0);
					break;
				} else {
					printf("\nEnter the position you want to enter the element:");
					scanf("%d", &pos);
					printf("\nEnter the value you want to insert:");
					scanf("%d", &value);
					insert(value, pos);
					break;
				}

			case 2:
				if (count == -1) {
					printf("%d", count);
					printf("\nThere is nothing in the array to delete");
					break;
				}
				printf("\nEnter the value you want to delete:");
				scanf("%d", &value);
				del(value);
				break;

			case 3:
				if (count == -1) {
					printf("Array is empty");
					break;
				}
				printf("\nEnter the value you want to search:");
				scanf("%d", &value);
				search(value);
				break;

			case 4:
				if (count == -1) {
					printf("Array is empty");
					break;
				}
				sort();
				break;

			case 5:
				if (count == -1) {
					printf("Array is empty");
					break;
				}
				display();
				break;

			case 6:
				printf("\nThe program is ending");
				break;

			default:
				printf("\nInvalid choice");
				break;
		}
	}
}

// Main function to start the program
int main() {
	choice();
	return 0;
}


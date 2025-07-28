/* Program to sort an array
@Mahadevan Nair M P
23/07/2025 */
#include <stdio.h>
int a[10], n;  // Global array and variable to store number of elements
// Function to insert elements into the array
void insert() {
    int i;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements in the array: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

// Function to display the elements of the array
void display() {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// Function to sort the array using simple bubble sort logic
void sort() {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[j] < a[i]) {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("\nThe sorted array is: ");
    display();
}

// Function to display menu and perform user-chosen operations
void choices() {
    int ch = 0;  // Initialize ch to enter the loop
    while(ch != 4) {
        printf("\n1. Insert\n2. Display\n3. Sort\n4. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch(ch) {
            case 1:
                insert();
                break;
            case 2:
                printf("\nThe elements in the array: ");
                display();
                break;
            case 3:
                sort();
                break;
            case 4:
                printf("\nExiting program.\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
                break;
        }
    }
}

// Main function - program execution starts here
int main() {
    choices();
    return 0;
}


#include <stdio.h>

int n; // number of elements

void heapify(int a[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Find the largest among root, left child and right child
    if (left < n && a[left] > a[largest])
        largest = left;
    if (right < n && a[right] > a[largest])
        largest = right;

    // Swap and continue heapifying if root is not largest
    if (largest != i) {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;
        heapify(a, n, largest);
    }
}

void buildHeap(int a[], int n) {
    int i;
    // Build max heap by heapifying from last non-leaf node up to root
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
}

void heapSort(int a[], int n) {
    int i, temp;
    buildHeap(a, n);  // First, convert array into a max heap

    for (i = n - 1; i > 0; i--) {
        // Swap the root(maximum) with last element
        temp = a[0];
        a[0] = a[i];
        a[i] = temp;

        // Heapify the reduced heap
        heapify(a, i, 0);
    }
}

int main() {
    int i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[100]; // Using fixed size array for old compilers

    printf("Enter the elements in the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nArray before sort: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    heapSort(a, n);

    printf("\nArray after sort: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}


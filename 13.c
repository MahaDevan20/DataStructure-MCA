/* Reversing a string
@Mahadevan Nair M P
23/07/2025 */

#include <stdio.h>
#define s 10  // Maximum size of the string

int main() {
    char a[s];     // Character array to store the string
    int i, len = 0;

    // Input string
    printf("Enter the string: ");
    scanf("%s", a);  // Note: This will read string until space

    // Find the length of the string manually
    while (a[len] != '\0') {
        len++;
    }

    // Print the string in reverse
    printf("Reversed string: ");
    for(i = len - 1; i >= 0; i--) {
        printf("%c", a[i]);
    }

    return 0;
}


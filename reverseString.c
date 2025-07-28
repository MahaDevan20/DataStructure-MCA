/* Reversing a string using Stack
@Mahadevan Nair M P
23/07/2025 */
#include <stdio.h>
#define s 10          // max size of stack

int top = -1;
char stack[s];

// push character to stack
void insert(char a) {
    stack[++top] = a;
}

int main() {
    char a[s];
    int i;

    printf("Enter the string: ");
    scanf("%s", a);   // input string

    // push each char to stack
    for(i = 0; a[i] != '\0'; i++) {
        insert(a[i]);
    }

    // print reversed string
    printf("Reversed string: ");
    for(i = top; i >= 0; i--) {
        printf("%c", stack[i]);
    }

    return 0;
}


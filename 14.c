/* Reversing a string with a single array
@Mahadevan Nair M P
23/07/2025 */

#include <stdio.h>
#define s 10          // max size of stirng
int main() {
    char a[s];
    int i,j,pos=-1;

    printf("Enter the string: ");
    scanf("%s", a);   // input string

    // Finding length of the string
    for(i = 0; a[i] != '\0'; i++) {
        ++pos;
    }
    
    //reversing the string
    for(i=0,j=pos; i<j ;i++,j--){
    	char temp= a[i];
    	a[i]=a[j];
    	a[j]=temp;
	}

    // print reversed string
    printf("Reversed string: ");
    for(i = 0; a[i] != '\0'; i++) {
        printf("%c", a[i]);
    }

    return 0;
}


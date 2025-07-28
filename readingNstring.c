/* Reading n strings and displaying them in ascending order
@Mahadevan Nair M P
23/07/2025 */
#include<stdio.h>
int main(){
	int n,i;
	printf("\nEnter the number of strings:");
	scanf("%d",&n);
	char str[10][10];
	printf("\nEnter strings:");
	for(i=0;i<n;i++){
		
		scanf("%s",str[i]);
		
	}

	printf("The strings are:\n");
	for(i=0;i<n;i++)
		printf("%s\n",str[i]);
		
	return 0;
}

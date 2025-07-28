/* To Find the occurances of an element in an array
@Mahadevan Nair M p
23/07/2025*/

#include<stdio.h>
int main(){
	int count=0,e,i,n;
	printf("\nEnter the number of elements in the array:");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\n Enter the elements in the array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("\nEnter the element you want to find the occurance:");
	scanf("%d",&e);
	
	for(i=0;i<n;i++){
		if(e==a[i]){
			++count;
			printf("\n occurance at %d",i);
		}
	}
	if(count==0)
		printf("Element not in the array");
	
	printf("\nThe element has occured %d times",count);
	return 0;
}

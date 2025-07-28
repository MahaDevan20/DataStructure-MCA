/* Program display an array using recursion
@Mahadevan Nair M P
23/07/2025 */
#include<stdio.h>
int a[10],n;
int disp(int i){
	if(i>=n)
		return;
	
	printf("%d ",a[i]);
	return disp(++i);
}
int main(){
	int i;
	printf("\nEnter the elements in array:");
	scanf("%d",&n);
	
	printf("\nenter the elements in the array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Elements are:");
	disp(0);
	return 0;
}


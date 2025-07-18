#include<stdio.h>
void dis(int n,int i){
	if(i>n)
		return;
	
	printf("%d \t",i);
	dis(n,++i);
}
int main(){
	int n,i=1;
	printf("Enter the number:");
	scanf("%d",&n);
	dis(n,i);
	return 0;
}

#include<stdio.h>
int n,m;


void swap(int,int,int[]);
void buildheap(int[]);

void heapify(int a[],int n,int i){
	
	int largest=i;
	int lf=i*2+1;
	int rf=i*2+2;
	
	if(lf<n && a[largest]<a[lf])
		largest=lf;
	
	if(rf<n && a[largest]<a[rf])
		largest=rf;
	
	if( largest != i){
		swap(i,largest,a);
		heapify(a,n,largest);
	}

}


void buildheap(int a[]){
	int i=0;
	for(i=n/2-1;i>=0;i--)
		heapify(a,n,i);
}


void swap(int i,int j,int a[]){
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	
}
int main(){
	printf("\nEnter the number of elements in the array:");
	scanf("%d",&n);
	
	int a[n],i;
	n-=1;
	m=n;
	printf("\nEnter the elements:\n");
	for(i=0;i<=n;i++)
		scanf("%d",&a[i]);
	
	printf("\nThe array before sorting is:");
	for(i=0;i<=n;i++)
		printf("%d ",a[i]);
		
	buildheap(a);
	
	printf("\nThe array after sorting is:");
	for(i=0;i<=m;i++)
		printf("%d ",a[i]);
	
	return 0;
}

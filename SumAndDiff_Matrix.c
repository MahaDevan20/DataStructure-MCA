/* Addition and subtraction of matrix
@Mahadevan Nair M p
23/07/2025*/
#include<stdio.h>
int main(){
int a[5][5],b[5][5],c[5][5],d[5][5],n,m,i,j;
	printf("\nEnter the rows and columns of the matrix:");
	scanf("%d%d",&n,&m);
	
	printf("\nEnter the elements of the 1st matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter the elements of the 2nd matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n Elements in the 1st matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Elements in the 2nd matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("\n Sum of the 2 matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			d[i][j]=a[i][j] - b[i][j];
		}
	}
	
	printf("\n difference of the 2 matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",d[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

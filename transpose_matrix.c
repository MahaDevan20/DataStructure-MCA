/* To find transpose of a matrix
@Mahadevan Nair M P
23/07/2025 */
#include<stdio.h>
int main(){
int a[5][5],b[5][5],n,m,i,j;
	printf("\nEnter the rows and columns of the matrix:");
	scanf("%d%d",&n,&m);
	
	printf("\nEnter the elements of the matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\n The array you entered:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[i][j]=a[j][i];
		}
	}
	
	
	printf("\nTHe transpose of the matrix is:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}

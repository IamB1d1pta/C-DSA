#include<stdio.h>
int main()
{
	int i,j,m,n,arr[10][20];
	printf("Enter row num: ");
	scanf("%d",&m);
	printf("Enter coloumn num: ");
	scanf("%d",&n);
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter arr[%d][%d]",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for ( i = 0; i < m; i++ )
 {
 for ( j = 0; j < n; j++ )
 {
 printf("arr[%d][%d] = %d\n", i,j, arr[i][j] );
 }
 }
 return 0;
}

#include<stdio.h>
int main()
{
	int a[100],n,i,k,j;;
	printf("Enter size of array");
	scanf("%d",&n);
	printf("Enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				k=a[j];
				a[j]==a[i];
				a[i]=k;
			}
			else if(a[i]==a[j])
			{
				a[i]=-1;
			}
		}
	}
printf("After sorting array is: \n");
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
		printf(" %d",a[i]);
	}
	}
	printf("\n");
}


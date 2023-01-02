#include<stdio.h>
int main()
{
	int a[20];
	int i,k,b,n,j;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements: ");
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
				b=a[j];
				a[j]==a[i];
				a[i]=b;
			}
			else if(a[i]==a[j])
			{
				a[i]=-1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=-1)
		{
		printf("\n%d",a[i]);
	}
}
}

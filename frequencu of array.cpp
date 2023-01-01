#include<stdio.h>
int main()
{
	int a[20],i,j,n,p=0,k,b[20];
	printf("Enter size of the array");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		p=1;
		if(a[i]!=-1){
		
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				p++;
				a[j]=-1;
			}
		}
	}
			b[i]=p;
			
			
		}for(i=0;i<n;i++)
		{
			if(a[i]!=-1){
			printf("\n%d occurs %d times",a[i],b[i]);
		}
	
			
		
		   
	}
	printf("\n");
}


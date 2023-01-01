//Write a C program to find out the
//difference between the sum of even numbers
//and sum of odd numbers and all numbers are
//integers and they belong to same integer
//array
#include<stdio.h>
 int main()
 {
 	int a[20],b[20],fact=1,n;
 	int i,j,l,k=0,f=0;
 	printf("Enter array size: ");
 	scanf("%d",&n);
 	printf("Enter elements: ");
 		for(i=0;i<n;i++)
 		{
 			scanf("%d",&a[i]);
		 }
		 for(i=0;i<n;i++)
		 {
		 	if(a[i]%2==1)
		 	{
		 		k=k+a[i];
			 }
			 else if(a[i%2==0])
			 {
			 	f=f+a[i];
			 }
		 }
		 printf("\nSum of all odd numbers is %d",k);
		 printf("\nsum of all even numbers id %d",f);
		 if(f>k)
		 printf("\nDifference of even and odd number is %d",f-k);
		 else if(k>f)
		 printf("\nDifference of odd and even number is %d",k-f);
		
	}


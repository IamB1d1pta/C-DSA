//(Write a C program to check whether the
//factorial value of any element of an integer
//array (user given) is present in that array or
//not. If yes, display the element and its factorial
//value present in that array.)
#include<stdio.h>
 int main()
 {
 	int a[20],b[20],fact=1,n;
 	int i,j,l,k;
 	printf("Enter array size: ");
 	scanf("%d",&n);
 	printf("Enter elements: ");
 		for(i=0;i<n;i++)
 		{
 			scanf("%d",&a[i]);
		 }
		 for(i=0;i<n;i++)
		 {
		 	if(a[i]<0)
		 	printf("Fact if %d is not present",a[i]);
		 	else{
			 fact=1;
		 	if(a[i]!=0)
		 	{
			 for(j=1;j<=a[i];j++)
		 	
		 		fact=fact*j;
		 	}
			 
			 l=1;
			 for(k=0;k<n;k++)
			 {
			 	if(a[k]==fact)
			 	{
			 		l=0;
			 		break;
				 }
			 }
			 if(l==0)
			 printf("\n Factorial of %d is %d which is present",a[i],fact);
			 else
			 printf("\n Factorial of %d is not present",a[i]);
		}
	}
	return 0;
			 
	}

// 1. Write a program to calculate sum of first N natural numbers.

#include<stdio.h>
int main()
{	
       	// while loop using
	int i=1,n,sum=0;
	printf("Enter a number to print sum of natural numbers : ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum + i;
		i++;
	}
      printf("sum of natural number is %d",sum);
return 0;	
}

        // for loop using
    /* int i,n,sum=0;
	printf("Enter a number to print a sum of first n natural numbers :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
      
	}
	 printf("sum of first n natural number %d",sum);  */

       // do while loop using
    /* int i,n,sum=0;
	printf("enter a number to print a sum of natural numbers :");
	scanf("%d",&n);
	do
	{
	sum=sum+i;
	i++;
    }
    while(i<=n);
    printf(" %d",sum);  */
 
	   

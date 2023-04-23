// 2. Write a program to calculate sum of first N even natural numbers.

#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter a number to print sum of  natural number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	printf("sum of even natural number is %d",sum);
	return 0;
}

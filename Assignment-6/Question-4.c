// 4. Write a program to calculate sum of squares of first N natural numbers.

#include<stdio.h>
int main()
{
	int i,n,sum=0,square;
	printf("Enter a number to print sum of squares of natural numbers : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		square=i*i;
		sum=sum+square;
	}
	printf("Sum of squares natural number is %d",sum);
	return 0;
}

// 5. Write a program to calculate sum of cubes of first N natural numbers.

#include<stdio.h>
int main()
{
	int i,n,sum=0,cube;
	printf("Enter a number to print sum of cube of natural numbers :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		cube=i*i*i;
		sum=sum+cube;
	}
	printf("sum of cube natural number is %d",sum);
	return 0;
}

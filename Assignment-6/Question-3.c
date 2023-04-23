// 3. Write a program to calculate sum of first N odd natural numbers

#include<stdio.h>
int main()
{
	int i,sum=0,n;      //by default sum=1
	printf("Enter a number to print sum of  odd natural numbers : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			sum=sum+i;
		}
		
	}
	printf("sum of odd natural number is %d",sum);
	return 0;
}

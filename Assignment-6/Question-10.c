// 10. Write a program to reverse a given number.

#include<stdio.h>
int main()
{      // while loop using
	int i,n,rem,rev=0;
	printf("Enter a number to print : ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem =n%10;
		rev=rev*10 + rem;
		n=n/10;
	}
	printf("Reverse number is %d",rev);
	return 0;
    }

       //  for loop using
   /* int i,n,rev=0,rem;
      printf("Enter a number to print : ");
	  scanf("%d",&n);
      for(i=0;n!=0;i++)
      {
    	rem =n%10;
		rev=rev*10 + rem;
		n=n/10;
      }
      printf("Reverse number is %d",rev);
      return 0; */


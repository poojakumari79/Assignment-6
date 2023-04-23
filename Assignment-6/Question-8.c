// 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
int main()
{
	int n,flag=0,i;  // flag means after a loop, codition dicided our code is true or flase 
	printf("Enter a number to print prime number or not : ");
	scanf("%d",&n);
	for(i=2;i<n;i++)   // 0 and 1 are not considered as a prime number therfore initialization is 2
	 {
	 	if(n%i==0)
	 	{	
	 		flag = 1;     // flag contain any number
	 		break;
		 }
	 }
	 if(flag==1)
	 {
	 	printf("%d is not a prime number",n);
	 }
	 else if(flag==0)
	 {
	 	printf("%d is  prime number",n);
	 }
	 return 0;
	
}

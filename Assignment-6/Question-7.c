// 7. Write a program to count digits in a given number.
 #include<stdio.h>
 int main()
 {
 	   // while loop using
 	int i=0,n; 
 	printf("Enter a number : ");
 	scanf("%d",&n);
 	while(n!=0)
 	{
 		n=n/10;
 	    i++;
 		
	}
	 printf("count digits %d",i);
    return 0;
    } 
    
      // for loop using
    /*  int i,n;
	 for(i=0;i<=n;i++)
	 {
	 n=n/10;
	 }
	 printf("count digits %d",i);
     	return 0;
     }  */
 
 

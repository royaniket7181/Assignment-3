#include<stdio.h>
int main()
{
	int num;
	
	printf("\nEnter a number:");
	scanf("%d",&num);
	
	if(num%7==0)
	{
	  printf("\n%d is divisible by 7.",num);
      if(num%3==0)
       printf("\n%d is divisible by 3.",num);
	
	  else
	   printf("\n%d is not divisible by 3.",num);
     }
	
	else
    {
		printf("%d is not divisible by 7.",num);
		
		if(num%3==0)
         printf("\n%d is divisible by 3.",num);
	
	    else
	     printf("\n%d is not divisible by 3.",num);
		
    }
}

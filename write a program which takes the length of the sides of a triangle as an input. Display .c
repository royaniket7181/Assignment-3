#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("\nEnter first side of triangle:");
	scanf("%d",&a);
	
	printf("\nEnter second side of triangle:");
	scanf("%d",&b);
	
	printf("\nEnter third side of triangle:");
	scanf("%d",&c);
	
	if(c>b&&c>a)
	{
	  if((a+b)>c)
	  printf("\nTringle can be made with your given output:");
      
      else
      printf("Triangle can't be made with given o/p.");
    
	}
	
	if(a>b&&a>c)
	{
	  if((c+b)>a)
	  printf("\nTringle can be made with your given output:");
      
      else
      printf("Triangle can't be made with given o/p.");
    
	}
	
	if(b>c&&b>a)
	{
	  if((a+c)>b)
	  printf("\nTringle can be made with your given output:");
      
      else
      printf("Triangle can't be made with given o/p.");
    
	}
}
		
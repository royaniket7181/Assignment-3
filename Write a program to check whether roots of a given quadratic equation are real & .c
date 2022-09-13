#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ax^2-bx+c=0\n");
	printf("enter the value of a,b,c for equation:\n");
	
	printf("enter the value of a:\n");
	scanf("%d",&a);
	
	printf("enter the value of b:\n");
	scanf("%d",&b);

	printf("enter the value of c:\n");
	scanf("%d",&c);	
	
	if((b^2-4*a*c)==0)
	printf("the given equation have equal roots:");
	
	if((b^2-4*a*c)>0)
	printf("the given equation have real and unequal roots:");
	
	if((b^2-4*a*c)<0)
	printf("the given equation have imaginary roots:");
	
	
}
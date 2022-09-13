#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("enter the first num:");
	scanf("%d",&num1);
	printf("enter the second num:");
	scanf("%d",&num2);
	
	if(num1>num2)
	printf("%d is the greatest number:",num1);
	else if(num2>num1)
	printf("%d is the greatest number:",num2);
	else
	printf("both are the same:");
}
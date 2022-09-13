#include<stdio.h>
int main()
{
	int num;
	printf("enter a number to be checked:");
	scanf("%d",&num);
	
	if(num>0)
	printf("\n%d is a positive no.",num);
	
	if(num<0)
	printf("\n%d is a negative no.",num);
	
	if(num==0)
	printf("\n%d is a zero",num);
}
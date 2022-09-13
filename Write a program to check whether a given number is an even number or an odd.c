#include<stdio.h>
int main()
{
	int num;
	printf("enter a num:");
	scanf("%d",&num);
	if(num/2*2==num)
	printf("given num is even:");
	else
	printf("given num is odd:");
}
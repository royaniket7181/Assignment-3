#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("enter the num:");
	scanf("%d",&num);
	while(num>0)
	{
		num=num/10;
		count++;
	}
	
	if(count==3)
	printf("given number is a three digit number:");
	else
	printf("given number is not a three digit number:");
}
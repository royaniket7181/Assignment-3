#include<stdio.h>
int main()
{
	int year;
	printf("enter the year to be checked:");
	scanf("%d",&year);
	if(year%4!=0)
	printf("this is not a leap year:");
	if(year%4==0)
	{
		if(year%100!=0)
		printf("this is a leap year:");
		else if(year%100==0)
		{
			if(year%400!=0)
			printf("this is not a leap year:");
			else if(year%400==0)
			{
				printf("this is a leap year:");
			}
		}
	}
}
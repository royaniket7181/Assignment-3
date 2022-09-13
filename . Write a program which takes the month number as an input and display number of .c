#include<stdio.h>
int main()
{
	int num;
	
	printf("\nEnter the month number:");
	scanf("%d",&num);
	
	if(num==1||num==3||num==5||num==7||num==8||num==10||num==12)
	printf("\nThe month number you have entered have 31 days.");
	
	else if(num==4||num==6||num==9||num==11)
	printf("\nThe month number you have entered have 30 days.");
	
	else if(num==2)
	printf("\nThe month number you have entered have 28 days in a normal year.");
	
	else
	printf("\nYou have entered a wrong month number.");
	
}
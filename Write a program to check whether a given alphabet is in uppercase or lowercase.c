#include<stdio.h>
int main()
{
	char m;
	
	printf("\nenter the alphabet to be checked:");
	scanf("%c",&m);
	
	if(m>=65&&m<=90)
	printf("\n%c is in uppercase.",m);
	
	if(m>=97&&m<=122)
	printf("\n%c is in lowercase.",m);
	
	
}
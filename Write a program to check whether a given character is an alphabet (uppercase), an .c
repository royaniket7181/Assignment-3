#include<stdio.h>
int main()
{
	char character;
	
	printf("\nEnter the character the to be checked:");
	scanf("%c",&character);
	
	if(character>=33&&character<=47)
	printf("\nYou have entered a spacial character.");
	
	if(character>=58&&character<=64)
	printf("\nYou have entered a spacial character.");
	
	if(character>=91&&character<=96)
	printf("\nYou have entered a spacial character.");
	
	if(character>=123&&character<=126)
	printf("\nYou have entered a spacial character.");
	
	if(character>=65&&character<=90)
	printf("\nYou have entered an alphabet in uppercase .");
	
	if(character>=97&&character<=122)
	printf("\nYou have entered an alphabet in lowercase .");
	
	if(character>=48&&character<=57)
	printf("\nYou have entered a digit.");
	
	
	
	
}
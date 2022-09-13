#include<stdio.h>
int main()
{
	int cp,sp;
	int p,l,pp,lp;
	printf("enter the cost price of product:");
	scanf("%d",&cp);
	
	printf("\nenter the selling price of product:");
	scanf("%d",&sp);
	
	if(cp<sp)
	{
		printf("you took profit of ruppees:%d\n",sp-cp);
		
		p=sp-cp;
		pp=p/cp*100;
		printf("profit percentage is %d",pp);
	}
	
		if(cp>sp)
	{
		printf("you took loss of ruppees:%d\n",cp-sp);
	
		l=cp-sp;
		lp=l/cp*100;
		printf("loss percentage is %d",lp);
	}
	
}
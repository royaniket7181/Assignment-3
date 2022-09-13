#include<stdio.h>
int main()
{    
    int s1,s2,s3,s4,s5;
	 
	printf("\nenter the marks in Maths:");
	scanf("%d",&s1);
	
	printf("\nenter the marks in Hindi:");
	scanf("%d",&s2);
	
	printf("\nenter the marks in English:");
	scanf("%d",&s3);
	
	printf("\nenter the marks in Science:");
	scanf("%d",&s4);
	
	printf("\nenter the marks in Sst:");
	scanf("%d",&s5);
	
	if(s1>=0&&s1<=100)
	{
	    if(s1>33)
	    printf("\nyou are passed in maths.");
	
	    else
	    printf("\nyou are failed in maths.");
    }
    
    if(s2>=0&&s2<=100)
    {
	 
	   if(s2>33)
	   printf("\nyou are passed in Hindi.");
	
	    else
	    printf("\nyou are failed in Hindi.");
    }
    
	if(s3>=0&&s3<=100)
	{
	
	   if(s3>33)
	   printf("\nyou are passed in English.");
	
	   else
	   printf("\nyou are failed in English.");
    }
     
	if(s4>=0&&s4<=100)
	{
	    if(s4>33)
	    printf("\nyou are passed in Science.");
	
	    else
	    printf("\nyou are failed in Scence.");
    }
    
    if(s5>=0&&s5<=100)
	{	
	    if(s5>33)
	    printf("\nyou are passed in Sst.");
	
	    
	    printf("\nyou are failed in Sst.");
    }
}
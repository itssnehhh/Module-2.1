//Convert years into days and days into years
#include<stdio.h>
int main()
{
	int num;
	float ans,i;
	
	printf("press 1. to convert years into days\npress 2. to convert days into year");
	printf("\n\nEnter the number :- ");
	scanf("%d",&num);
	
	if(num==1)
	{
	printf("\nEnter the number of year:");
	scanf("%f",&i);
	
	ans=i*365;
	printf("%f",ans);
	
	}
	
	else if(num==2)
	{
	printf("\nEnter the number of days :- ");
	scanf("%f",&i);
	
	ans=i/365;
	printf("%f",ans);
		
	}
	
	else
	{
	printf("Please enter a valid Number.");
	}
	

}
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the Year:- ");
	scanf("%d",&year);
	
	if(year%4==0) //year is devided by 4 
	{
	printf("This year is a Leap year.");
	}
	
	else //year is not devided by 4
	{
	printf("This year is not a Leap year.");
	}
	
	return 0;
}
//Find the Area of triangle
#include<Stdio.h>
int main()
{
	float b,h,Area;
	
	printf("--Area of Triangle--");
	
	printf("\nEnter the value of Base :- ");
	scanf("%f",&b);
	printf("Enter the value of Height :- ");
	scanf("%f",&h);
	
	Area=(b*h)/2;
	printf("Area of triangle is= %f",Area);
		
	return 0;
}
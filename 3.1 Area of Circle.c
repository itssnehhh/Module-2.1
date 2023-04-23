#include <stdio.h>
int main()
{
	int r; //(r=radious of circle)
	float pi=3.14;
	float ANS;
	printf("--AREA OF CIRCLE--");
	printf("\n\n Enter the value of r:-");
	scanf("%d",&r);
	
	ANS=pi*r*r;
	printf("Area of circle is= %f",ANS);
	
	return 0;
}
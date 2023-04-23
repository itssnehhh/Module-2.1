//prn/100 ans

#include<stdio.h>

int main()
{
	int p,r,n; 
	float ans;
	/* p= Principal, r= rate of intrest, n= time span.*/
  
  printf("--SIMPLE INTREST--");
  
  printf("\n Enter the value of p");
  scanf("%d",&p);
  printf("Enter the value of r");
  scanf("%d",&r);
  printf("Enter the value of n");
  scanf("%d",&n);
  
  ans=p*r*n/100;
  printf("\n The Simple Intrest rate is= %f",ans);
  
  return 0;
	
	
	
	
	
	
	
	
}
//Simple Calculator
#include<stdio.h>
int main()
{
	int num1,num2,Ans;
	char symbol;
	
	printf("Enter a Symbol (+,-,*,%,/) :- ");
	scanf("%c",&symbol);
	printf("Enter the value of num1 :- ");
	scanf("%d",&num1);
	printf("Enter the value of num2 :- ");
	scanf("%d",&num2);
	
	
	switch(symbol)
	{
	case '+':
	Ans=num1+num2;
	printf("Addition of num1 and num2 is = %d ",Ans);
	break;	
		
	case '-':
	Ans=num1-num2;
	printf("Subtraction of Num1 and Num2 is = %d",Ans);	
	break;
		
	case '*':
	Ans=num1*num2;	
	printf("Multiplication of Num1 and Num2 is = %d",Ans);	
	break;	
	
	case '/':	
	Ans=num1/num2;
	printf("Division of Num1 and Num2 is = %d",Ans);	
	break;
	
	case '%':
	Ans=num1%num2;
	printf("Modulo of num1 and num2 is = %d ",Ans);
	break;
	
	default:
	printf("Please enter a valid Operator.");
	}
	return 0;
} 
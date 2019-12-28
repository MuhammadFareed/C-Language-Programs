#include<stdio.h>
#include<conio.h>
void add(float,float);
void sub(float,float);
void mul(float,float);
void div(float,float);
int main()
{
	char choice,option;
	float a,s;
	int i;
	for (i=1;i<=30;i++){
	printf(" ");}
	printf("Calculator\n");
	do
	{
	printf("Enter a number\n");
	scanf("%f",&a);
	printf("Again enter a number\n");
	scanf("%f",&s);
	printf("Which operation do you want to perform	+ OR  -  OR  *  OR /\n");
	scanf("%c",&choice);
	choice=getch();
	switch(choice)
	{
		case '+':
			add(a,s);
			break;
		case '-':
		    sub(a,s);
		    break;
		case '*':
			mul(a,s);
			break;
		case '/':
			div(a,s);
			break;
	default:
		printf("Invalid Choice");
	}
	printf("Do you want to continue???\n");
	scanf("%c",&option);
	} while (option=='Y'||option=='y');
}
	void add(float a,float s)
	{
		printf("\nAddition of given numbers is %.2f\n",a+s);
	}
	void sub(float a, float s)
	{
		printf("\nSuntraction of given numbers is %.2f\n",a-s);
	}
	void mul(float a, float s)
	{
		printf("\nMultiplication of given numbers is %.2f\n",a*s);
	}
	void div(float a, float s)
	{
		if (s!=0)
		printf("\nDivision of given numbers is %.2f\n",a/s);
		else
		printf("\nMath Error\n");
	}

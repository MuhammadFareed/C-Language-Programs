#include<stdio.h>
#include<conio.h>
void add(float,float);
void sub(float,float);
void mul(float,float);    		         	/*        By myself       */
void div(float,float);
int main()
{
	char choice,option;
	float a,b;
	int i;
	for (i=1;i<=15;i++)
	{
		printf(" ");
	}
	printf("\nCALCULATOR");
	do
	{
	
	printf("\nEnter a number");
	scanf("%f",&a);
	printf("\nAgain enter a number");
	scanf("%f",&b);
	printf("\nWhich operation do you want to perform  +  OR  -  OR  *  OR  /");
	scanf("%c",&choice);
	choice=getch();
	switch(choice){
	case '+':
		add(a,b);
		break;
		case '-':
			sub(a,b);
			break;
			case '*':
				mul(a,b);
				break;
				case '/':
				div(a,b);
				break;
				default:
				printf("\nInvalid Choice");
			}
			printf("\nDo you want to continue??? Y/N");
			scanf("%c",&option);
		}while(option=='Y'||option=='y');
	}
	void add(float a,float b)
	{
		printf("\nThe addition of given numbers is %f",a+b);
	}
	void sub(float a,float b)
	{
		printf("\nThe subtraction of given numbers is %f",a-b);
	}
	void mul(float a,float b)
	{
		printf("\nThe multiplication of given numbers is %f",a*b);
	}
	void div(float a,float b)
	{
		if (b>0||b<0)
		printf("\nThe division of given numbers is %f",a/b);
		else 
		printf("Math Error");
	}

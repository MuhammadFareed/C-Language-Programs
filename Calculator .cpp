#include<stdio.h>
#include<conio.h>
void add(float,float);
void sub(float,float);
void mul(float,float);
void div(float,float);
int main()
{	
	char option,choice;
	float a,s,ans;
	do
	{
	printf("Enter two numbers\n");
	scanf("%f%f",&a,&s);
	printf("Which operation do you want to perform???\n");
	scanf("c",&option);
	option=getch();
	switch(option)
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
	printf("\nInvalid Choice\n");
	}
	printf("\nDo you want to continue???...Y/N\n");
	scanf("%c",&choice);
	choice=getch();
	}while (choice=='Y'||choice=='y');
}
void add(float a,float s)
	{
		printf("%1.f + %1.f = %1.f",a,s,a+s);
	}
void sub(float a,float s)
	{
		printf("%.1f - %.1f = %.1f",a,s,a-s);	
	}
void mul(float a,float s)
	{
	printf("%.1f * %.1f = %.1f",a,s,a*s);
	}
void div(float a,float s)
	{
		if (s>=0)
		printf("%.1f / %.1f = %.1f",a,s,a/s);
		else
		printf("Maths Error");
	}

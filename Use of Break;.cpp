#include<stdio.h>
#include<conio.h>
int main()
{
	int i;
	float a,r,pi;
	for (i=0;i<3;i++)
	{
	printf("Enter value of radius\n");
	scanf("%f",&r);
	pi=3.142;
	a=pi*r*r;
	if (a==1000)
	{
		printf("Area of Circle is %f",a);
	}
	else
	{
		break;
	}
	}
}

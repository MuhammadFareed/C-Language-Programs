#include<stdio.h>
#include<conio.h>
float circle();
float rectangle();
float square(void);
float parallelogram();
float trapezoid();
int main()
{	
	
	int i,choice;
	char option;
	for (i=1;i<=20;i++)
	{
		printf(" ");
	}
	printf("AREA CALCULATOR");
	do
	{
	printf("\nFor\n1:Area of Circle\n2:Area of Rectangle\n3:Area of Square\n4:Area of Parallelogram\n5:Area of Trapezoid");
    printf("\nMake your choice");
    scanf("%d",&choice);
    choice=getch();
    switch(choice)
    {
    	case 1:
    	float a;
    	a=circle();
    	printf("\nArea of Circle is %.2f",a);
    	break;
	case 2:
		float b;
		b=rectangle();
		printf("\nArea of Rectangle is %.2f",b);
		break;
	case 3:
		float c;
		c=square();
		printf("\nArea of Square is %.2f",c);
		break;	
	case 4:
		float d;
		d=parallelogram();
		printf("\nArea of Parallelogram is %.2f",d);
		break;
	case 5:
		float e;
		e=trapezoid();
		printf("\nArea of Trapezoid is %.2f",e);
		break;
	default:
		printf("\nInvalid Choice");
		}
	printf("\nDo you want to continue??? Y/N");
	scanf("%c",&option);
} while(option=='Y'||option=='y');
}
float circle()
{
	float r,area;
	printf("\nEnter the value of Radius");
	scanf("%f",&r);
	area=3.14*r*r;
	return(area);
}
float rectangle()
{
		float l,b,area;
	printf("\nEnter the value of length and bredth");
	scanf("%f%f",&l,&b);
	area=l*b;
	return(area);
}
float square()
{
		float l,area;
	printf("\nEnter the value of length");
	scanf("%f",&l);
	area=l*l;
	return(area);
}
float parallelogam()
{
		float l,b,area;
	printf("\nEnter the values of length and breadth");
	scanf("%f%f",&l,&b);
	area=l*b;
	return(area);
}
float trapezoid()
{
	float b1,b2,h,area;
	printf("\nEnter the values of bases");
	scanf("%f%f",&b1,&b2);
	printf("\nEnter the value of height");
	scanf("%f",&h);
	area=(b1+b2)*h*0.5;
	return(area);
}

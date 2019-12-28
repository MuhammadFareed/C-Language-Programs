#include<stdio.h>
#include<conio.h>
void vol(float);
int main()
{
	float r;
	printf("Enter the value of Radius");
	scanf("%f",&r);
	vol(r);
}
void vol(float r)
{
	float v,pi=3.142;
	
	v=4*pi*r*r*r/3;
	printf("Volume is %f",v);
}

#include<stdio.h>
#include<conio.h>
float vol(void);
int main()
{
	float ans;
	ans=vol();
	printf("Volume is %f",ans);
}
float vol(void)
{
	float v,r,pi=3.142;
	printf("Enter the value of Radius");
	scanf("%f",&r);
	v=4*pi*r*r*r/3;
	return(v);
}

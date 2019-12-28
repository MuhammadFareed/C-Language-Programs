#include<stdio.h>
#include<conio.h>
float vol(float);
int main()
{
	float r,ans;
	printf("Enter the value of Radius");
	scanf("%f",&r);
	ans=vol(r);
	printf("Volume is %f",ans);
}
float vol(float r)
{
	float v,pi=3.142;
	v=4*pi*r*r*r/3;
	return(v);
}

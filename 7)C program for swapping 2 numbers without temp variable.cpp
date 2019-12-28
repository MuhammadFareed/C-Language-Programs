/*
7)	C program for swapping 2 numbers without temp variable.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("\t\t\tTo check a LEAP YEAR\n\n");
	printf("Enter a year : ");
	scanf("%d",&year);
	if(year%400==0||year%100==0&&year%4==0)
	{
		printf("\n%d is Leap year.\n",year);
	}
	else
	{
		printf("\n%d is not a Leap year.\n",year);
	}
}

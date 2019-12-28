/*
11)	C program to find largest of given 3 numbers.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers :\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b&&a>c)
	{
		printf("\n\n%d id greater than %d and %d",a,b,c);
	}
	else if (b>a&&b>c)
	{
		printf("\n\n%d id greater than %d and %d",b,a,c);
	}
	else
	{
		printf("\n\n%d id greater than %d and %d",c,a,b);
	}
	getch();
}

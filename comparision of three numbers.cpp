/* 
Comparosion of three numbers
    */
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,s,d;
	printf("Enter a number");
	scanf("%d",&a);
	printf("Again enter a number");
	scanf("%d",&s);
	printf("Again enter a number");
	scanf("%d",&d);
	if (a>s&&a>d)
	{
		printf("%d is greater than %d & %d",a,s,d);
	}
	else if (s>a&&s>d)
	{
		printf("%d is greater than %d & %d",s,a,d);
	}
	else if (d>a&&d>s)
	{
		printf("%d is greater than %d & %d",d,a,s);
	}
	else
	{
	printf("Invalid values");
    }
    getch();
}

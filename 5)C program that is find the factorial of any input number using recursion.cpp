/*
5)	C program that is find the factorial of any input number using recursion.
*/

#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
	int num,ans;
	printf("\t\t\tFactorial Program Through Recursion\n");
	printf("Enter a number to calculate Factorial\n");
	scanf("%d",&num);
	ans=fact(num);
	
	printf("Factorial of given number is %d",ans);
	getch();
}
int fact(int num)
{
	if (num==1||num==0)
	{
		return(1);
	}
	else if (num>1)
	{
		return(num*fact(num-1));
	}
}

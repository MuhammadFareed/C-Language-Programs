/*
5)	C program that is find the factorial of any input number using recursion.
*/

#include<stdio.h>
#include<conio.h>
long factorial(int);
int main()
{
	long n,ans;
	printf("\t\t\tFactorial Program\n");
	printf("Enter a number to calculate factorial : ");
	scanf("%ld",n);
	ans=factorial(n);
	printf("Factorial of given number is : %ld",ans);
	getch();
}
long factorial(int n)
{
	if(n==1||n==0)
	{
		return(1);
	}
	else
	{
		return(n*factorial(n-1));
	}
}

/*
Fibonacci Series by DO WHILE LOOP.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	long n,first=0,second=1,next,i;
	printf("Enter number of terms : ");
	scanf("%ld",&n);
	printf("First %ld terms of Fibonacci series are \n",n);
	i=0;
	do
	{
		if(i<=1)
		{
			next=i;
		}
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		printf("%ld  ",next);
		i++;
	}while(i<n);
	getch();
}

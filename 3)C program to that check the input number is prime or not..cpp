/*
3)	C program to that check the input number is prime or not.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,x,rem;
	printf("Enter a number to check either Prime number or not : ");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		x=n;
		rem=x%i;
		if(rem==0)
		{
			printf("\n%d is not a Prime number\n",n);
			break;
		}
	}
	if(rem!=0)
	{
		printf("%d is a Prime number",n);
	}
	getch();
}

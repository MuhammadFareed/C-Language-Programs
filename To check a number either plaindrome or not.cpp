/*
16)	C program to reverse given number.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,x,rem,rev=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	x=n;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("\nReverse of given number %d is %d",x,rev);
	if (rev==x)
	{
		printf("\nSo given number is Plaindrome.\n");
	}
	else
	{
		printf("\nSo given number is not a Plaindrome.\n");	
	}
	getch();
}

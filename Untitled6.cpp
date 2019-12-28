/*
16)	C program to reverse given number.
*/

#include<stdio.h>
#include<conio.h>
int rev(int);
int main()
{
	int n,ans,x;
	printf("Enter a number : ");
	scanf("%d",&n);
	x=n;
	ans=rev(n);
	printf("\nReverse of given number %d is %d",n,ans);
	if(n==x)
	{
		printf("Plaindrome");
	}
	else if(n!=x)
	{
		printf("Not a plaindrome");
	}
	getch();
}
int rev(int n)
{
	if(n==0)
	{
		return 0;
	}
	else
	{
		int r,re=0;
		while(n!=0)
		{
		
		r=n%10;
		re=re*10+r;
		n=n/10;
		rev(n);}
		return (re);
	}
}

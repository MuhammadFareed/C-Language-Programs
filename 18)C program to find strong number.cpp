/*
18)	C program to find strong number.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	char choice;
	do
	{
	int n,x,i,rem,fact=1,sum=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	x=n;
	while(x!=0)
	{
		rem=x%10;
		x=x/10;
		for(i=rem;i>=1;i--)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		fact=1;
	}
	if(sum==n)
	{
		printf("\nGiven nuumber is strong number.");
	}
	else if(sum!=n)
	{
		printf("\nGiven nuumber is not a strong number.");
	}
	printf("\nDo you want to continue?  (Y/N)\n");
	scanf("%c",&choice);
	choice=getch();
	}while(choice=='Y'||choice=='y');
	getch();
}

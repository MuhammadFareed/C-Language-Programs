/*
4)	C program that check the input number is even or odd.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,rem;
	printf("\tTo check a number is either Even or Odd\n\n");
	printf("Enter a number : ");
	scanf("%d",&n);
	rem=n%2;
	if (rem==0)
	{
		printf("\n%d is an Even number.\n",n);
	}
	else
	{
		printf("%d is an Odd number.",n);
	}
	getch();
}

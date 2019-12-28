/*
7)	C program for swapping 2 numbers without temp variable.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	printf("Enter value of x : ");
	scanf("%d",&x);
	printf("Enter value of y : ");
	scanf("%d",&y);	
	printf("\nBefore swapping : \n x=%d\ty=%d\n",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nAfter swapping : \n x=%d\ty=%d\n",x,y);	
	getch();
}

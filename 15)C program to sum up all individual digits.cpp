/*
15)	C program to sum up all individual digits.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int num,rem,sum=0;
	printf("Enter a number : ");
	scanf("%d",&num);
	while (num!=0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("\nSo the SUM of all individual digit of gievn number is %d",sum);
	getch();
}


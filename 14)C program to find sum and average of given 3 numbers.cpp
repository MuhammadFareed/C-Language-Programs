/*
14)	C program to find sum and average of given 3 numbers.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,n3;
	float sum=0;
	float avg=0;
	printf("Enter three numbers :\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	sum=n1+n2+n3;
	printf("Sum of given numbers %d, %d & %d is : %.2f\n",n1,n2,n3,sum);
	avg=sum/3;
	printf("\nAverage of given numbers %d, %d & %d is : %.2f",n1,n2,n3,avg);
	getch();
}

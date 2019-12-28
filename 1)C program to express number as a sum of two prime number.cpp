#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,rem,a;
	printf("Enter a number : ");
	scanf("%d",&n);
	i=1;
	while(rem!=0)
	{
		i++;
		rem=n%i;
	}
	if(rem==0&&n==i)
	{
		printf("\n\n%d is Prime number.",n);
	}
	else
	{
		printf("\n\n%d is not a Prime number.",n);
	}
	getch();
}

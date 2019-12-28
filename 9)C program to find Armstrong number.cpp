/*
9)	C program to find Armstrong number.  
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int n,dpl,i,soc=0,rem=0;
	printf("\t\tC program to find Armstrong number\n");
	printf("Enter a number : ");
	scanf("%d",&n);
	dpl=n;
	while(dpl!=0)
	{
		rem=dpl%10;
		soc=soc+rem*rem*rem;
		dpl=dpl/10;
	}
	if(soc==n)
	{
		printf("\n Given number %d is an Armstrong number.",n);
	}
	else
	{
		printf("\n Given number %d is not an Armstrong number.",n);
	}
}

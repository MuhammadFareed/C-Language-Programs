#include<stdio.h>
#include<conio.h>
int power(int,int);
int main()
{
	int base,exp,ans;
	printf("\t\t\tPower Program Through Recursion\n");
	printf("Enter Base and Exponent\n");
	scanf("%d%d",&base,&exp);
	ans=power(base,exp);
	printf(" Answer is %d",ans);
	getch();
}
int power(int base, int exp)
{
	if (exp==0)
	{
		return(1);
	}
	else 
	{
		return(base*power(base,(exp-1)));
	}
}

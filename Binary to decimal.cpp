#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,s=0,b=1;
	printf("Enter a number in Binary : ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		if(r>1)
		{
			printf("\nInvalid number");
			break;
		}
		else
		{
			s=s+r*b;
			b=b*2;
			n=n/10;
		}
	}
	printf("Decimal = %d",s);
	getch();
}

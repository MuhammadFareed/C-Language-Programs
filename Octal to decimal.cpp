#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,s=0,b=1;
	printf("Enter a number in Octal form : ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r>7)
		{
			printf("\nInvalid number.");
			break;
		}
		else
		{
			s=s+r*b;
			b=b*8;
			n=n/10;
		}
	}
	
	printf("\nDecimal = %d",s);
	getch();
}

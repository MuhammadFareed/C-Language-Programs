#include<stdio.h>
#include<conio.h>
int main()
{
	int o,a,x,i,j,k,n=4,p=10;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		o=4;
		for(a=o;a>1;a--)
		{
			p--;
		}
		o--;
		x=p;
		for(k=1;k<=n;k++)
		{
			printf("%d ",p);
			p++;
		}
		p=x;
		n--;
		printf("\n");
	}
	getch();
}

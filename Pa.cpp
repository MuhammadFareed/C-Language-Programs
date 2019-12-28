 #include<stdio.h>
#include<conio.h>
int main()
{
	int a,x,i,j,k,n=4,p=10;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		int g=4;
		for(a=g;a>1;a--)
		{
			p--;
		}
		g--;
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

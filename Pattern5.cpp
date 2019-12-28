#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n=3,p=4;
	for(i=0;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		printf("1");
		for(k=1;k<=n;k++)
		{
			printf("%d",p);
		}
		n=n-2;
		printf("\n");
	}
	getch();
}

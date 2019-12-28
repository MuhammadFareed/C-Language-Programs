#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,r,n=1;
	char op;
	printf("Which operator do you want to print : ");
	scanf("%c",&op);
	printf("\nEnter no of rows : ");
	scanf("%d",&r);
	for(i=r;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=n;k++)
		{
			printf("%c ",op);
		}
		n=n+1;
		printf("\n");
	}
	getch();
}

#include<stdio.h>
#include<conio.h>
void table(int);
int main()
{
	int n;
	printf("Enter the number whose table you want to print : ");
	scanf("%d",&n);
	table(n);
	getch();
}
void table(int n)
{
	int j,ans;
	for(j=1;j<=10;j++)
	{
		ans=n*j;
		printf("\n%d * %d = %d\n",n,j,ans);
	}
}

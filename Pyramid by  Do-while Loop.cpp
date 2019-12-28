#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("Enter number of Rows :  ");
	scanf("%d",&n);
	i=1;
	do
	
	{
		j=1;
		do
		{
			printf("*");
			j++;
		} while(j<=i);
		printf("\n");
		i++;
	} while(i<=n);
}

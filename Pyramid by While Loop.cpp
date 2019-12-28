#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i=1;
	printf("Enter number of Rows :  ");
	scanf("%d",&n);
	while(i<=n)
	{	int	j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}

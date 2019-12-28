#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0,n;
	printf("Enter number of Rows");
	scanf("%d",&n);
	while(i<n)
	{ j=0;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
}

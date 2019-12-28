#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,j,no,n;
	printf("Enter number of Rows :  ");
	scanf("%d",&n);
	while(i<=no)
	{	
		j=n--;
		while(j>=1)
		{
			printf("*");
			j--;
		}
		printf("\n");
		i++;
	}
}


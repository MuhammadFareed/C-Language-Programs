#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j=1,k;
	printf("Enter a number whose table you want to make : ");
	scanf("%d",&i);
	printf("\n\t\t\tTABLE OF %d\n",i);
	while(j<=10)
	{
		k=i*j;
		printf("%d * %d = %d\n",i,j,k);
		j++;
	}
}

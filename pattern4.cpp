#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k;
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=4;j++)
			printf(" ");
		for(k=1;k<2*(i));k++)
		printf("%d ",k);
		printf("\n");
		}
}

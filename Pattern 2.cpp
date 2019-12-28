/*
       1
      21
     321
    4321
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n=1,no=1;
	for(i=4;i>=1;i--)
	{
		for(j=2;j<=i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=n;k++)
		{
			printf("%d",no);
			no--;
		}
		n++;
		no=n;
		printf("\n");
	}
	getch();
}

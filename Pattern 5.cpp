/*
     1
	2 3
   4 5 6
  7 8 9 10
*/
  
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,no=1,n=1;
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=no;k++)
		{
		
			printf("%d ",n);
		n++;
		}
		no++;
		printf("\n");
	}
	getch();
}

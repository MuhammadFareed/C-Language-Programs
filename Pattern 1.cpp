/*
      1
     12
    123
   1234
*/
   
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n=1;
	for(i=4;i>=1;i--)
	{
		for(j=2;j<=i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=n;k++)
		{
			printf("%d",k);
		}
		n++;
		printf("\n");
	}
	getch();
}

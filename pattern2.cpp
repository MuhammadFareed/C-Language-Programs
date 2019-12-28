/*
12345
1234
123
12
1
 */
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n=1;
	for (i=1;i<=5;i++)
	{
		for (j=i;j<=5;j++)
		{
		
			printf(" ");
	}
			for(k=1;k<=i;k++)
	{
	
			printf("%d",n);                   
		n++;}
		printf("\n");
	}
	getch();
}

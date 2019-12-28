/*
1
12
123
1234
12345
  */
#include<stdio.h>
#include<conio.h>
main()
{

int i,j,k,n=10;
for(i=4;i>=1;i--)
{
	for(j=i;j<=5;j++)
	
	printf(" ");
	for(k=1;k<=i;k++)
	printf("%d ",n--);
	
	printf("\n");
}
getch();
}

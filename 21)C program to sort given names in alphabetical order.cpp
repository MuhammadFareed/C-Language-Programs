/*
21)	C program to sort given names in alphabetical order.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	char name[10],tname[10],temp[10];
	int i,j,n;
	printf("How many names do you want to enter???\n");
	scanf("%d",&n);
	printf("Enter %d names : \n",n);
	for(j=0;j<n;j++)
	{
		scanf("%s",&name[j]);
	}
	for(j=0;j<n;j++)
	{
		printf("%s",name[j]);
	}
	getch();
}

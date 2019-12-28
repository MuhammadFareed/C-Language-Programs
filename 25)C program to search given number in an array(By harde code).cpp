/*
25)	C program to search given number in an array(By Hard Code).
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int g=0;
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int i,n;
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nWhich number do you want to search in array???\n");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(arr[i]==n)
		{
			printf("Input number is present at %dth position ",i+1);
			break;
		}
		else
		{
			g++;
		}
		if(g>=10)
		{
			printf("Not found");
		}
	}
	getch();
}

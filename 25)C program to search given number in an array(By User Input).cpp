/*
25)	C program to search given number in an array(By User Input).
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int g=0;
	int i,n,x;
	int arr[50];
	printf("Enter number of Elements of your array : ");
	scanf("%d",&n);
	printf("\nNow enter your Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("So, your array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
	printf("\nWhich number do you want to search in your array : ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			printf("\nYour number is present at %dth position.",i+1);
		break;
		}
		else
		{
		
		g++;
	}
	if(g>=n)
	{
		printf("Not found");
		break;
	}
	}
	getch();
}

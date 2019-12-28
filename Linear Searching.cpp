// Program of LINEAR SEARCHING

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,l,arr[100],count=0;
	printf("How many elements do you want to store in your array : ");
	scanf("%d",&l);
	printf("\nEnter elements :\n");
	for(i=0;i<l;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nYour array is : ");
	for(i=0;i<l;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEnter the number which you want to find in the array : ");
	scanf("%d",&n);
	for(i=0;i<l;i++)
	{
		if(arr[i]==n)
		{
			printf("\nYour number is found at %dth position.\n\t\t\t\t\t\tThank you...",i+1);	
			break;
		}
		else
		{
			count++;
		}
		if(count==l)
		{
			printf("\nYour number is not found in the array.\n\t\t\t\t\tThank you...");
			break;
		}
	}
	getch();
}

/*
24)	C program to sort given numbers in descending order.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	long i,n,a,temp;
	long arr[20];
	printf("How many numbers do you want to arrange : ");
	scanf("%ld",&n);
	printf("\nEnter %ld numbers\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%ld",&arr[i]);
	}                       
	printf("Given array is \n");
	for(i=0;i<n;i++)
	{
		printf("%ld  ",arr[i]);
	} 
	for(a=1;a<n;a++)
	{	                
	for(i=0;i<n;i++)
	{
		if(arr[i]<arr[i+1])
		{
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	}
	printf("\nSo, sorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("%ld  ",arr[i]);
	}                     
	getch();
}

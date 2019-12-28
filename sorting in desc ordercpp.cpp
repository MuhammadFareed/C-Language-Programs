#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n;
	int a[10];
	printf("Enter an array : ");
	
	int temp;
	for(n=1;n<=9;n++)
	{
		for(i=0;i<=9;i++)
		{
			if(a[i]<a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;				
			}
		}
	}
	for(i=0;i<=9;i++)
	{
		printf("%d  ",a[i]);
	}
}

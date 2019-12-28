#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num;
	int a[10];
	printf("Number : ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
	int temp,n;
	for(n=1;n<num;n++)
	{
		for(i=0;i<=n;i++)
		{
			if(a[i]>a[i+1])
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

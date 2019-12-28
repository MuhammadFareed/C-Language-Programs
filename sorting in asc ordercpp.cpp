#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10]={9,3,7,1,4,8,6,2,10,5};
	int i,temp,n;
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
		printf("%d ",a[i]);
	}
}

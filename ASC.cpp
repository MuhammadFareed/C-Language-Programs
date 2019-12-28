#include<stdio.h>
#include<conio.h>
void bubble_sort(int,int);
int main()
{
	int i,a[20],n;
	printf("Numbers : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	bubble_sort(a[20],n);

	getch();
}
void bubble_sort(int a[], int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}	
}

#include<stdio.h>
#include<conio.h>
void swap(int*,int*);
int main()
{
	int a=3,s=10;
	swap(&a,&s);
	printf("\n%d\t%d",a,s);
	getch();
}
void swap(int *a,int *s)
{
	int t;
	t=*a;
	*a=*s;
	*s=t;
	printf("%d\t%d",*a,*s);
}

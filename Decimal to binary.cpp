#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,s[10],i,j=0;
	printf("Enter a number in decimal : ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%2;
		s[j]=r;
		j++;
		n=n/2;
	}
	printf("Binary = ");
	for(i=j-1;i>=0;i--)
	{
		printf("%d",s[i]);
	}
	getch();
}

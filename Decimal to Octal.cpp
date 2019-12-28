#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,j=0,i,s[10];
	printf("Enter a number in Decimal form : ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%8;
		s[j]=r;
		j++;
		n=n/8;
	}
	printf("\nOctal = ");
	for(i=j-1;i>=0;i--)
	{
		printf("%d",s[i]);
	}
	getch();
}

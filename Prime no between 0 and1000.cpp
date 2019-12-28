#include<stdio.h>
#include<conio.h>
int main()
{
	printf("To Print Prime Numbers Between 0 & 1000\n");
	int i,x,j,rem;         
	for(i=2;i<=1000;i++)
	{
		x=i;
		while(rem!=0)
		{
			j=2;
			rem=x%j;
			j++;
		}
	
		if (j==x) {
		printf("%d\t",j);
		}
	}
	getch();
}

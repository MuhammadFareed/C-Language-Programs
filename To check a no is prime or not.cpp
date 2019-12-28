#include<stdio.h>
#include<conio.h>
int main()
{
	int i,x,j,a,b,rem;
	printf("Enter limits\n");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		x=i;
		for(j=2;j<i;j++)
		{
			rem=x%j;
			if(rem==0)
			{
				break;
			}
		}
		if(rem!=0)
		{
			printf("%d\t",x);
		}
	}
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,x,j,a,b,rem;
	printf("Enter limits\n");
	scanf("%d%d",&a,&b);
	printf("So Prime numbers between %d & %d are :  \n",a,b);
	for(i=a+1;i<b;i++)
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
	if(i!=1&&rem!=0)
		{
			printf("%d\n",x);
		}
	}
}

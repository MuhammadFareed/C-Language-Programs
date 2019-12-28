#include<stdio.h>
#include<conio.h>
int main()
{	
	char choice;
	int i,j,r1,c1,r2,c2,a,b;
	int m1[10][10],m2[10][10],sum[10][10];
	do
	{
	printf("\t\t\tAddition of two Matrices\n");
	printf("Enter number of rows of first Matrix\n");
	scanf("%d",&r1);
	printf("Enter number of columns of first Matrix\n");
	scanf("%d",&c1);
	a=r1*c1;
	printf("Enter %d elements of first Matrix\n",a);
	for(i=1;i<=r1;i++)
	{
		for(j=1;j<=c1;j++)
		{
			scanf("%d",&m1[i][j]);
		}
	}
	printf("Enter number of rows of second Matrix\n");
	scanf("%d",&r2);
	printf("Enter number of columns of second Matrix\n");
	scanf("%d",&c2);
	b=r2*c2;
	printf("Enter %d elements of second Matrix\n",b);
	for(i=1;i<=r2;i++)
	{
		for(j=1;j<=c2;j++)
		{
			scanf("%d",&m2[i][j]);
		}
	} 
	printf("\n");
	if (r1==r2&&c1==c2)
	{
		for(i=1;i<=r2;i++)
		{
			for(j=1;j<=c2;j++)
			{
				sum[i][j]=0;
				sum[i][j]=m1[i][j]+m2[i][j];
				printf("%d\t",sum[i][j]);
			}
				printf("\n");
		} 	
	}
	else if(r1!=r2||c1!=c2)
	{
		printf("Order of both Matrices are not equal\n");
	}
		printf("Do you want to continue...???   (Y/N)\n");
		scanf("%c",&choice);
		choice=getch();
}
		while(choice=='Y'||choice=='y');
}

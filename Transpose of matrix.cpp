#include<stdio.h>
#include<conio.h>
int main()
{
	int m[5][5],transpose[5][5],i,j,r,c;
	printf("\t\t\t\tTranspose of Matrices\n");
	printf("Enter number of rows : ");
	scanf("%d",&r);
	printf("Enter number of column : ");
	scanf("%d",&c);
	printf("\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter m%d%d element : ",i+1,j+1);
			scanf("%d",&m[i][j]);
		}
	}
	printf("\nGiven matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d  ",m[i][j]);
		}
		printf("\n");
	}	
	printf("\n");
	printf("So transpose of given matrix is : \n");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			transpose[i][j]=m[j][i];
			printf("%d  ",transpose[i][j]);
		}
		printf("\n");
	}
	getch();
}

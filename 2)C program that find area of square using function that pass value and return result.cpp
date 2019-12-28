/*
2)	C program that find area of square using function that pass
 value and return result.
 */
 
#include<stdio.h>
#include<conio.h>
float area_square(float);
int main()
{
	float len,ans;
	printf("\t\t\t\tArea of Square\n");
	printf("Enter value of length : ");
	scanf("%f",&len);
	ans=area_square(len);
	printf("\nArea of Square is : %.2f",ans);
	getch();
}
float area_square(float len)
{
	return(len*len);
}


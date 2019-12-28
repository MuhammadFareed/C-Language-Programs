#include<stdio.h>
#include<conio.h>
struct info {
	char name[20];
	float height;
	int age;
}; 
int main()
{
	struct info std1;
	printf("Enter your name\n");
	scanf("%s",&std1.name);
	printf("Enter your height\n");
	scanf("%f",&std1.height);
	printf("Enter your age\n");
	scanf("%d",&std1.age);
	printf("Name = %s\nHeight = %.1f\nAge =%d",std1.name,std1.height,std1.age);
	struct info std2;
	printf("\nEnter your name\n");
	scanf("%s",&std2.name);
	printf("Enter your height\n");
	scanf("%f",&std2.height);
	printf("Enter your age\n");
	scanf("%d",&std2.age);
	printf("Name = %s\nHeight = %.1f\nAge =%d",std2.name,std2.height,std2.age);	
	
}

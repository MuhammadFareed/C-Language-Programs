#include<stdio.h>
#include<conio.h>
struct info {
	char name[20];
	float height;
	int age;
}; 
int main()
{
	int n,i;
	struct info std[10];
	printf("Enter quantity : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct info std[i];
		printf("\nName : ");
		scanf("%s",&std[i].name);
		printf("\nHeight : ");
		scanf("%f",&std[i].height);
		printf("\nAge : ");
		scanf("%d",&std[i].age);
		printf("Information of %dth student\n",i+1);
		printf("Name = %s\nHeight = %f\nAge = %d",std[i].name,std[i].height,std[i].age);
	}
	getch();
}

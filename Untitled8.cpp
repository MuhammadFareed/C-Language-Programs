#include<stdio.h>
#include<conio.h>
void r();
int main()
{
	printf("ashdjab");
	r();
	getch();
}
void r()
{
	char c;
	scanf("%c",&c);
	if (c!='\n')
	{
		r();
		printf("%c",c);
	}
}

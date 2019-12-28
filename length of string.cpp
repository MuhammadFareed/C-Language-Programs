#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name[20];
	printf("Enter a name : ");
	gets(name);
	printf("\nThere are %d alphabets are present in your name.",strlen(name));
	getch();
}

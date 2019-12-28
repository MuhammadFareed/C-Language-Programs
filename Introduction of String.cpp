#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[10];
	int l;
	double i;
	printf("Enter your name :  ");
	gets(s);
	l=strlen(s);
	printf("\nSo there are %ld alphabets in your name.\n",l);
	puts(s);
	getch();
}

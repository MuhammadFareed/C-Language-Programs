#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,j,l;
	char s[20];
	printf("Enter an string : ");
	gets(s);
	l=strlen(s);
	printf("\n");
	for(i=0;i<l;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",s[j]);
		}
		printf("\n");
	}
	getch();
}

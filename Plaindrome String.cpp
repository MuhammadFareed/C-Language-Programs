#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,l;
	printf("Enter a Word :   ");
	gets(str);
	l=strlen(str);
	for (i=0;i<(l/2);i++)
	{
		if (str[i]!=str[l-1-i])
		
			printf("Given word is not a Plaindrome\n");
			break;
		
		printf("Given word is a Plaindrome\n");
	}

	}


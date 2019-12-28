/*
13)	C program to convert lower case into upper case and vice versa
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int l,i,j;
	char word[20];
	printf("Enter a word to change the case : ");
	gets(word);
	l=strlen(word);
	for(i=0;i<l;i++)
	{
			if(word[i]=='A')
			{
				printf("a");
			}
			else if(word[i]=='B')
			{
				printf("b");
			}
			else if(word[i]=='C')
			{
				printf("c");
			}
			else if(word[i]=='D')
			{
				printf("d");
			}
			else if(word[i]=='E')
			{
				printf("e");
			}
			else if(word[i]=='F')
			{
				printf("f");
			}
			else if(word[i]=='G')
			{
				printf("g");
			}
			else if(word[i]=='H')
			{
				printf("h");
			}
			else if(word[i]=='I')
			{
				printf("i");
			}
			else if(word[i]=='J')
			{
				printf("j");
			}
			else if(word[i]=='K')
			{
				printf("k");
			}
			else if(word[i]=='L')
			{
				printf("l");
			}
			else if(word[i]=='M')
			{
				printf("m");
			}
			else if(word[i]=='N')
			{
				printf("n");
			}
			else if(word[i]=='O')
			{
				printf("o");
			}
			else if(word[i]=='P')
			{
				printf("p");
			}
			else if(word[i]=='Q')
			{
				printf("q");
			}
			else if(word[i]=='R')
			{
				printf("r");
			}
			else if(word[i]=='S')
			{
				printf("s");
			}
			else if(word[i]=='T')
			{
				printf("t");
			}	
			else if(word[i]=='U')
			{
				printf("u");
			}
			else if(word[i]=='V')
			{
				printf("v");
			}
			else if(word[i]=='W')
			{
				printf("W");
			}
			else if(word[i]=='X')
			{
				printf("x");
			}
			else if(word[i]=='Y')
			{
				printf("y");
			}
			else if(word[i]=='Z')
			{
				printf("z");
			}
			else
			{
				printf("%c",word[i]);
			}
}
	getch();
}

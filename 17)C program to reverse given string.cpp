/*
17)	C program to reverse given string.
*/

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int k,n=0;
	int i,l,j;
	char word[20],temp;
	printf("Enter a word to reverse : ");
	gets(word);
	l=strlen(word);
	printf("Length is %d",l);
	j=l/2;
	for(i=0;i<l/2;i++)
	{
		if (word[i]!=word[l-1-i])
		{
			printf("Not a plaindrome.");
			break;
		}
		if (word[i]==word[l-1-i])
		{
			n++;
		} 
	}
	
	if(n==l/2)
	{
		printf("Plaindrome");
	}
	getch();
}

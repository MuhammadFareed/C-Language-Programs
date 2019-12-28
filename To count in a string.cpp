#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int l,i,vowel=0,consonant=0,space=0,digit=0,s_c=0;
	char str[30];
	printf("Enter an string...\n");
	gets(str);
	l=strlen(str);
	printf("\nNo of characters are %d",l);	
	for(i=0;i<l;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
		{
			vowel=vowel+1;
		}
	}
	printf("\nNo of Vowels are %d",vowel);
	for(i=0;i<l;i++)
	{
		if(str[i]!=','&&str[i]!='.'&&str[i]!=' '&&str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U')
		{
			consonant=consonant+1;
		}
	}
	printf("\nNo of consonants are %d",consonant);
	for(i=0;i<l;i++)
	{
		if(str[i]==' ')
		{
			space=space+1;
		}
	}
	printf("\nNo of spaces are %d",space);
	for(i=0;i<l;i++)
	{
		if(str[i]==1||str[i]==2||str[i]==3||str[i]==4||str[i]==5||str[i]==6||str[i]==7||str[i]==8||str[i]==9)
		{
			digit=digit+1;
		}
	}
	printf("\nNo of digits are %d",digit);	
	for(i=0;i<l;i++)
	{
		if(str[i]==','||str[i]=='.'||str[i]=='/'||str[i]=='#'||str[i]=='%'||'"')
		{
			s_c=s_c+1;
		}
	}
	printf("\nNo of special characters are %d",s_c);			
}

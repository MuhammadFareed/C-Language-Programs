/*13)	C program to convert lower case into upper case and vice versa
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
			if(word[i]=='a')
			{
				printf("A");
			}
			else if(word[i]=='b')
			{
				printf("B");
			}
			else if(word[i]=='c')
			{
				printf("C");
			}
			else if(word[i]=='d')
			{
				printf("D");
			}
			else if(word[i]=='e')
			{
				printf("E");
			}
			else if(word[i]=='f')
			{
				printf("F");
			}
			else if(word[i]=='g')
			{
				printf("G");
			}
			else if(word[i]=='h')
			{
				printf("H");
			}
			else if(word[i]=='i')
			{
				printf("I");
			}
			else if(word[i]=='j')
			{
				printf("J");
			}
			else if(word[i]=='k')
			{
				printf("K");
			}
			else if(word[i]=='l')
			{
				printf("L");
			}
			else if(word[i]=='m')
			{
				printf("M");
			}
			else if(word[i]=='n')
			{
				printf("N");
			}
			else if(word[i]=='o')
			{
				printf("O");
			}
			else if(word[i]=='p')
			{
				printf("P");
			}
			else if(word[i]=='q')
			{
				printf("Q");
			}
			else if(word[i]=='r')
			{
				printf("R");
			}
			else if(word[i]=='s')
			{
				printf("S");
			}
			else if(word[i]=='t')
			{
				printf("T");
			}	
			else if(word[i]=='u')
			{
				printf("U");
			}
			else if(word[i]=='v')
			{
				printf("V");
			}
			else if(word[i]=='w')
			{
				printf("W");
			}
			else if(word[i]=='x')
			{
				printf("X");
			}
			else if(word[i]=='y')
			{
				printf("Y");
			}
			else if(word[i]=='z')
			{
				printf("Z");
			}
			else
			{
				printf("%c",word[i]);
			}
}
	getch();
}

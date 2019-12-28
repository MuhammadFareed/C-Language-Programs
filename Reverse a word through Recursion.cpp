`#include<stdio.h>
#include<conio.h>
void reverse(void);
int main()
{
	
	printf("Enter a word to reverse\n");
	reverse();
	getch();
}
void reverse()
{
	
	char word[20];
	if (word[20]!='\r')
	reverse();
	else
	printf("%s",word);
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,l,k,j=0,count=1;
	char s[20];
	puts("Enter a word : ");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		for(k=1;k<l;k++)
		{
		if(s[i]==s[k])
			{
				count=count+1;
			}
		}
		printf("\nFreqency of %c is %d",s[i],count);
		j++;
		count=0;
	}
	getch();
}

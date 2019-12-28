#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char name[30];
	int i,l,x=0,b=0,c=0,d=0,y=0,total=0;
	printf("Enter a word :  ");
	gets(name);
	l=strlen(name);
	for(i=0;i<l;i++)
	{
		if(name[i]=='a'||name[i]=='A')
		{
			x=x+1;
			printf("a\t");
		}
		if(name[i]=='e'||name[i]=='E')
		{
			b=b+1;
			printf("e\t");
		}

		if(name[i]=='i'||name[i]=='I')
		{
			c=c+1;
			printf("i\t");
		}

		if(name[i]=='o'||name[i]=='O')
		{
			d=d+1;
			printf("o\t");
		}

		if(name[i]=='u'||name[i]=='U')
		{
			y=y+1;
			printf("u\t");
		}
	}
	total=x+b+c+d+y;
	printf("\nThere are %d vowels are present in your word\n",total);
	getch();
}

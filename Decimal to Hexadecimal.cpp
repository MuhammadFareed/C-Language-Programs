#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,r,j=0,s[10];
	printf("Enter a number in Decimal form : ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%16;
		s[j]=r;
		j++;
		n=n/16;
	}
		for(i=j-1;i>=0;i--)
		{
			switch(s[i])
			{
				case 10:
				printf("A");
				break;
				case 11 :
				printf("B");
				break;
				case 12 :
				printf("C");
				break;
				case 13 :
				printf("D");
				break;	
				case 14 :
				printf("E");
				break;
				case 15 :
				printf("F");
				break;	
				default :
				printf("%d",s[i]);							
			}
		}
	getch();
}

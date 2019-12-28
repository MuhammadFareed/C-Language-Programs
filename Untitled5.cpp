/*
19)	C program to find square and cube of given number.
*/

#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	do
	{
	int option;
	printf("What do you want to calculate???\n1.Square of a number.\n2.Cube of a number\n3.Exit\nMake your choice : ");
	scanf("%d",&option);
	switch(option)
	{
		case 1 :
			int n,square;
			printf("\nEnter a number : ");
			scanf("%d",&n);
			square=n*n;
			printf("\nSquare of given number is %d",square);
			break;
		case 2 :
			int num,cube;
			printf("\nEnter a number : ");
			scanf("%d",&num);	
			cube=num*num*num;
			printf("\nCube of given number is %d",cube);
			break;	
			case 3 :
				return 0;
		default :
			printf("Invalid choice.");				
	}
	printf("Cotinue???");
	scanf("%c",ch);
	ch=getch();
	}while(ch=='Y'||ch=='y');
	getch();
}


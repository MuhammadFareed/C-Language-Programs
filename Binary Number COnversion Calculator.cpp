#include<stdio.h>
#include<conio.h>
int main()
{
	char str[50],c[100],option;
	int choice,n,r,sm,b,i,j,s[10],x;
	printf("A Group Project Of Muhammad Fareed & Shahzaib\n\nClass : BSSE-Evening\t\t\t\tSection : A\nDepart : UBIT\t\t\t\t\tSubject : I.C.S\nDate of submission : 07-July-2017\t\tTittle : Conversion Calculator");
	printf("\n\n\t\t\tCONVERSION CALCULATOR\n");
	printf("\nMake your choice by choosing a number :\n");
	do
	{
		printf("\n\n1.Conversion of Binary number to Decimal number.\n2.Conversion of Decimal number to Binary number.\n3.Conversion of Octal number to Decimal number.\n4.Conversion of Decimal number to Octal number.\n5.Conversion of Hexadecimal number to Decimal number.\n6.Conversion of Decimal number to Hexadecimal number.\n7.Conversion of Binary number to Octal number.\n8.Conversion of Octal number to Binary number.\n9.Conversion of Binary number to Hexadecimal number.\n10.Conversion of Hexadecimal number to Binary number.\n11.Conversion of Octal number to Hexadecimal number.\n12.Conversion of Hexadecimal number to Octal number.\n");
		printf("\nSo, what is your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				sm=0;
				b=1;
				printf("\nEnter a Binary number : ");
				scanf("%d",&n);
				x=n;
				while(n>0)
				{
					r=n%10;
					while(r>1)
					{
						printf("\nInvalid number.\nAgain enter a binary number : ");
						scanf("%d",&n);
						x=n;
						r=n%10;
					}
					sm=sm+r*b;
					b=b*2;
					n=n/10;
				}
				printf("\nDecimal equivalent of %d = %d",x,sm);
			break;
	
			case 2 :
				j=0;
				printf("\nEnter a decimal number : ");
				scanf("%d",&n);
				x=n;
				while(n!=0)
				{
					r=n%2;
					s[j]=r;
					j++;
					n=n/2;
				}
				printf("\nBinary equivalent of %d = ",x);
				for(i=j-1;i>=0;i--)
				{
					printf("%d",s[i]);
				}
			break;
	
			case 3 :
				sm=0;
				b=1;
				printf("\nEnter an Octal number : ");
				scanf("%d",&n);
				x=n;
				while(n>0)
				{
					r=n%10;
					while(r>7)
					{
						printf("\nInvalid number. Again enter an Octal number : ");
						scanf("%d",&n);
						x=n;
						r=n%10;
					}
					sm=sm+r*b;
					b=b*8;
					n=n/10;
				}
				printf("\nDecimal equivalent of %d = %d",x,sm);
			break;
	
			case 4 :
				j=0;
				printf("\nEnter a Decimal number: ");
				scanf("%d",&n);
				x=n;
				while(n!=0)
				{
					r=n%8;
					s[j]=r;
					j++;
					n=n/8;
				}
				printf("\nOctal equivalent of %d = ",x);
				for(i=j-1;i>=0;i--)
				{
					printf("%d",s[i]);
				}
			break;
	
			case 5 :
				n=0;
				printf("\nEnter a Hexadecimal number : ");
				scanf("%s",&c);
		
				for(i=0;c[i]!='\n'&&c[i]!=0;i++)
				{
					if(c[i]>='0'&&c[i]<='9')
					{
						n=n*16+(c[i]-'0');
					}
					else if(c[i]=='A'||c[i]=='a')
					{
						n=n*16+(10);
					}
					else if(c[i]=='B'||c[i]=='b')
					{
						n=n*16+(11);
					}
					else if(c[i]=='C'||c[i]=='c')
					{
						n=n*16+(12);
					}
					else if(c[i]=='D'||c[i]=='d')
					{
						n=n*16+(13);
					}
					else if(c[i]=='E'||c[i]=='e')
					{
						n=n*16+(14);
					}
					else if(c[i]=='F'||c[i]=='f')
					{
						n=n*16+(15);
					}
					else
					{
						printf("\nInvalid Hexadecimal number.");
						break;
						return 0;
					}
				}
				printf("\nDecimal equivalent of %s = %d",c,n);

			break;
	
			case 6 :
				j=0;
				printf("\nEnter a Decimal number: ");
				scanf("%d",&n);
				x=n;
				while(n!=0)
				{
					r=n%16;
					s[j]=r;
					j++;
					n=n/16;
				}
				printf("\nHexadecimal equivalent of %d = ",x);
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
			break;
		
			case 7 :
				sm=0;
				b=1;
				j=0;
				printf("\nEnter a Binary number : ");
				scanf("%d",&n);
				x=n;
				while(n>0)
				{
					r=n%10;
					while(r>1)
					{
						printf("\nInvalid number.\nAgain enter a binary number : ");
						scanf("%d",&n);
						x=n;
						r=n%10;
					}
					sm=sm+r*b;
					b=b*2;
					n=n/10;
				}
				while(sm!=0)
				{
					r=sm%8;
					s[j]=r;
					j++;
					sm=sm/8;
				}
				printf("\nOctal equivalent of %d = ",x);
				for(i=j-1;i>=0;i--)
				{
					printf("%d",s[i]);
				}
			break;
	
			case 8 :
				sm=0;
				b=1;
				j=0;
				printf("\nEnter an Octal number : ");
				scanf("%d",&n);
				x=n;
				while(n>0)
				{
					r=n%10;
					while(r>7)
					{
						printf("\nInvalid number.\nAgain enter an Octal number : ");
						scanf("%d",&n);
						x=n;
						r=n%10;
					}
					sm=sm+r*b;
					b=b*8;
					n=n/10;
				}
				while(sm!=0)
				{
					r=sm%2;
					s[j]=r;
					j++;
					sm=sm/2;
				}
				printf("\nBinary equivalent of %d = ",x);
				for(i=j-1;i>=0;i--)
				{
					printf("%d",s[i]);
				}
			break;
	
			case 9 :
				sm=0;
				b=1;
				j=0;
				printf("\nEnter a number in Binary form : ");
				scanf("%d",&n);
				x=n;
				while(n>0)
				{
					r=n%10;
					while(r>1)
					{
						printf("\nInvalid number.\nAgain enter a Binary number : ");
						scanf("%d",&n);
						x=n;
						r=n%10;
					}
					sm=sm+r*b;
					b=b*2;
					n=n/10;
				} 
				while(sm!=0)
				{
					r=sm%16;
					s[j]=r;
					j++;
					sm=sm/16;
				}
				printf("Hexadecimal equivalent of %d = ",x);
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
			break;
		
			case 10 :
				j=0;
				printf("\nEnter a Hexadecimal number : ");
				scanf("%s",&str);
				printf("\nBinary equivalent of %s = ",str);
				while(str[j])
				{
					switch(str[j])
					{
						case '0' :
							printf("0000");
						break;
						case '1' :
							printf("0001");
						break;
						case '2' :
							printf("0010");
						break;
						case '3' :
							printf("0011");
						break;
						case '4' :
							printf("0100");
						break;
						case '5' :
							printf("0101");
						break;
						case '6' :
							printf("0110");
						break;	
						case '7' :
							printf("0111");
						break;
						case '8' :
							printf("1000");
						break;
						case '9' :
							printf("1001");
						break;
						case 'a' :
							printf("1010");
						break;
						case 'A' :
							printf("1010");
						break;
						case 'b' :
							printf("1011");
						break;
						case 'B' :
							printf("1011");
						break;
						case 'c' :
							printf("1100");
						break;
						case 'C' :
							printf("1100");
						break;
						case 'd' :
							printf("1101");
						break;
						case 'D' :
							printf("1101");
						break;
						case 'e' :
							printf("1110");
						break;
						case 'E' :
							printf("1110");
						break;
						case 'f' :
							printf("1111");
						break;
						case 'F' :
							printf("1111");
						break;
						default :
							printf("\tYou entered an invalid Value because the number at %d position is not valid in Hexadecimal. ",j+1);
						return 0;
						break;
					}
					j++;
				}
			break;
	
			case 11 :
				sm=0;
				b=1;
				j=0;
				printf("\nEnter an Octal number: ");
				scanf("%d",&n);
				x=n;
				while(n>0)
				{
					r=n%10;
					while(r>7)
					{
						printf("\nInvalid number.\nAgain enter an Octal number : ");
						scanf("%d",&n);
						x=n;
						r=n%10;
					}
					sm=sm+r*b;
					b=b*8;
					n=n/10;
				}
				while(sm!=0)
				{
					r=sm%16;
					s[j]=r;
					j++;
					sm=sm/16;
				}
				printf("\nHexadecimal equivalent of %d = ",x);
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
			break;
			
			case 12 :
				n=0;
				j=0;
				printf("\nEnter a Hexadecimal number : ");
				scanf("%s",&c);
				for(i=0;c[i]!='\n'&&c[i]!=0;i++)
				{
					if(c[i]>='0'&&c[i]<='9')
					{
						n=n*16+(c[i]-'0');
					}
					else if(c[i]=='A'||c[i]=='a')
					{
						n=n*16+(10);
					}
					else if(c[i]=='B'||c[i]=='b')
					{
						n=n*16+(11);
					}
					else if(c[i]=='C'||c[i]=='c')
					{
						n=n*16+(12);
					}
					else if(c[i]=='D'||c[i]=='d')
					{
						n=n*16+(13);
					}
					else if(c[i]=='E'||c[i]=='e')
					{
						n=n*16+(14);
					}
					else if(c[i]=='F'||c[i]=='f')
					{
						n=n*16+(15);
					}
					else
					{
						printf("\nInvalid Hexadecimal number.");
						break;
						return 0;
					}
				}
				j=0;
				while(n!=0)
				{
					r=n%8;
					s[j]=r;
					j++;
					n=n/8;
				}
				printf("\nOctal equivalent of %s = ",c);
				for(i=j-1;i>=0;i--)
				{
					printf("%d",s[i]);
				}
			}
			printf("\n\nDo you want to continue...???   (Y/N)\n");
			option=getch();
		}while(option=='y'||option=='Y');
	getch();
}

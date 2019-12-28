#include<stdio.h>
#include<conio.h>
void line(void);
int main()
{
	char name[20];
	int i,choice,c[3],j=0;
	printf("\n*********** Welcome for the registration ************\n");
	line();
	printf("\n\nEnter your name : ");
	scanf("%s",&name);
	line();
	printf("\n\nFor which do you want to enroll yourself : \n1.Student\n2.Teacher\n");
	scanf("%d",&choice);
	line();
	switch(choice)
	{
		case 1 :
			{
				printf("\n\nOnly three courses can be selected.");
				printf("\n\nSelect courses which you want to study : ");
				printf("\n1:Calculus\n2:English\n3:Islamiat\n4:I.S.E\n5:C.L.D\n6:I.C.S\n\n");
				for(i=0;i<3;i++)
				{
					scanf("%d",&c[i]);
				}
				line();
				printf("\n\nSelected courses are : \n");
				for(i=0;i<3;i++)
				{
					if(c[i]==1)
					{
						printf("%d:Calculus\n",++j);
					}
					else if(c[i]==2)
					{
						printf("%d:English\n",++j);
					}
					else if(c[i]==3)
					{
						printf("%d:Islamiat\n",++j);
					}
					else if(c[i]==4)
					{
						printf("%d:I.S.E\n",++j);
					}
					else if(c[i]==5)
					{
						printf("%d:C.L.D\n",++j);
					}
					else if(c[i]==6)
					{
						printf("%d: English\n",++j);
					}
				}
				line();
				printf("\n\nYourregistration has been submitted...\n\n\t\t\t\t\t\tThank you...");
	line();
	printf("\n\n");
				break;
			}
		case 2 :
			{
				printf("\n\nOnly two courses can be selected.");
				printf("\n\nSelect courses which you want to study : ");
				printf("\n1:Calculus\n2:English\n3:Islamiat\n4:I.S.E\n5:C.L.D\n6:I.C.S\n\n");
				for(i=0;i<2;i++)
				{
					scanf("%d",&c[i]);
				}
				line();
				printf("\n\nSelected courses are : \n");
				for(i=0;i<2;i++)
				{
					if(c[i]==1)
					{
						printf("%d:Calculus\n",++j);
					}
					else if(c[i]==2)
					{
						printf("%d:English\n",++j);
					}
					else if(c[i]==3)
					{
						printf("%d:Islamiat\n",++j);
					}
					else if(c[i]==4)
					{
						printf("%d:I.S.E\n",++j);
					}
					else if(c[i]==5)
					{
						printf("%d:C.L.D\n",++j);
					}
					else if(c[i]==6)
					{
						printf("%d: English\n",++j);
					}
				}
				line();
				
	printf("\n\nYourregistration has been submitted...\n\n\t\t\t\t\t\tThank you...");
	line();
	printf("\n\n");
				break;
			}	
	}
	getch();
}
void line(void)
{
	printf("_____________________________________________________");
}


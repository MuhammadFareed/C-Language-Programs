/* Addition of two numbers in function with no return and 
   no receiving
*/

#include<stdio.h>
#include<conio.h>
void add();
int main()
{
	printf("Addition Program");
	add();
}
void add()
{
	int a,s,res;
	printf("\nEnter two numbers\n");
	scanf("%d%d",&a,&s);
	res=a+s;
	printf("Answer is %d",res);
	getch();
}

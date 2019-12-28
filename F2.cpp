/* Addition of two numbers in function with no return 
   only receiving
*/


#include<stdio.h>
#include<conio.h>
void add(int,int);
int main()
{
	int a,s;
	printf("Addition Program\n");
	printf("Enter two numbers");
	scanf("%d%d",&a,&s);
	add(a,s);
}
void add(int a, int s)
{
	int res;
	res=a+s;
	printf("Answer is %d",res);
	getch();
}

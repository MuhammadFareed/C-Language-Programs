/* Addition of two numbers in function with return only and 
   no receiving
*/


#include<stdio.h>
#include<conio.h>
int add();
int main()
{
	int ans;
	printf("Addition Program\n");
	ans=add();
	printf("Answer is %d",ans);
	getch();
}
int add()
{
	int a,s,res;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&s);
	res=a+s;
	return(res);
}

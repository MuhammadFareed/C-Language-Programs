/* Addition of two numbers in function with return and 
   receiving
*/


#include<stdio.h>
#include<conio.h>
int add(int,int);
int main()
{
	int a,s,res;
	printf("Addition Program\n");
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&s);
	res=add(a,s);
	printf("Answer is %d",res);
	getch();	
}
int add(int a, int s)
{
	int ans;
	ans=a+s;
	return(ans);
}

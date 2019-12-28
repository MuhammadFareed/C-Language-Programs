#include<stdio.h>
#include<conio.h>
int main()
{
	int a,*b,**c;
	a=50;
	b=&a;
	c=&b;
	printf("Value of a is %d\n",a);
	printf("Value of a is %u\n",*b);
	printf("Value of b is %u\n",b);
	printf("Value of a is %u\n",&a);
	printf("Value of a is %d\n",*(&a));
	printf("Addres of b is %u\n",*c);
	printf("Address of c is %u\n",&c);
	printf("Address of b is %u\n",&b);
	printf("Address of b is %u\n",c);
	printf("Value of c is %d\n",c);
	printf("Value of a is %d\n",**c);
	printf("Address of a is %u\n",b);
	printf("Address of b is %u\n",&b);
}

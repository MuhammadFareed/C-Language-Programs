#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

float square(float);
float triangle(float,float);
float circle(float);
float rectangle(float,float);
float parallelogram(float,float);
float trapezoid(float,float,float);
float rhombous(float,float);

int mainmenu()
{
int i,choice;
for(i=1;i<=45;i++)
{
printf("  ");
}
printf("Area Calculator of different shapes\n");
printf("FOR\n1.Square\n2.Triangle\n3.Circle\n4.Rectangle\n5.Parallelogram\n6.Trapezoid\n7.Rhombous\n8.Exit\n\nMake your choice\n");
scanf("%d",&choice);
float ans;
float h;
float a,b;
switch(choice)
{
case 1:
float l;
printf("Enter the length\n");
scanf("%f",&l);
if (l<0)
{
l=l*(-1);}
ans=square(l);
printf("Area of Square is %.2f\nPress any key to continue...\n",ans);
getch();
system("cls");
mainmenu();
break;
case 2:
printf("Enter the value of Base\n");
scanf("%f",&b);
printf("Enter the value of Height\n");
scanf("%f",&h);
if (b<0)
{
b=b*(-1);}
if (h<0){
h=h*(-1);
}
ans=triangle(b,h);
printf("Area of Triangle is %.2f\n\nPress any key to continue...\n",ans);
getch();
system("cls");
mainmenu();
break;
case 3:
float rad;
printf("Enter the value of Radius\n");
scanf("%.2f",&rad);
if (rad<0)
{
rad=rad*(-1);
}
ans=circle(rad);
printf("The Area of Circle is %.2f\n\nPress any key to continue...\n",ans);
getch();
system("cls");
mainmenu();
break;
case 4:
float w;
printf("Enter the value of Height\n");
scanf("%f",&h);
printf("Enter the value of Width\n");
scanf("%f",&w);
if (w<0)
{
w=w*(-1);
}
if (h<0)
{
h=h*(-1);
}
ans=rectangle(w,h);
printf("The Area of Rectangle is %.2f\n\nPress any key to continue...\n",ans);
getch();
system("cls");
mainmenu();
break;
case 5:
printf("Enter the value of Base\n");
scanf("%f",&b);
printf("Enter the value of Height\n");
scanf("%f",&h);
if (b<0)
{
b=b*(-1);
}
if (h<0)
{
h=h*(-1);
}
ans=rectangle(b,h);
printf("The Area of Parallelogram is %.2f\n\nPress any key to continue...\n",ans);
getch();
system("cls");
mainmenu();
break;
case 6:
printf("Enter the value of Base1\n");
scanf("%f",&a);
printf("Enter the value of Base2\n");
scanf("%f",&b);
printf("Enter the value of Height\n");
scanf("%f",&h);
if (a<0)
{
a=a*(-1);
}
if (b<0)
{
b=b*(-1);
}
if (h<0)
{
h=h*(-1);
}
ans=trapezoid(a,b,h);
printf("The Area of Trapezoid is %.2f\n\nPress any key to continue...",ans);
getch();
system("cls");
mainmenu();
break;
case 7:
printf("Enter the length of first Diagonal\n");
scanf("%f",&a);
printf("Enter the length of second Diagonal\n");
scanf("%f",&b);
if (a<0)
{
a=a*(-1);
}
if (b<0)
{
b=b*(-1);
}
ans=rhombous(a,b);
printf("The Area of Rhombous is %.2f\n\nPress any key to continue...\n",ans);
getch();
system("cls");
mainmenu();
break;
case 8:
return 0;
break;
default:
printf("Invalid your choice\n\nPress any key to continue...\n");
getch();
system("cls");
mainmenu();
}
}
float square(float l)
{
float res=l*l;
return res;
}
float triangle(float b, float h)
{
float res=0.5*b*h;
return res;
}
float circle(float rad)
{
float res=3.14*rad*rad;
return res;
}
float rectangle(float w,float h)
{
float res=w*h;
return res;
}
float parellelogram(float h,float b)
{
float res=h*b;
return res;
}
float trapezoid(float a,float b,float h)
{
float res=(a+b)*h*0.5;
return res;
}
float rhombous(float a, float b)
{
float res=a*b*0.5;
return res;
}
int main()
{
mainmenu();
return 0;
}


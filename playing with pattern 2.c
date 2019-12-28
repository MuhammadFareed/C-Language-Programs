#include <stdio.h>
#include <conio.h>
int main (){
	int outloop,inloop,no_of_rows;
	printf("enter no. of rows\n");
	scanf("%d",&no_of_rows);
	printf("\n");
	
	
	
	for ( outloop=no_of_rows ; outloop>0 ; outloop--) {
		
	for ( inloop=1 ; inloop <= outloop ; inloop++ )	{
	
	printf (" *");
	}
	printf("\n");
	}
	
	
	getch();
	return 0;
}


#include <stdio.h>
#include <conio.h>
int main (){
	int outloop,inloop,no_of_rows;    
	printf("enter no. of rows\n");
	scanf("%d",&no_of_rows);       //taking user-input of how much rows pat to print.
	printf("\n");
	
	/*  - [THIS IS OUTTER LOOP] ---- ye decide karega k loop kitni rows tak chale... 
	
		- [outloop < no_of_rows] --- ye islye liya hai ta k jo user ne input diya ha, jab tak outloop ki value utni na hojae, us waqt tak rows execute kare.    */
		
	for ( outloop = 0 ; outloop < no_of_rows ; outloop++ ) {
		
		
		
	/*  - [THIS IS INNER LOOP] ---- ye decide karega k *(star) ko kitni dafa print karwana hai 
	
		- [inloop <= outloop] --- ye islye liya hai , example: agar outloop 3rd time run kar raha hai (outloop=3) , to innerloop 3 dafa * print kare.           */	
	
	for ( inloop = 0 ; inloop <= outloop ; inloop++ )	{
	
	printf (" *");
	}
	printf("\n");
	}
	
	getch();
	return 0;
	}


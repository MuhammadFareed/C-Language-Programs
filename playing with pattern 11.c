/*
   4
  34
 234
1234 

*/
#include <stdio.h>
#include <conio.h>

int main (){
	int row , gap , disp , no=4 , n=3 , v=no , h=no;
	
	for ( row=1 ; row<=no ; row++ ) {
		
	for ( gap=1 ; gap<=n ; gap++ ) {
		printf (" ");
		
	}	
	
	for ( disp=h ; disp<=4 ; disp++  ) {
	
	printf("%d ",disp);
	}
	h--;
	printf("\n");	
	}
	getch();
	return 0;
	}

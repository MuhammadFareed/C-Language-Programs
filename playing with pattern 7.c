/* pyramid #1
     1
    2 2
   3 3 3
  4 4 4 4
 5 5 5 5 5
*/
#include <stdio.h>
#include <conio.h>

int main (){
	int rows,gap,disp,no=5,n=no;
	
	for ( rows=1 ; rows<=no ; rows++ ) {
		
	for ( gap=1 ; gap<n ; gap++ ){
		
		printf (" ");
		
	}
	n--;
	
	for ( disp=1 ; disp<=rows ; disp++  ) {
		
		printf ("%d ",rows); // rows beacuse each time this inner loop print no. , it would be the no. of outer row also the times of outrow 
		
	}
		printf("\n");
	}
	getch();
	return 0;
	}
	
	/*
		printf ("Enter number of rows to print a pattern\n");
	scanf ("%d",&no);
	no=n;    // this is because no will be used in rows (for loop) and will remains constant but n will be used in gap (for loop) and will be decreasing.
	
	why not take input?
	*/
	

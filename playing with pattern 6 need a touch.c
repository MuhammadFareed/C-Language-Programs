/*
1234
123
12
1
*/
#include <stdio.h>
#include <conio.h>

int main (){
	int outlp,inlp,z,x=1;
	
	for ( outlp=4 ; outlp>0 ; outlp-- ){
		
	for ( inlp=1 ; inlp<=outlp ; inlp++ ) {
	
printf ("%d",inlp);
	}
		
	printf ("\n");
	
	for ( z=0 ; z<x ; z++ ){
	
		printf (" ");
	}
	x++;
	}
	getch();
	return 0;
}


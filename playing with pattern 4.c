/*
1
22
333
4444
55555 */

#include <stdio.h>
#include <conio.h>

int main (){
	int outlp,inlp;
	
	for ( outlp=0 ; outlp<=5 ; outlp++) {
		
	for (inlp=1;inlp<=outlp;inlp++) {
		
	printf ("%d",outlp);
	}
	printf ("\n");
	}
	getch();
	return 0;
}


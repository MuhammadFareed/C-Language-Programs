/*
1
23
456
78910
1112131415 */

#include <stdio.h>
#include <conio.h>

int main (){
	int outlp,inlp,oneplus=1;
	
	for ( outlp=0 ; outlp<=5 ; outlp++) {
		
	for (inlp=1;inlp<=outlp;inlp++) {
	
	printf ("%d",oneplus);
	oneplus=oneplus+1;
	}
	printf ("\n");
	}
	getch();
	return 0;
}


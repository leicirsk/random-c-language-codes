#include <stdio.h>
#include <conio.h>

main(void){
	
	int x[5];
	x[2];
	&x[0] = x;
	&x[1] = *(x+1);
	
	printf("%d", *(x+1));
    return 0;
}

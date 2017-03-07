#include <stdio.h>

short int swap_endianness(short int *x){
	
	short int *y;
	char *m,*n,o;
	
	y=x;
	m=(char*)y;
	n=(char*)y+1;
	
	o=*m;
	*m=*n;
	*n=o;
		
	return *y;
}

main(){
	short int x;
	
	scanf("%d",&x);
	swap_endianness(&x);
	printf("\n%d",x);
}

#include <stdio.h>

short int swap_endianness(short int *x){

	char *m,*n,o;
	
	m=(char*)x;
	n=(char*)x+1;
	
	o=*m;
	*m=*n;
	*n=o;
		
	return *x;
}

main(){
	short int x;
	
	printf("zadaj x:",x);
	scanf("%d",&x);
	swap_endianness(&x);
	printf("\n vymenene:%d",x);
	
	return 0;
}

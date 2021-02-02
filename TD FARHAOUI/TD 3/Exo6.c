#include<stdio.h>
main(){
	int i; 
	for(i = 1; i <= 20 ; i++){
		if(i % 3 != 0){
			printf("%2d x %d = %3d\n", i, 7, i * 7);
		}
	}
}


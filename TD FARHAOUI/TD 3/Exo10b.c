#include<stdio.h>
main(){
	int n; 
	printf("Entrer le nombre n: ");
	scanf("%d", &n);
	
	int i, j;
	for(i = 0; i <= n; i++){
		for(j = 0; j < i; j++)
			printf(" ");
			
		for(j = 0; j <= n-i; j++)
			printf("%d", i);
		
		printf("\n");
	}
}


#include<stdio.h>

int main(){
	int n, i;

	printf("Veuillez saisir le nombre N:\n");
	scanf("%d", &n);
	
	
	if(n % 2 == 0){ 
		for(i = n-2; i > 0; i -= 2)
			printf("%d ", i);
	}
	printf("Fin de programme.");
	
	/* Autre methode
	if(n % 2 == 0){
		for(i = n-1; i >= 1; i -= 1)
			if(i % 2 == 0) 
				printf("%d ", i);
	} 
	
	Autre methode
	if(n % 2 == 0){ 
		for(i = 2; i<=n-2; i += 2)
			printf("%d ", i);
	}
	
	Autre methode
	if(n % 2 == 0){
		for(i = 1; i <= n-1; i += 1)
			if(i % 2 == 0) 
				printf("%d ", i);
	} 
	*/
}


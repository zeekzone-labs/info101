#include<stdio.h>

int main(){
	int n;

	printf("Veuillez saisir le nombre N:\n");
	scanf("%d", &n);
	
	if(n % 2 == 0){
		int i; 
		for(i = n-2; i > 0; i -= 2)
			printf("%d ", i);
	}
	printf("Fin de programme.");
}


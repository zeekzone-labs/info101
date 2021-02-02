#include<stdio.h>
main(){
	int nombre, i; 

	for(i = 1; i <= 20 ; i++){
		printf("Entrer le nombre numero %d: ", i);
		scanf("%d", &nombre);
		if(nombre % 2 == 0){
			printf("Le carre  de %d est %d.\n", nombre, nombre*nombre);
		}
	}
}


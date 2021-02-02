#include<stdio.h>
main(){
	int nombre, n=0, n_paire=0, i=1; 

	do{
		printf("Entrer le nombre numero %d: ", i);
		scanf("%d", &nombre);
		n++;
		if(nombre % 2 == 0){
			printf("Le carre  de %d est %d.\n", nombre, nombre*nombre);
			n_paire++;
		}
	}while(nombre != 100);
	
	printf("Le nombre totale d'entrees est : %d.\n", n);
	printf("Le nombre totale d'entrees pair est : %d.\n", n_paire);
}


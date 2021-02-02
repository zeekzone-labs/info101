#include<stdio.h>
main(){
	int nombre, max, numero; 

	printf("Entrer le nombre numero %d: ", 1);
	scanf("%d", &nombre);
	
	max = nombre;
	numero = 1;
	
	int i; 
	for(i = 2; i <= 20 ; i++){
		printf("Entrer le nombre numero %d: ", i);
		scanf("%d", &nombre);
		if(nombre > max){
			max = nombre;
			numero = 1;
		}
	}
	printf("Le plus grand de ces nombres est : %d.\n", max);
	printf("C'etait le nombre numero : %d.", numero);
}


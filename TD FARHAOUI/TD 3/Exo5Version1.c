#include<stdio.h>
main(){
	int nombre, max, i; 

	printf("Entrer le nombre numero %d: ", 1);
	scanf("%d", &nombre);
	
	max = nombre;
	
	for(i = 2; i <= 20 ; i++){
		printf("Entrer le nombre numero %d: ", i);
		scanf("%d", &nombre);
		if(nombre > max){
			max = nombre;
		}		
	}
	
	printf("Le plus grand de ces nombres est : %d", max);
}




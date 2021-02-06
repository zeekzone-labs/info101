#include<stdio.h>
main(){
	int nombre, max, i; 
	
	max = -9999;
	i = 1;
	do{
		printf("Entrer le nombre numero %d: ", i);
		scanf("%d", &nombre);
		if(nombre > max){
			max = nombre;
		}
		
		i++;
	}while(i<=20);
	
	printf("Le plus grand de ces nombres est : %d", max);
}




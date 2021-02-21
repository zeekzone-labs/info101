#include<stdio.h>
#include<limits.h>
main(){
	int nombre, total, somme, min, min_pos, somme_pos; 
	
	total = somme = somme_pos = 0;
	min = min_pos = INT_MAX; // un  nombre trop grand
	do{
		printf("Entrer le nombre numero : ");
		scanf("%d", &nombre);
		
		if(nombre != 999){
			total++;
			somme += nombre;
			min = (min<nombre) ? min : nombre;
			if(nombre > 0){
				somme_pos += nombre;
				min_pos = (min_pos<nombre) ? min_pos : nombre;
			}
		}
	}while(nombre != 999);
	
	printf("Le nombre totale d'entrees est : %d.\n", total);
	printf("La somme des  valeurs lues : %d.\n", somme);
	printf("La minimum des  valeurs lues : %d.\n", min);
	printf("La somme des valeurs strict. positive : %d.\n", somme_pos);
	printf("La minimum des  valeurs strict. positive : %d.\n", min_pos);
}


#include<stdio.h>
main(){
	int depart, fin, i;

	printf("Veuillez saisir le nombre de depart: ");
	scanf("%d", &depart);

	fin = depart + 10;
	depart++; // depart = depart + 1;
 
	for(i = depart; i <= fin ; i++) 
		printf("%d ", i);
}
/*
ALGORITHME  dix_nombre_suivants
     VARIABLES depart, fin, i: Entier
DEBUT
	Ecrire("Veuillez saisir le nombre de depart: ");
	Lire(depart);

	fin <-- depart + 10
	depart <-- depart + 1

	Pour i <-- depart a fin pas=1 Faire
		Ecrire(i, " ")
	FinPour	
FIN
*/

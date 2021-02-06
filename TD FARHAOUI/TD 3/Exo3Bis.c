#include<stdio.h>
main(){
	// Declaration des variables
	int i, n;
	// Saisie des valeurs des variables (Entrees)
	printf("Saisir n: ");
	scanf("%d", &n);
	// Traitement/Calcul
	for(i = 1; i<=10 ; i++)
		printf("%d ", n+i);		
}
/*
Algorithme dix_nombre_suivant
	Variable i, n: Entier
Début
	Ecrire("Saisir n:")
	Lire(n)
	
	POUR i <-- 1 à 10 FAIRE
		Ecrire(n+i)
	FINPOUR
Fin
*/
/*
i     test                   action       MAJ
1      i <= 10   si vrai     Ecrire(n+i)      i++
2      i <= 10   si vrai     Ecrire(n+i)     i++
3
4
*/

#include<stdio.h>
main(){
	// Declaration des variables
	int i, n, F;
	// Saisie des valeurs des variables (Entrees)
	printf("Saisir n: ");
	scanf("%d", &n);
	// Traitement/Calcul
	F = 1;
	for(i = 1; i<=n ; i++)
		F *= i;
	// Affichage (Sortie)
	printf("La factoriel est: %d", F);
}
/*
Algorithme Factoriel
	Variable i, F, n: Entier
Début
	Ecrire("Saisir n:")
	Lire(n)
	F <-- 1
	POUR i <-- 1 à n FAIRE
		F <-- F * i
	FINPOUR
	Ecrire("La factoriel est: ", F)
Fin
*/



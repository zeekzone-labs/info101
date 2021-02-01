#include<stdio.h>
main(){
	// Declaration des variables
	int i, n, S;
	// Saisie des valeurs des variables (Entrees)
	printf("Saisir n: ");
	scanf("%d", &n);
	// Traitement/Calcul
	S = 0;
	for(i = 1;i<=n; i++)
		S += i;
	// Affichage (Sortie)
	printf("La somme est: %d", S);
}
/*
Algorithme affichageDixFois_Avec_POUR
	Variable i, S, n: Entier
Début
	Ecrire("Saisir n:")
	Lire(n)
	S <-- 0
	POUR i <-- 1 à n FAIRE
		S <-- S + i
	FINPOUR
	Ecrire("La somme est: ", S)
Fin
*/



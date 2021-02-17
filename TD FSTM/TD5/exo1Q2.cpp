
/*
Algotorithme Affichage
	Variables  tableau tab[10]: Entier
			   i: Entier
Debut
	Pour i <-- 0 a 9 Faire
		Ecrire("Saisir tab[", i, " ] = ")
		lire(tab[i])
	FinPour
	
	{ Affichage inverse }	
	Pour i <-- 9 a 0 pas=-1 Faire
		Ecrire(tab[i], " ")
	FinPour
	
	{ Affichage direct }	
	Pour i <-- 0 a 9 Faire
		Ecrire(tab[i], " ")
	FinPour
Fin
*/
#include<stdio.h>
main(){
	int tab[10];
	int i;
	
	// remplissage
	for( i = 0; i<=9; i++) {
		printf("Saisir tab[%d  ] = ", i);
		scanf("%d", &tab[i]);
	}
	
	// Affichage inverse
	printf("\nAffichage inverse\n");
	for( i = 9; i>=0; i--) {
		printf("%d ", tab[i]);
	}
	// Affichage direct
	printf("\nAffichage direct\n");
	for( i = 0; i<=9; i++) {
		printf("%d ", tab[i]);
	}
}
	

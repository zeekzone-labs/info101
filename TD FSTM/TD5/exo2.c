
/*
Algotorithme Affichage
	Variables  tableau tab[100], tab1[100], tab2[100]: Entier
			   i, j, n: Entier
Debut
	Ecrire("Saisir n <= 100")
	lire(n)
	
	Ecrire("Saisir les elements de tab1 ")
	Pour i <-- 0 a n-1 Faire
		Ecrire("Saisir tab1[", i, " ] = ")
		lire(tab1[i])
	FinPour
	
	Ecrire("Saisir les elements de tab2 ")
	Pour i <-- 0 a n-1 Faire
		Ecrire("Saisir tab2[", i, " ] = ")
		lire(tab2[i])
	FinPour
	
	j <-- n-1
	Pour i <-- 0 a n-1 pas=1 Faire
		tab[i] <-- tab1[i] * tab2[j]
		j <-- j - 1
	FinPour
	
	{ Affichage direct }	
	Pour i <-- 0 a n-1 Faire
		Ecrire(tab[i], " ")
	FinPour
Fin
*/
#include<stdio.h>
main(){
	int tab[100], tab1[100], tab2[100];
	int i, j, n;
	
	printf("Saisir n <= 100 ");
	scanf("%d", &n);
	
	// remplissage
	printf("Saisir les elements de tab1 :");
	for( i = 0; i<=n-1; i++) {
		printf("Saisir tab1[%d] = ", i);
		scanf("%d", &tab1[i]);
	}
	
	printf("Saisir les elements de tab2 :");
	for( i = 0; i<=n-1; i++) {
		printf("Saisir tab2[%d] = ", i);
		scanf("%d", &tab2[i]);
	}
	
	// traitement
	j = n-1;
	for( i = 0; i<=n-1; i++) {
		tab[i] = tab1[i] * tab2[j];
		j = j-1;
	}

	// Affichage direct
	printf("\nAffichage direct\n");
	for( i = 0; i<=n-1; i++) {
		printf("%d ", tab[i]);
	}
}
	

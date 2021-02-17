
/*
Algotorithme Affichage
	Variables  tableau tab[20][20]: Entier
			   i, j, n, S: Entier
Debut
	Ecrire("Saisir n <= 20")
	lire(n)
	
	Ecrire("Saisir les elements de tab (matrice) ")
	Pour i <-- 0 a n-1 Faire
		Pour j <-- 0 a n-1 Faire
			Ecrire("Saisir tab[", i, " ][", j, "] = ")
			lire(tab[i][j])
		FinPour
	FinPour
	
	S <-- 0
	Pour i <-- 0 a n-1 Faire
		Pour j <-- 0 a n-1 Faire
			Si (i = j) Faire
				ecrire(tab[i][j], " ")
				S <-- S + tab[i][j]
			FinSi
		FinPour
	FinPour
	
	ecrire("La somme de la diagonale principale est ", S)
Fin
*/
#include<stdio.h>
main(){
	int tab[20][20];
	int i, j, n, S;
	
	printf("Saisir n <= 20 ");
	scanf("%d", &n);
	
	// remplissage
	printf("Saisir les elements de tab (matrice)  :");
	for( i = 0; i<=n-1; i++) {
		for( j = 0; j<=n-1; j++) {
			printf("Saisir tab[%d][%d] = ", i, j);
			scanf("%d", &tab[i][j]);
		}
	}
	
	S = 0;
	for( i = 0; i<=n-1; i++) {
		for( j = 0; j<=n-1; j++) {
			if(i==j){
				printf("%d ", tab[i][j]);
				S = S + tab[i][j];
			}
		}
		printf("\n");
	}
		printf("La somme de la diagonale principale est %d", S);
}
	

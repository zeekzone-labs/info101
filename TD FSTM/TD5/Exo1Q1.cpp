
/*
Algotorithme MultiplesDe5_MultiplesDe2
	Variables  tableau tab[20]: Entier
			   i, m2, m5: Entier
Debut
	
	Pour i <-- 0 a 19 Faire
		Ecrire("Saisir tab[", i, " ] = ")
		lire(tab[i])
	FinPour
	
	m2 <-- 0
	m5 <-- 0
	
	Pour i <-- 0 a 19 Faire
		Si (tab[i] Mod 2 = 0) Alors
			m2 <-- m2 + 1
		FinSi
		
		Si (tab[i] Mod 5 = 0) Alors
			m5 <-- m5 + 1
		FinSi
	FinPour
	
	Ecrire("Le nombre des multiples de 2 est : ", m2)
	Ecrire("Le nombre des multiples de 5 est : ", m5)
Fin
*/
#include<stdio.h>
main(){
	int tab[20];
	int i, m2, m5;
	
	// remplissage
	for( i = 0; i<=19; i++) {
		printf("Saisir tab[%d  ] = ", i);
		scanf("%d", &tab[i]);
	}
	// Calcul
	m2 = 0;
	m5 = 0;
	for( i = 0; i<=19; i++) {
		if (tab[i] % 2 == 0){
			m2 = m2 + 1;
		}
			
		if (tab[i] % 5 == 0) 
			m5 = m5 + 1;
	}
	// Affichage
	printf("Le nombre des multiples de 2 est : %d", m2);
	printf("Le nombre des multiples de 5 est : %d", m5);
}
	

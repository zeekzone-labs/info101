#include<stdio.h>
main(){
	int i, n;
	printf("Saisir n: ");
	scanf("%d", &n);
	
	printf("Avec For\n");
	for(i = 1;i<=n;i = i+1)
		printf("%i ", i);
	
	printf("\nAvec while\n");
	i = 1;
	while(i<=n){
		printf("%i ", i);
		i = i+1;
	}
	
	printf("\nAvec Do ... While\n");
	i = 1;
	do{
		printf("%i ", i);
		i = i+1;
	}while(i<=n);
}
/*
Algorithme affichageDixFois_Avec_POUR
	Variable i, n: Entier
Début
	Ecrire("Saisir n:")
	Lire(n)
	
	POUR i <-- 1 à n FAIRE
		ECRIRE(i)
	FINPOUR
	
	i <-- 1
	TANTQUE (i<=n)  FAIRE
		ECRIRE(i)
		i <-- i+1
	FINTANQUE
	
	i <-- 1
	REPETER
		ECRIRE(i)
		i <-- i+1
	JUSQU'A (NON(i<=n))
	

Fin
*/

/*
---------------------->
i    conditon     Action                                           MAJ
-1    i>=1			Fin de la boucle
1     i>=1			Ecrire(i)								       i <-- i-2
3     i>=1 		    Ecrire(i)								       i <-- i-2
5     i>=1 		    Ecrire(i)								       i <-- i-2
7     i>=1 		    Ecrire(i)								       i <-- i-2
9     i>=1          Ecrire(i)								       i <-- i-2
*/

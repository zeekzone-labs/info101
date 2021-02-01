#include<stdio.h>
main(){
	int i;
	
	printf("Avec For\n");
	for(i = 1;i<=10;i = i+1)
		printf("%i ", i);
	
	printf("\nAvec while\n");
	i = 1;
	while(i<=10){
		printf("%i ", i);
		i = i+1;
	}
	
	printf("\nAvec Do ... While\n");
	i = 1;
	do{
		printf("%i ", i);
		i = i+1;
	}while(i<=10);
}
/*
Algorithme affichageDixFois_Avec_POUR
	Variable i: Entier
Début
	POUR i <-- 1 à 10 FAIRE
		ECRIRE(i)
	FINPOUR
	
	i <-- 1
	TANTQUE (i<=10)  FAIRE
		ECRIRE(i)
		i <-- i+1
	FINTANQUE
	
	i <-- 1
	REPETER
		ECRIRE(i)
		i <-- i+1
	JUSQU'A (NON(i<=10))
	
	i     Action
	1     1
	2     2
	3     3 
	
	9	  9
	10    10
	11
	  
	
	
	
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

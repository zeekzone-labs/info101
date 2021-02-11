#include<stdio.h>
main(){
	int i, b, a, j;
	a = 2;
	b = 5; 
	printf("a=%d   b=%d\n", a, b);
	i = a + b++; // i = a + b;   b = b +1;
	printf("a=%d   b=%d  i=%d\n", a, b, i);
	j = a + ++b; // b = b +1;   j = a + b;   
	printf("a=%d   b=%d  j=%d\n", a, b, j);
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

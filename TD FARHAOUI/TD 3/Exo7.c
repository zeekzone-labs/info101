#include<stdio.h>

int main(){
	int n, nbrDiviseur = 0;

	printf("Veuillez saisir le nombre N:\n");
	scanf("%d", &n);
	
	// Calculer le nombre de diviseurs de n
	int i; 
	for(i = 1; i <= n; i++)
		if(n % i == 0) // test de divisibilite
			nbrDiviseur++; //  nbrDiviseur = nbrDiviseur + 1;
		

	if(nbrDiviseur == 2)
		printf("%d est un nombre premier.\n", n);
	else
		printf("%d n'est pas un nombre premier.\n", n);

}

/*
ALGORITHME  nomre premier
     VARIABLES  n, i, nbrDiviseur: Entier
DEBUT
	Ecrire("Veuillez saisir n:")
	Lire(n)
	
	nbrDiviseur <-- 0
	Pour i de 1 a n Faire
		Si (n MOD i = 0) Alors
		    nbrDiviseur <-- nbrDiviseur + 1
		FinSi
	FinPour
	
	Si (nbrDiviseur = 2) Alors
		Ecrire(n, "est un nombre premier.")
	Sinon
		Ecrire(n, "n'est un nombre premier.")
	FinSi
FIN
*/



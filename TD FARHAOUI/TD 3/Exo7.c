#include<stdio.h>

int main(){
	int n, premier = 1;

	printf("Veuillez saisir le nombre N:\n");
	scanf("%d", &n);
	
	int i; 
	for(i = 2; i <= n-1; i++)
		if(n % i == 0){
			premier = 0;
		}

	if(premier == 1)
		printf("%d est un nombre premier.\n", n);
	else
		printf("%d n'est pas un nombre premier.\n", n);

}

/*
ALGORITHME  nomre premier
     VARIABLES  n, i: Entier
     	       premier = vrai: Booleen
DEBUT
	Ecrire("Veuillez saisir n:")
	Lire(n)
	
	Pour i de 2 a n-1 Faire
		Si (n % i = 0) Alors
		    premier <-- faux
		FinSi
	FinPour
	
	Si (premier = vrai) Alors
		Ecrire(n, "est un nombre premier.")
	Sinon
		Ecrire(n, "n\'est un nombre premier.")
	FinSi
	
FIN
*/

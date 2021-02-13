#include<stdio.h>
main(){
	int n, nbr_espace, nbr_chiffre;
	 
	printf("Entrer le nombre n: ");
	scanf("%d", &n);
	
	int i, j;
	// pour chaque ligne i de 0 a n faire
	for(i = 0; i <= n; i++){
		// Afficher les espaces 
		nbr_espace = i;
		for(j = 1; j <= nbr_espace; j++)
			printf(" ");
		// Afficher les chiffres 
		nbr_chiffre = n+1 - i;
		for(j = 1; j <= nbr_chiffre; j++)
			printf("%d", i);
		// retour a la ligne 
		printf("\n");
	}
}


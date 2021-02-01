# include<stdio.h>
int main(){ 
	int m[20][20];
	int i, j, N, S;
	
	/******************* la saisie des données************************************ */
	printf ("tapez la dimension \n");
	scanf("%d", &N); // carre NxN
	
	printf ("tapez les elements \n");
	for ( i = 0; i < N; i++) // on fixe ligne
		for ( j = 0; j < N; j++){ 
			printf ("Saisir m[%d][%d]= ", i, j);
			scanf("%d", &m[i][j]);
		}
		
	/* ***************************** traitement ********************************************/
	S=0;
	for(i = 0 ;i<N ;i++)
		S = S + m[i][i];
		
	/* *********************************************** Affichage des résultats ***********************/
	printf("somme= %d\n", S);
	
	// Affichage de la matrice
	for(i=0; i<N ; i++) { // on fixe la ligne
		for(j=0; j<N ; j++)
			printf ("%d ", m[i][j]);
		printf ("\n");
	}
	return 0;
}

# include<stdio.h>
int main(){
	char m[20][20];
	int i, j, e1, e2, dep, arr;
	char sym;
	
	/****************************************** Initialisation ***********************************************/
	for ( i = 0; i < 20; i++)
		for ( j = 0; j < 20; j++)
			m[i][j]='$';
	
	/* **************************************** la saisie des données************************************ */
	printf ("tapez l etat de depart \n");
	scanf("%d", &dep);
	printf ("tapez l’etat d’arrivee \n");
	scanf("%d", &arr);
	
	printf ("tapez les transitions ; \n");
	scanf("%d%d%c", &e1, &e2, &sym);
	
	while( (e1 != -1)&&(e2 != -1) ){
		m[e1][e2] = sym;
		printf ("tapez les transitions ; \n");
		scanf("%d%d%c", &e1, &e2, &sym);
	}
	
	/* // Avec do...while
	do{
		printf ("tapez les transitions ; \n");
		scanf("%d%d%c", &e1, &e2, &sym);
		if((e1 != -1)&&(e2 != -1))
			m[e1][e2] = sym;
	}while( (e1 != -1)&&(e2 != -1) );
	*/
	/* *********************************************** Affichage des résultats ***********************/
	for ( i = dep; i <= arr; i++){
		for ( j = dep; j <= arr; j++)
			printf ("%c ", m[i][j]);
		printf("\n");
	}
	return 0;
}

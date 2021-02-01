# include<stdio.h>
# include<string.h>
int main(){
	char TXT[50];
	int i, j, N;
	/* **************************************** la saisie des données************************************ */
	printf ("tapez un texte : \n");
	gets(TXT);
	
	/*********************** Traitement ******************************************/
	N = strlen(TXT)-1;
	for ( i = 0; i<N; i++){
		if (TXT[i]=='e'){
			for ( j=i; j<N; j++) // décaler les elements (à gauche)
				TXT[j]=TXT[j+1];
			N--;
		}
	}
	TXT[N+1]='\0';
	/********************************* Affichage des résultats ***********************/
	printf("resultat:\n") ;
	printf ("%s", TXT);
	return 0;
}

# include<stdio.h>
# include<string.h>
int main(){ 
	char mots[100][50];
	int i, j, N;
	printf ("tapez les nombre des mots < 100: \n");
	scanf("%d", &N);
	
	/* ************************* la saisie des données************************************ */
	printf ("tapez des mots: \n");
	for(i = 0; i <N; i++)
		scanf("%s", mots[i]);
	
	/* ************************ Affichage des résultats ***********************/
	for ( j = N-1; j >= 0; j--)
		printf("%s\t", mots[j]);
return 0;
}

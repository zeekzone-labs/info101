# include<stdio.h>
# include<string.h>
int main(){ 
	char mots[5][50];
	int i, j;
	
	/* **************************************** la saisie des données************************************ */
	printf ("tapez 5 mots : \n");
	for(i = 0; i <5; i++)
		scanf("%s", mots[i]);
	
	/* *********************************************** Affichage des résultats ***********************/
	for ( j = 4; j >=0; j--)
		printf("%s\t", mots[j]);
return 0;
}

#include<stdio.h> 
#define MAX 100
int main(){ 
	//const int MAX = 100;
	int tab[MAX]; 
	int i, j, N, val; 
	
	/* ****************************** la saisie des données*************************** */ printf ("tapez le nombre d’elements \n"); 
	scanf("%d", &N); 
	printf ("tapez les elements \n"); 
	for( i = 0; i < N; i++){ 
		printf ("tab[%d]= ", i); 
		scanf("%d", &tab[i]);
	} 
	
	/* ************************************* Traitement ********************************* */ 
	for ( i = 1; i < N; i++) { 
		// insérer la valeur tab[i] dans le sous tableau gauche
		val = tab[i]; // conserver la valeur 
		
		// décaler à droite toutes les valeurs > val ****  
		j=i-1; 
		while ((j>=0) && (tab[j]> val)){ 
			// décaler à droite la valeur tab[j]
			tab[j+1]=tab[j] ; 
			j--; // avancer a gauche
		} 
		
		tab[j+1]=val; // insérer la valeur à la position convenable 
	} 
	
	/* **************** affichage du tableau après le traitement ************** */ 
	for ( i = 0; i< N; i++) 
		printf ("%d ", tab[i ]); 
	return 0; 
}


#include <stdio.h> 
int main(){ 
	int tab [100]; 
	int i, j, N, pos, tmp ; 
	
	/* ****************************** la saisie des données*************************** */ 
	printf ("tapez le nombre d’elements \n"); 
	scanf("%d", &N); 
	printf ("tapez le nombre d’elements \n"); 
	for ( i = 0; i < N; i++){ 
		printf ("tab[%d]= ", i); 
		scanf("%d", &tab[i]); 
	} 
	
	/* ************************************ Traitement ********************************* */ 
	for ( i = 0; i < N-1; i++) { // parcourir le tableau
		pos=i ; 
		// Chercher la position de plus petit element
		for ( j = i; j < N; j++){ 
			if(tab[j]< tab[pos]) 
			 	pos = j; // memoriser la position de plus petit 
		} 
		// Echanger
		tmp=tab[i] ; 
		tab[i]=tab[pos]; 
		tab[pos]=tmp; 
	
	} 
	/* **************** affichage du tableau après le traitement ************** */ 
	for ( i = 0; i< N;i = i + 1) 
		printf ("%d ", tab[i]); 
	return 0; 
}


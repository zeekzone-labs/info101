#include <stdio.h> 
/* lecture d'un tableau et affichage des pairs d'abord, les impairs ensuite */ 
int main(){ 
	int tab[100]; // <type>  <identifiant_tableau>[<taille>];
	int i, j, X, N ; 
	
	/* **************** la saisie des données************** */ 
	printf ("tapez le nombre d’elements \n"); 
	scanf("%d", &N); 
	printf ("tapez les elements \n"); 
	for ( i = 0; i < N; i++ ) { 
		printf ("tab[%d]= ", i); 
		scanf("%d", &tab[i]); 
	} 
	
	/* **************** affichage du tableau dans l'ordre ************** */ 
	printf ("au depart : \n"); 
	for ( i = 0; i< N;i = i + 1){
		printf ("%d ", tab[i ]); 
	} 
	printf ("\n"); 
	/* ******************************* Traitement ******************************* */ 
	for ( i =0; i< N-1 ; i = i + 1){ // parcourir
		// chercher un nombre impaire
		if (tab[i]%2 != 0){ // nombre impair à la position i
			j = i+1;  
			// chercher le 1er nombre pair
			while( (j< N) && (tab[j]%2 != 0) )  j++ ; 
			
			// echanger tab[i] avec tab[j]
			if(j<N){ 
				X=tab[i] ; 
				tab[i]=tab[j] ; 
				tab[j]=X ; 
			} 
		} 
	} 
	/* **************** affichage du tableau après le traitement ************** */ printf ("après modification : \n"); 
	for ( i = 0; i< N;i = i + 1) 
	printf ("%d ", tab[i]); 
	return 0; 
}


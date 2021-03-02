/*
Algorithme TriParSelection
	Variables	tableau tab [100]: Entier 
		        i, j, N, pos, tmp : Entier 
	
	// la saisie des données
	Ecrire("tapez le nombre d’elements \n")
	Lire(N)
	 
	Ecrire("tapez le nombre d’elements \n")
	Pour i de 0 a N par=1 Faire
		Ecrire("Saisir un entier")
		Lire(tab[i])
	FinPour
	
	// Traitement 
	// parcourir le tableau
	Pour i de 0 a N-1 par=1 Faire 
		pos <-- i  
		// Chercher la position de plus petit element
		Pour j de i a N par=1 Faire  
			Si (tab[j]< tab[pos]) Alors 
			 	pos <-- j // memoriser la position de plus petit 
			FinSi
		FinPour
		
		// Echanger
		tmp <-- tab[i] 
		tab[i] <-- tab[pos]
		tab[pos] <-- tmp 
	FinPour
	
	// affichage du tableau après le traitement 
	Pour i de 0 a N par=1 Faire 
		Ecrire(tab[i])
	FinPour
Fin
*/

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


#include < stdio.h> 
int main(){ 

	int tab[100]; 
	int i, N, tmp, trouve; 
	/* ****************************** la saisie des données*************************** */ 
	printf ("tapez le nombre d’elements \n"); 
	scanf("%d", &N); 
	printf ("tapez le nombre d’elements \n"); 
	for ( i = 0; i < N; i++) 
	{ 
		printf ("tab[%d]= ", i); 
		scanf("%d", &tab[i]); 
	} 
	
	/* ************************************* Traitement ********************************* */ 
	do{ 
	
		trouve=0; // 0: pas d'echange, 1: on a un echange 
		for( i = 0; i < N-1; i++){ 
			if(tab[i] > tab[i+1]){ // 1<2<3<5<6
				// echanger
				tmp=tab[i] ; 
				tab[i]=tab[i+1] ; 
				tab[i+1]=tmp ; 
				// Signaler qu'il ya eu un echange
			 	trouve=1 ; 
			} 
		} 
		
	}while (trouve==1); 
	
	/* **************** affichage du tableau après le traitement ************** */ 
	for( i = 0; i< N; i++) 
		printf ("%d ", tab[i]); 
		
	getch() ; 
	return 0; 
}


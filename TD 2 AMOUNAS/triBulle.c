#include < stdio.h> 
int main(){ 

	int tab[100]; 
	int i, j, N, tmp, trouve; 
	/* ****************************** la saisie des donn�es*************************** */ 
	printf ("tapez le nombre d�elements \n"); 
	scanf("%d", &N); 
	printf ("tapez le nombre d�elements \n"); 
	for ( i = 0; i < N; i++) 
	{ 
	printf ("tab[%d]= ", i); 
	scanf("%d", &tab[i]); 
	} 
	
	/* ************************************* Traitement ********************************* */ 
	do{ 
		trouve=0 ; 
		for ( i = 0; i < N-1; i ++){ 
			if(tab[i]> tab[i+1]){ 
				tmp=tab[i] ; 
				tab[i]=tab[i+1] ; 
				tab[i+1]=tmp ; 
			 	trouve=1 ; 
			} 
		} 
	}while (trouve ! =0); 
	
	/* **************** affichage du tableau apr�s le traitement ************** */ 
	for( i = 0; i< N; i++) 
		printf ("%d ", tab[i ]); 
		
		
	getch() ; 
	return 0; 
}


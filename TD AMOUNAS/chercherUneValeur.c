#include<stdio.h> 
#define MAX 100
int main(){ 
	//const int MAX = 100;
	int tab[MAX]; 
	int i, j, N, val, trouve; 
	
	/* ****************************** la saisie des données*************************** */ printf ("tapez le nombre d’elements \n"); 
	scanf("%d", &N); 
	printf ("tapez les elements \n"); 
	for( i = 0; i < N; i++){ 
		printf ("tab[%d]= ", i); 
		scanf("%d", &tab[i]);
	} 
	
	val = 5;
	trouve = 0;
	/* ************************************* Traitement ********************************* */ 
	for ( i = 0; i < N; i++) { 
		if(tab[i] == val){
			trouve = 1;
			break;
		}
			
	} 
	
	/* **************** affichage du tableau après le traitement ************** */ 
	if(trouve) 
		printf("Exist"); 
	else
		printf("N'Exist pas");
	return 0; 
}


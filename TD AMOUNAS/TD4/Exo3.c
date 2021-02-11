#include<stdio.h>
#include<conio.h>
#define max 9

// declaration des fonctions
void controleLigne(int*, int);
int verifieValeur(int*);

void init_mat(int*, int, int);
void affichmat(int*, int, int);

int compterLeNombreDoccurrences(int* g, int i, int chiffre);

main(){
	int g[9][9];
	int n, i;
	// appeler la fonction qui va remplir le tableau
	init_mat(&g[0][0], max, max);
	// appeler la fonction qui va afficher le tableau
	affichmat(&g[0][0], max, max);
	
	n = verifieValeur(&g[0][0]);
	if(n==0)
		printf("Des valeurs sont correctes\n");
	if(n==-1)
		printf("Des valeurs sont incorrectes\n");
		
	printf("donner une ligne\n");
	scanf("%d",&i); 
	controleLigne(&g[0][0],  i);
}
void affichmat(int *t,int n,int p){
	int i, j;
    for(i=0; i<n; i++){
	   for(j=0; j<p; j++)
        	printf("%d\t", *(t+max*i+j));
        printf("\n");
    }
} 

void init_mat(int *t, int n, int p){
	int i,j;
    for(i=0; i<n; i++)
    	for(j=0; j<p; j++){ 
			printf("donner t[%d][%d]=", i, j);
        	scanf("%d", t+max*i+j);
	 	}
	}
	
int controleLigne(int *g, int i){ //g: grille, i:indeice de la ligne
    int chif,  j, cpt;
    
    for(chif=1; chif<=9; chif++){ // pour chaque chiffre 
		cpt = compterLeNombreDoccurrences(&g[0][0], i, chif)
		// cpt contient le nombre d'occurrences de chiffre chif dans g[i]      
    	if(cpt > 1)
        	break;
	}
	// si on a pas de duplication alors
	// on retourne 1 sinon 0
	if(cpt==1)
	    return 1; // la ligne est bien remplie
	else
	    return 0; // il y a des duplications
}

int verifieValeur(int *g){ 
	int i,j;
	
    for(i=0; i<9; i++)
       for(j=0; j<9; j++)
            if((*(g+max*i+j)>9) || (*(g+max*i+j)<0))
                return -1;
    return 0;
}
// *(g+max*i+j)  == g[i][j] 

int compterLeNombreDoccurrences(int* g, int i, int chiffre){
	int  cpt = 0; // un compteur
	for(j=0; j<9; j++) // parcours de la ligne g[i]
        if(*(g+9*i+j) == chif) 
            cpt++;
    return cpt;
}

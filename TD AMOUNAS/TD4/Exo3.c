#include<stdio.h>
#include<conio.h>
#define max 9

void controleLign(int *g, int);
int verifieValeur(int *g);
void init_mat(int*, int, int);
void affichmat(int*, int, int);

main(){
	int g[max][max];
	int n, i;
	
	init_mat(&g[0][0], max, max);
	affichmat(&g[0][0], max, max);
	
	n = verifieValeur(&g[0][0]);
	if(n==0)
		printf("Des valeurs sont correctes\n");
	if(n==-1)
		printf("Des valeurs sont incorrectes\n");
		
	printf("donner une ligne\n");
	scanf("%d",&i); 
	controleLign(&g[0][0],i);
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
	
void controleLign(int *g, int n){
    int chif, i, j, cpt;
    for(chif=1; chif<=9; chif++){ 
		cpt=0;
		for(i=0; i<max; i++)
            if(*(g+max*n+i)==chif)
                cpt++;
                
        if(cpt!=1)
            break;
	    }
	    
	    if(cpt==1)
	    	printf("la ligne est correctement remplie\n");
	    else
	    	printf("la ligne est incorrectement remplie\n");
}

int verifieValeur(int *g){ 
	int i,j;
    for(i=0; i<max; i++)
       for(j=0; j<max; j++)
            if((*(g+max*i+j)>9) || (*(g+max*i+j)<0))
                return -1;
    return 0;
}

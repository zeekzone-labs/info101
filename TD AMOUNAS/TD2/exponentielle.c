#include <stdio.h> 
int main(){ 
	
	int n, i, j, F; 
	float S, x, P ; 
	/* ****************************** la saisie des données*************************** */ 
	printf ("tapez un entier n : \n"); 
	scanf ("%d", &n); 
	printf ("tapez le parametre x :\n"); 
	scanf ("%f", &x); 
	
	/*
	P = 1
	j = 1      P = 1*x = x
	j = 2      P = x*x = x^2
	j = 3      P = x^2 *x = x^3
	...
	j = n      P = x^(n-1) *x = x^n
	*/
	/* ************************************* Traitement ********************************* */ 
	
	for (i =0, S=0; i<=n; i = i + 1){ // Pour i
		// Calcul de puiss(x,i)
		P=1;  
		for (j =1; j<= i; j++)  // Pour j
			P=P*x;  // x*x*...*x 
		// Calcul de fact(i)
		F=1;  
		for (j =1; j<= i; j++) // Pour j
			F=F*j; // 1*2*3*4*5*6*...*i = i!
		
		S=S+ (P/F); 
	} 
	/* **************** affichage du résultat ************** */ 
	printf ("après le traitement : \n"); 
	printf ("exp(%f)=%f ", x, S); 
	return 0; 
}


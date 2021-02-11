#include<stdio.h>
main(){
	int ligne, colonne, n;
	
	printf("Donner le nombre des lignes: ");
	scanf("%d", &n);
	
	//  pour chaque ligne 
	for(ligne = 1; ligne <= n; ligne = ligne + 1){
		// traiter les colonnes (pour chaque colonne)
		for(colonne=1; colonne <= n-ligne+1; colonne++){
			printf("%d", colonne);
		} 
		printf("\n");
	}
	
	
}
/*
i     test          Action              mise a jours
6     i>=1  vrai    printf("%d",i);       i--
5     i>=1  vrai    printf("%d",i);       i--
4     i>=1  vrai    printf("%d",i);
3     i>=1  vrai    printf("%d",i);
2     i>=1  vrai    printf("%d",i);
1     i>=1  vrai    printf("%d",i);       i--
0     i>=1  faux    fin
*/

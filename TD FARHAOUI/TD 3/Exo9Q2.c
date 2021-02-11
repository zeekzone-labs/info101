#include<stdio.h>
main(){
	int a, cpt=0, cpt_pair=0, i=1; 

	do{
		printf("Entrer le nombre numero %d: ", i); i++;
		scanf("%d", &a);
		cpt = cpt+1;
		if(a % 2 == 0){
			printf("Le carre  de %d est %d.\n", a, a*a);
			cpt_pair = cpt_pair+1;
		}
	}while(a != 100); // NON(a=100)
	
	printf("Le nombre totale d'entrees est : %d.\n", cpt);
	printf("Le nombre totale d'entrees pair est : %d.\n", cpt_pair);
}


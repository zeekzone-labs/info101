#include<stdio.h>
main(){
	int a, i; 

	for(i = 1; i <= 20 ; i++){
		printf("Entrer le nombre numero %d: ", i);
		scanf("%d", &a);
		if(a % 2 == 0)
			printf("Le carre  de %d est %d.\n", a, a*a);
	}
	
	i = 1;
	do{
		printf("Entrer le nombre numero %d: ", i);
		scanf("%d", &a);
		if(a % 2 == 0)
			printf("Le carre  de %d est %d.\n", a, a*a);
		
		i++;
	}while(i <= 20);
}

/*
Algorithme CarreDesPaires
	variables a, i: Entier
Debut
	Pour i de 1 a 20 Faire
		Lire (a)
		Si (a Mod 2 = 0) Alors
			Ecrire(a*a)
		FinSi
	FinPour
	
	{Avec boucle repeter jusqu'a}
	i <-- 1
	Repeter
		Lire (a)
		Si (a Mod 2 = 0) Alors
			Ecrire(a*a)
		FinSi
		i <-- i + 1
	Jusqu'a (  i > 20 )
	
fin
*/

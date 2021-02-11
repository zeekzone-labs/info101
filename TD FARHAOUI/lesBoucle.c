#include<stdio.h>
main(){
	int i;
	
	for(i = 1; i <= 10; i = i + 1){
		printf("Bonjour tout le monde\n");
	}
	
	printf("Avec while\n");
	
	i = 1;
	while(i<=10){
		printf("Bonjour tout le monde\n");
		i = i + 1;
	}
	
	printf("Avec do...while\n");
	
	/*
	i <-- 1
	Repeter 
		Ecrire("Bonjour tout le monde\n")
		i <-- i + 1
	Jusqu'a(i>10) 
	*/
	
	i = 1;
	do{
		printf("Bonjour tout le monde\n");
		i = i + 1;
	}while(i<=10); // NON(i>10) = i<=10
	
		

}

/*
for(1.initialisation; 2.Test d'arret ; 4.miseAjours){
			3.Actions
}

<=>

1.initialisation;
while(2.Test d'arret){ // TantQue
	3.Actions
	4.miseAjours
}



// for, while, do...while

-------------------->
i = 1;    test                      3.action             MAJ
1         i<= 10   si vrai          affichage          i = i +1
2         i<= 10   si vrai          affichage          i = i +1
3


	i <-- 1;
	Tant Que(i<=10) Faire
		Ecrire("Bonjour tout le monde\n");
		i <-- i + 1;
	FinTQ
	
*/


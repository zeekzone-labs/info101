#include<stdio.h>
main(){
	int i;  
	for(i = 1; i <= 20 ; i = i+1){
		if(i % 3 != 0)
			printf("%2d x %d = %3d\n", i, 7, i * 7);
		
	}
}

/*Algorithme multiplesDe7
	Variable i : Entier
Début
    POUR i de 1 a 20 pas=1 Faire
   		Si(i MOD 3 <> 0) Alors
			Ecrire(i, " x 7 = ", i * 7)
		FinSi
	FinPour
FIN
*/



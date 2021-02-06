#include <stdio.h>
#include <stdlib.h>

int main()
{
   
    float HT , rabais, prixPaye, taxe;
    
    printf(" donner le prix hors taxes ");
	scanf("%f", &HT);
	
	taxe = HT * 0.2;
	printf(" la taxe est : %f\n", taxe);
	
	if ( HT >= 500 )
		rabais = HT * 0.3;
	else if ( 200 <= HT && HT < 500 ) 
		rabais = HT * 0.25;
	else if (100 <=HT  && HT<200) 
		rabais = HT*0.1;
	else
		rabais = HT * 0.0;
		
	/* Autre methode
	if ( HT >= 500 ) rabais = HT * 0.3; 
	if ( 200 <= HT && HT < 500 ) rabais = HT * 0.25;
	if (100 <=HT  && HT<200) rabais = HT*0.1;
	if (HT<100) rabais = HT*0.0;
	*/

	
	prixPaye = HT - rabais + taxe;
	
	printf(" la prix HT est : %f\n", HT);
	printf(" le rabais est : %f\n", rabais );
	printf("le prix ttc a payer par le client est %f:", prixPaye);
    return 0;
}

/*

Algorithme PRIX
	Variables HT , rabais, prixPaye, taxe: réel
Début
	Ecrire(" donner le prix hors taxes ")
	Lire(HT)
	
	taxe <-- HT * 0.2
	Ecrire (" la taxe est : ", taxe)
	
	Si ( HT >= 500 ) alors
		rabais <-- HT * 0.3
	Sinon si ( 200 <= HT ET HT < 500 ) alors
		rabais <-- HT * 0.25
	Sinon si (100 <=HT  ET HT<200) alors
		rabais <-- HT*0.1
	Sinon 
		rabais <-- HT * 0.0
	FinSi
	
	prixPaye <-- HT - rabais + taxe
	
	Ecrire (" la prix HT est : ", HT)
	Ecrire(" le rabais est :", rabais )
	Ecrire("le prix ttc à payer par le client est :", prixPaye)
Fin

*/

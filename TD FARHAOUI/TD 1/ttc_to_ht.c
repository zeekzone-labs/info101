#include<stdio.h>
main(){
    const float TVA = 18.6; // 18.6%
    float ht, ttc; // Prix HT et Prix TTC

    printf("Veuiller saisir le prix toute taxe comprise: ");
    scanf("%f", &ttc);

    ht = ttc / (1+TVA/100);

    printf("%f DH T.T.C. devient %f DH H.T.", ttc, ht);
}

/*
ALGORITHME echange_entre_A_et_B_avec2Variable
    Variables ttc, ht : Reel
    Constante TVA <-- 18,6   * 18,6% pourcent *
DEBUT
    ecrire("Veuiller saisir le prix toute taxe comprise: ")
    lire(ttc)
    
	ht = ttc / (1+TVA/100);
	
	ecrire(ttc, "DH T.T.C. devient", ht, "  DH H.T.");
FIN
*/

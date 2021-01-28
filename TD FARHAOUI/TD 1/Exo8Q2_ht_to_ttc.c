#include<stdio.h>
main(){
    const float TVA = 18.6; // 18.6%
    float ht, ttc, ttc_total; // Prix HT et Prix TTC
    int n;

    printf("Veuiller saisir le prix hors taxe: ");
    scanf("%f", &ht);
    
    printf("Veuiller saisir le nombre d'article: ");
    scanf("%d", &n);

    ttc = ht  * (1+TVA/100);
	ttc_total = ttc * n;
    printf("%f DH H.T. devient %f DH T.T.C.", ht, ttc_total);
}

/*
ALGORITHME echange_entre_A_et_B_avec2Variable
    Variables ttc, ht, ttc_total : Reel
    			n : Entier
    Constante TVA <-- 18,6   { 18,6% pourcent }
DEBUT
    ecrire("Veuiller saisir le prix hors taxe: ")
    lire(ht)
    ecrire("Veuiller saisir le nombre d'article: ")
    lire(n)
    
	ttc = ht * (1+TVA/100);
	ttc_total = ttc * n;
	ecrire(ht, "DH H.T. devient", ttc_total, "  DH T.T.C.");
FIN
*/


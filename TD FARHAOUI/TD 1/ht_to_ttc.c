#include<stdio.h>
main(){
    const float TVA = 18.6; // 18.6%
    float ht, ttc; // Prix HT et Prix TTC
    int n;

    printf("Veuiller saisir le prix hors taxe: ");
    scanf("%f", &ht);
    
    printf("Veuiller saisir le nombre d'article': ");
    scanf("%d", &n);

    ttc = ht  * (1+TVA/100);
	ttc = ttc * n;
    printf("%f DH H.T. devient %f DH T.T.C.", ht, ttc);
}


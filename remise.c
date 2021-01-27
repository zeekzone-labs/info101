#include<stdio.h>

int main()
{
    float montant;
    const float tauxRemise = 0.02;

    printf("Entrez le montant initial: ");
    scanf("%f", &montant);
    /*********************************************************************************/
    if (montant>300) 
        montant = montant - (montant * tauxRemise);
    
    /*********************************************************************************/
    printf("Vous devez payer : %f", montant);

    return 0;
}

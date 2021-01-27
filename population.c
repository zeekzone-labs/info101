#include<stdio.h>
int main() {
    char sexe;
    int age;

    printf("Entrez le sexe (M/F) : ");
    scanf("%c", &sexe);
    printf("Entrez l’age: ");
    scanf("%d", &age);
    /*********************************************************************************/
    if ((sexe == 'M' && age > 20) || ((sexe == 'F') && (age > 18 && age < 35) ))
        printf("Imposable");
    else
        printf("Non Imposable");
    
    return 0;
}

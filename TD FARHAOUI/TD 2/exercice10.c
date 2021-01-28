#include<stdio.h>
main() {
    char sexe;
    int age;

    printf("Entrez le sexe (M: Masculine/F: Feminine)  : ");
    scanf("%c", &sexe);
    printf("Entrez l’age: ");
    scanf("%d", &age);
    /*********************************************************************************/
    if ((sexe == 'M' && age > 20) || ((sexe == 'F') && (age > 18 && age < 35) ))
        printf("Imposable");
    else
        printf("Non Imposable");
}
/*
Algorithme population
	Variables sexe : caractère
	age : entier
Début
	écrire ("Entrez le sexe (M: Masculine/F: Feminine) : ")
	lire (sexe)
	écrire ("Entrez l’age: ")
	lire (age)
	
	si ((sexe = ‘M’ et age > 20) ou ((sexe = ‘F’) et (age > 18 et age < 35) )) alors
		écrire ("Imposable")
	sinon
		écrire ("Non Imposable")
	finsi
Fin
*/

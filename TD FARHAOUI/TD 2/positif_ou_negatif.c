#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	int x;
	
	printf("Saisir un entier x: ");
    scanf("%i", &x);
	
	if(x > 0)
		printf("x est un nombre positif");	
	else
		printf("x est un nombre négatif ou nul");
	
    getch();
}


/*
Algorithme positif_ou_negatif
    Variable x : entier
Début
    Écrire ("Saisir un entier x: ")
    Lire (x)
    
    Si (x > 0) alors
       Écrire ("x est un nombre positif") // (x > 0) est vrai
    Sinon
       Écrire ("x est un nombre négatif ou nul") // (x > 0) est faux
    Finsi
Fin
*/

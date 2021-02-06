#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	int nombre;
	
	printf("Saisir un entier x: ");
    scanf("%i", &nombre); // %d, %i c'est le format des entiers
	
	if(nombre % 2 == 0) // Mod : %
		printf("%i est Pair ", nombre);
	else
		printf("%i est Impair", nombre);
	
    getch();
}

/*
Algorithme Parite
 Variable nombre : entier
Début
    Écrire ("Saisir un entier  ")
    Lire(nombre)
    
    Si (nombre Mod 2 = 0) alors
       	Écrire ( nombre, "est Pair ")
    Sinon
      	Écrire ( nombre, "est Impair")
    Finsi
Fin
*/

#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	float note;
	
	printf("Saisir un entier x: ");
    scanf("%f", &note);
	
	if(note >= 10)
		printf("réussi");
	else
		printf("pas réussi");
	
    getch();
}


/*Algorithme Q6
Variable note : reel
Début
    Écrire ("Saisir une note ")
    Lire (note)
	Si (note >= 10)  alors
	    Écrire ("réussi")
	Sinon
	    Écrire ("pas réussi")
	Finsi
FIN
*/

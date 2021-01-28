#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	float note;
	
	do{// Pour s'assurer que 0 <= note <= 20
		printf("Saisir une note entre 0 et 20: ");
    	scanf("%f", &note);
	}while(note <  0 || note > 20);
	
	
	if(note >= 10)
		printf("reussi");
	else
		printf("pas reussi");
	
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

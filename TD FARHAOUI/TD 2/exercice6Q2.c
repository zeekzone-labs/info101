#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	float note;

	printf("Veuillez saisir VOTRE NOTE:\n");
	scanf("%f", &note);
	
	if(note < 7)
		printf("Non valide\n");
	else if(note < 10)
		printf("Rattrapage\n");
	else if(note < 12)
		printf("Passable\n");
	else if(note < 14)
		printf("Assez bien\n");
	else if(note < 16)
		printf("Bien\n");
	else if(note < 18)
		printf("Tres bien\n");
	else 
		printf("Excellent\n");
    getch();
}


/*
ALGORITHME  quelle mention?
     VARIABLES note: Float
DEBUT
	Ecrire("Veuillez saisir VOTRE NOTE:");
	Lire(note);
	
	Si (note < 7)
		Ecrire("Non valide")
	Sinon Si(note < 10)
		  	Ecrire("Rattrapage")
	      Sinon Si(note < 12)
		        Ecrire("Passable")
		     Sinon Si(note < 14)
		             Ecrire("Assez bien")
	              Sinon Si(note < 16)
		                   Ecrire("Bien")
	                    Sinon Si(note < 18)
					  	        Ecrire("Tres bien")
				              Sinon
				      	        Ecrire("Tres bien avec felicitations")
			                  FinSi
				        FinSi
		          FinSi
	         FinSi
	      FinSi
	FinSi	
FIN
*/

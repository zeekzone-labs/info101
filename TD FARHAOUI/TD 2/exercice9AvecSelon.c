#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main(){ 
	float a,b,d;
	char c;
	printf("Saisir une operation arithmetique (+, -, *, /) : ");
	scanf("%c", &c);
	
	printf("Saisir deux nombres : ");
	scanf("%f%f", &a, &b);
	
	switch(c){
		case '+':
			d = a+b;
			printf("%.2f+%.2f=%.2f.\n", a, b, d);
			break;
	    case '-':
			d = a-b;
			printf("%.2f-%.2f=%.2f.\n", a, b, d);
			break;
		case  '*':
			d = a*b;
			printf("%.2f*%.2f=%.2f.\n", a, b, d);
			break;
		case '/':
			if (b != 0){
				d = a/b;
				printf("%.2f/%.2f=%.2f.\n", a, b, d);
			}else
				printf("Erreur");
			break;
		default: // Sinon
			printf("operation invalide");
	}
    getch();
}

/*
Algorithme Operation
	Variable
	 a, b, d: réel
	 c : caractère
Début
    Écrire ("Saisir deux nombres ")
    Lire (a,b)
    Écrire ("Saisir une opération arithmétique (+, -, *, /) ")
    Lire (c)
    
    Selon (c) Faire
		 Cas ’+’ :
		    d <-- a+b
		    Écrire (a,"+ ",b,"=", d)
		 Cas ’-’  :
	        d <-- a-b
	        Écrire (a,"-",b,"=", d)
	     Cas  ’*’ :
	       d <-- a*b
	       Écrire (a,"*",b,"=", d)
	     Cas ’/’ :
		   Si (b <> 0) alors
	          d <-- a/b
	          Écrire (a, "/",b,"=", d)
	       Sinon
	          Écrire ("Erreur")
	       finsi
     Sinon
    		Écrire ("opération invalide")
	FinSelon
FIN

*/

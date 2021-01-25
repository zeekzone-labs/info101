#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main(){ 
	float a,b,d;
	char c;
	
	
	printf("Saisir une opération arithmétique (+, -, *, /) : ");
	scanf("%c", &c);
	printf("Saisir deux nombres : ");
	scanf("%f%f", &a, &b);
	
	if(c == '+'){
		d = a+b;
		printf("%f+%f=%f.", a, b, d);
	}else if(c == '-'){
		d = a-b;
		printf("%f-%f=%f.", a, b, d);
	}else if(c == '*'){
		d = a*b;
		printf("%f*%f=%f.", a, b, d);
	}else if(c == '/'){
		if (b != 0){
			d = a/b;
			printf("%f/%f=%f.", a, b, d);
		}else
			printf("Erreur");
	}else 
		printf("opération invalide");
		
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
	Si (c = ’+’) alors
	    d <-- a+b
	    Écrire (a,"+ ",b,"=",a+b, d)
	Sinon Si (c = ’-’)  alors
             d <-- a-b
             Écrire (a,"-",b,"=",a-b,d)
          Sinon Si (c=’*’)  alors
                   d <-- a*b
                   Écrire (a,"*",b,"=",a*b,d)
                Sinon Si (c = ’/’ )  alors
             			  Si (b <> 0) alors
                              d <-- a/b
                              Écrire (a, "/",b,"=",a/b,d)
                           Sinon
                              Écrire ("Erreur")
                           finsi
                        Sinon
                           Écrire ("opération invalide")
	                   finsi 
	            finsi 
	      finsi
	Finsi
FIN

*/

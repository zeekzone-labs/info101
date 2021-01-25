#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	int a, b, c, max;
	
	printf("Saisir un entier x: ");
    scanf("%d%d%d", &a, &b, &c);
	
	// avec variable d'aide max
	if(a > b)
		max = a;
	else
		max = b;
		
	if(c > max)
		max = c;
	
	printf("le maximum de %d, %d et de %d est : %d\n", a, b, c, max);
	
	// sans variable d'aide max
	if(a >= b && a >= c) // Et: &&
		printf("le maximum de %d, %d et de %d est : %d\n", a, b, c, a);
	else if (b >= a && b >= c) 
		printf("le maximum de %d, %d et de %d est : %d\n", a, b, c, b);
	else
		printf("le maximum de %d, %d et de %d est : %d\n", a, b, c, c);
	
	// avec operateur ternaire

	max = (a >= b && a >= c) ? a : b;
	/* <=>
	if((a >= b && a >= c))
		max = a;
	else 
		max = b;
	*/	
	max = (b >= max) ? b : max;
	max = (c >= max) ? c : max;
	// max = (a >= b && a >= c) ? a : ((b >= a && b >= c) ? b : c);
	printf("le maximum de %d, %d et de %d est : %d", a, b, c, max);
	
	
    getch();
}


/*
Algorithme Maximum
	Variable a ,b, c, max : Entier
Début
    Écrire ("Saisir deux entiers a, b et c ")
    Lire(a, b, c)
    
    // avec variable d'aide max
    Si (a>b) alors
        max <-- a  
    Sinon
       	max <-- b 
    Finsi
    
    Si (c>max) alors
        max <-- c 
    Finsi
    
    Écrire ("le maximum de " , a," et de ", b, " est : ", max)
    
    // sans variable d'aide max
    Si (a >= b ET a >= c) alors
        Écrire("le maximum de ", a, " ", b, " et de ", c, " est : ", a)
    Sinon 
		  Si (b >= a ET b >= c) alors
       		  Écrire("le maximum de ", a, " ", b, " et de ", c, " est : ", b)
    	  Sinon
    	  	  Écrire("le maximum de ", a, " ", b, " et de ", c, " est : ", c)
    	  Finsi
    Finsi
Fin
*/






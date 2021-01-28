#include<stdio.h>
#include<math.h>
#include<conio.h> // getch()

main()
{ 
	int a, b, temp;
	
	printf("Veuiller saisir la valeur de a et b: ");
    scanf("%d%d", &a, &b);
	
	printf("Avant echange: a= %d b=%d\n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Apres echange: a= %d b=%d", a, b);
	
    getch();
}

/*
ALGORITHME echange_entre_A_et_B_avec2Variable
    Variables a, b : Entier
DEBUT
    ecrire("Veuiller saisir la valeur de a et b: ")
    lire(a, b)
	
	ecrire("Avant echange: a=", a, " b=", b)
	a <-- a + b 
	b <-- a - b
	a <-- a - b
	ecrire("Apres echange: a=", a, " b=", b)
FIN
*/

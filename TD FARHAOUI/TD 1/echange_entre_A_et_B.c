#include<stdio.h>
#include<math.h>
#include<conio.h> // getch()

main()
{ 
	int a, b, temp;
	
	printf("Veuiller saisir la valeur de a et b: ");
    scanf("%d%d", &a, &b);
	
	printf("Avant echange: a= %d b=%d\n", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("Apres echange: a= %d b=%d", a, b);
	
    getch();
}

/*
ALGORITHME echange_entre_A_et_B
    Variables a, b, temp : Entier
DEBUT
    ecrire("Veuiller saisir la valeur de a et b: ")
    lire(a, b)
	
	ecrire("Avant echange: a=", a, " b=", b)
	temp <-- a
	a <-- b
	b <-- temp
	ecrire("Apres echange: a=", a, " b=", b)
FIN
*/

#include<stdio.h>
#include<math.h>
#include<conio.h> // getch()

main()
{ 
	int a, s; // Entier
	
    printf("Veuiller saisir une valeur: ");
    scanf("%d", &a);
	s = a;
	
	printf("Veuiller saisir une valeur: ");
    scanf("%d", &a);
	s = s + a;
	
	printf("Veuiller saisir une valeur: ");
    scanf("%d", &a);
	s = s + a;
	
	printf("Veuiller saisir une valeur: ");
    scanf("%d", &a);
	s = s + a;
	
	printf("Veuiller saisir une valeur: ");
    scanf("%d", &a);
	s = s + a;

    printf("La somme: %d\n", s);
    printf("La moyenne: %f", s/5.0);
    
    getch();
}

/*
ALGORITHME somme_et_moyenne_avec2Variable
    Variables a, s : Entier
DEBUT
    ecrire("Veuiller saisir une valeur: ")
    lire(a)
	s <-- a
	
	ecrire("Veuiller saisir une valeur: ")
    lire(a)
    s <-- s + a
    
    ecrire("Veuiller saisir une valeur: ")
    lire(a)
    s <-- s + a 
    
    ecrire("Veuiller saisir une valeur: ")
    lire(a)
    s <-- s + a 
    
    ecrire("Veuiller saisir une valeur: ")
    lire(a)
    s <-- s + a
	
    ecrire("La somme: ", s)
    ecrire("La moyenne: ", s / 5)
FIN
*/

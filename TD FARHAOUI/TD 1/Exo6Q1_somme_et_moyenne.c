#include<stdio.h>
#include<math.h>
#include<conio.h> // getch()

main()
{ 
	int a, b, c, d, s; // Entier
	float m; // Reel 
    
    printf("Veuiller saisir les valeurs de a, b, c et d: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

	s = a + b + c + d;
	m = s / 4;
	
    printf("La somme: %d\n", s);
    printf("La moyenne: %f", m);
    
    getch();
}

/*
ALGORITHME somme_et_moyenne
    Variables a, b, c, d, s : Entier
    		  m : Reel 
DEBUT
    ecrire("Veuiller saisir les valeurs de a, b, c et d: ")
    lire(a, b, c, d)
	
	s <-- a + b + c + d
	m <-- s / 4
	
    ecrire("La somme: ", s)
    ecrire("La moyenne: ", m)
FIN
*/

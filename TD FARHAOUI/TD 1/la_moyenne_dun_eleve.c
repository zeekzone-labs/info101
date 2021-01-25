#include<stdio.h>
#include<math.h>
#include<conio.h> // getch()

main()
{ 
	float n1, n2, n3, n4, n5; // Reel
	float s, m; // Reel
	
    printf("Veuiller saisir la 1ere note: ");
    scanf("%f", &n1);
	s = n1;
	
	printf("Veuiller saisir la 2eme note: ");
    scanf("%f", &n2);
	s = s + n2;
	
	printf("Veuiller saisir la 3eme note: ");
    scanf("%f", &n3);
	s = s + n3;
	
	printf("Veuiller saisir la 4eme note: ");
    scanf("%f", &n4);
	s = s + n4;
	
	printf("Veuiller saisir la 5eme note: ");
    scanf("%f", &n5);
	s = s + n5;
	
	m = s/5;
    printf("La moyenne: %f", m);
    
    getch();
}

/*
ALGORITHME la_moyenne_dun_eleve
    Variables n1, n2, n3, n4, n5 : Reel
    			s, m : Reel
DEBUT
    ecrire("Veuiller saisir la 1ere note: ")
    lire(n1)
	s <-- n1
	
	ecrire("Veuiller saisir la 2eme note: ")
    lire(n2)
    s <-- s + n2
    
    ecrire("Veuiller saisir la 3eme note: ")
    lire(n3)
    s <-- s + n3 
    
    ecrire("Veuiller saisir la 4eme note: ")
    lire(n4)
    s <-- s + n4
    
    ecrire("Veuiller saisir la 5eme note: ")
    lire(n5)
    
    s <-- s + n5
	m <-- s / 5
	
    ecrire("La moyenne: ", m)
FIN
*/

#include<stdio.h>
#include<math.h>

main()
{
	int nombre, carre;
	
	printf("Veuiller saisir le nombre: ");
    scanf("%d", &nombre);
	
	carre = nombre * nombre;  //  carre = pow(nombre, 2);
	
	printf("Le carre de %d est %d.", nombre, carre);
}
 

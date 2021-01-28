#include<stdio.h>
#include<math.h>
main()
{ 
    const int a = 1, b=2, c=3;
	int x;
    
    printf("Veuiller saisir la valeur x: ");
    scanf("%d",&x);

    printf("f(%d) = %d.", x, a*x*x + b*x + c);
}

/*
ALGORITHME image_de_x_par_f
    Variable x: Entier
    Constante a <-- 1
	Constante b <-- 2 
	Constante c <-- 3  
DEBUT
    ecrire("Veuiller saisir la valeur x: ")
    lire(x)

    ecrire("f(", x, ") = ", a*x*x + b*x + c)
FIN
*/

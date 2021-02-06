#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	float LAR, LONG, H, p, d, total;
	const int frais = 50;

	printf(" donner le poids de colis : ");
	scanf("%f", &p);
	
	printf("Donner la largeur, longueur, hauteur du colis:");
	scanf("%f%f%f", &LAR, &LONG, &H);
	
	printf(" entrer la distance parcourir : ");
	scanf("%f", &d);
	
	total = frais;
	
	if (p>60)
		total = total + 10*(p-60);

	if ( (LAR>1) || (LONG>1) || (H>1) ) 
		total = total + 20;
	
	if (d > 100) 
		total = total + total * 0.1;

	printf("le prix a payer est : %f", total);
	
    getch();
}

/*

Algorithme Frais_Transport
	Variables LAR, LONG, H, p, d, total: réel
	constante frais = 50
Début
	Ecrire(" donner le poids de colis : ")
	Lire(p)
	
	Ecrire ("Donner la largeur, longueur, hauteur du colis:")
	Lire (LAR, LONG, H)
	
	Ecrire (" entrer la distance parcourir : ")
	Lire(d)
	
	total <-- frais
	
	Si (p>60) alors
		total <-- total + 10*(p-60)
	FinSi
	
	Si ( (LAR>1) ou (LONG>1) ou (H>1) ) alors
		total <-- total + 20
	Finsi
	
	Si (d > 100) alors
		total <-- total + total * 0.1
	Finsi
	
	Ecrire("le prix à payer est :", total)
Fin
*/




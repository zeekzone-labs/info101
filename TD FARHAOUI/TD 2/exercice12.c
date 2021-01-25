#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	float prix, remise, prixFin; // prixFin: prix Final

	printf("Veuillez entrer le prix initial :");
	scanf("%f", &prix);

	if (prix > 200) 
		remise = prix * (50./100);
	else if (prix <= 200 && prix >= 100) 
		remise = prix * (40./100);
	else
		remise = prix * (30./100);	

	prixFin = prix - remise;
	
	printf("Prix initial : %.2f DH, Remise : %.2f DH, Prix final : %.2f DH", prix, remise, prixFin);
		
    getch();
}

/*
Algorithme Prix_final_Et_Remise
Variables
		prix, remise, prixFin: réels
	    {prixFin: prix Final} 
Debut
	Ecrire("Veuillez entrer le prix initial :")
	Lire(prix)	

	Si (prix > 200) Alors
			remise <-- prix * (50/100)
	Sinon Si (prix >= 100 et prix <= 200) Alors
				remise <-- prix * (40/100)
		  Sinon
			    remise <-- prix * (30/100)
		  Fin Si
	Fin Si	

	prixFin <-- prix - remise	
	
	Ecrire("Prix initial :", prix," DH, Remise : ", remise, " DH, Prix final : ", prixFin," DH")	
Fin
*/

/*
Algorithme NombreOccurrences
  Variables	tableau abc[26]: Entier
  			i, j: Entier
			tableau ch[40]: Caractere
Debut

	Ecrire("donner votre chaine\n");
	Lire(ch);
	
	// Initialisation des compteur a zero
	Pour i de 0 a 25 par=1 Faire
		abc[i] <-- 0;
	FinPour
	
	// Compter
	Pour j de 0 a TAILE_CHAINE par=1 Faire
		Si( (ch[j]<='z')  ET (ch[j]>='a') )
			i <-- ch[j] -'a';
			abc[i] <-- abc[i] + 1;
		FinSi
	FinPour
	
	// Afficher le resultat
	Ecrire("La chaine ", ch, " contient: ");
	Pour i de 0 a 25 par=1 Faire
		Si(abc[i] <> 0)
	    	Ecrire('a'+ i, " ----> ",  abc[i], " fois \n");
	    FinSi
	FinPour
Fin
*/

#include<stdio.h>

int main(){ 
	int abc[26], i, j;
	char ch[40];
	
	printf("donner votre chaine\n");
	gets(ch);
	
	// Initialisation des compteurs a zero
	for(i=0; i<26; i++)
		abc[i] = 0;
	
	// Compter
	for(j = 0; j<strlen(ch); j++){ 
		if( (ch[j]<='z')  && (ch[j]>='a') ){
			i = ch[j] -'a';
			abc[i] += 1;
		}
	}
	
	// Afficher le resultat
	printf("La chaine \"%s\" contient:\n",ch);
	for(i= 0; i<26; i++)
		if(abc[i] != 0)
	    	printf(" '%c' ----> %d fois\n",'a'+ i, abc[i]);
	return 0;
}

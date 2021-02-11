#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){ 
	char ch[40], *pch;
	int abc[26], *pabc;
	
	printf("donner votre chaine\n");
	gets(ch);
	
	// initialiser abc avec des zeros
	for(pabc=abc; pabc<abc+26; pabc++)
		*pabc=0;
		
	// parcourir la chaine ch
	for(pch = ch; pch < ch + strlen(ch); pch++){ 
		// pour le caractere *pch chercher l'indice
		int i;
		if((*pch<='z') && (*pch>='a')){ // pch ['a', 'z']
			i = (*pch-'a'); 
			*(abc+i) += 1; // abc[i] += 1;
		} 
		if((*pch<='Z') && (*pch>='A')){ // pch ['A', 'Z']
			i = *pch-'A';
			*(abc+i) += 1; // abc[i] += 1;
		}	    
	}
	
	puts(ch);
	printf("La chaine \"%s\" contient:\n",ch);
	for(pabc=abc; pabc<abc+25; pabc++)
		if(*pabc != 0)
	   		printf("%d fois la lettre '%c'\n",*pabc,'A'+(pabc-abc));
}

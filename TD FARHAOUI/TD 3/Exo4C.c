#include <stdio.h>
int main(){
	/* D�clarations */
	char CH[100];
	char CH1[50], CH2[50];
	int I, J, K ;
	int TROUVE;
	
	/* *********************************** Saisie des donn�es **************************************/
	printf("Introduisez la chaine a supprimer : ");
	gets(CH1);
	printf("Introduisez la chaine de remplac. : ");
	gets(CH2);
	printf("Introduisez la chaine a transformer : ");
	gets(CH);
	
	/* ********************************* Recherche de CH1 dans CH *************************/
	TROUVE=0; // faux
	for (I=0; CH[I]!='\0'; I++){
		if (CH[I]==CH1[0]){// 1ere lettre existe � la position I
		
			for (J=1; CH1[J]!='\0' ; J++){
				if(CH1[J]!=CH[I+J])
				break;
			}
			
			if (CH1[J]=='\0') {
				TROUVE=1; // CH1 existe dans CH
				break;
			}
		}
	}
	if (TROUVE==1){
		/* ************************** Copier CH2 dans CH ***************************/
		for (K=0; CH2[K]; K++, I++)
		CH[I]=CH2[K];
	}
	
	
	/************************************** Affichage du r�sultat ************************************/
	printf("Chaine resultante : \"%s\"\n", CH);
return 0;
}

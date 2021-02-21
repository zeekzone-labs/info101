#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*char** extraire(char text[]){
	char tab** = (char**)malloc(100*sizeof(char*));
	// tab parcouru avec j et text parcouru avec i
	char mot[50]; 
	int i, j, k;
	
	for(i=0; i < strlen(text); i++){
		// extraire un mot
		k = 0;
		mot[k] = text[i]; 
		i++; k++;
		while(text[i] != ' ' || text[i] != '\0'){
			mot[k] = text[i]; 
			i++; k++;
		}
		mot[k] = '\0';
		// Ajouter le mot au tab
		tab[j] = (char*)malloc(strlen(mot)*sizeof(char));
		strcpy(tab[j], mot);
		j++;
	}
	return tab;
}
*/
char** extraire(char text[]){
	char **tab = (char**)malloc(100*sizeof(char*));
	// tab parcouru avec j et text parcouru avec i
	char mot[50], **pt; 
	int j=0, k;
	int taillePremier = 0;
	
	for(pt=text; pt < text+strlen(text); pt++){
		// extraire un mot
		k = 0;
		mot[k] = **pt; 
		pt++; k++;
		while(**pt != ' ' || **pt != '\0'){
			mot[k] = **pt; 
			pt++; k++;
		}
		mot[k] = '\0';
		puts(mot);
		if(taillePremier == 0) taillePremier = strlen(mot);
		// Ajouter le mot au tab et respecter la structure +(j*3)
		tab[j] = (char*)malloc((taillePremier+(j*3))*sizeof(char));
		strcpy(tab[j], mot);
		j++;
	}
	return tab;
}

int* calcul(char **tab, int n){
	int *occ=(int*)calloc(26,sizeof(int)),*po;
	char *pt;
  
      	
  for(pt=tab[0]; pt<tab[0]+n; pt++){ 
  	if((*pt<='z')&&(*pt>='a'))
         *(occ+(*pt-'a')) += 1;
      if((*pt<='Z')&&(*pt>='A'))
         occ[(*pt-'A')] += 1;
	}

  return occ;
}

int main(){
	char text[] = "Bonjour tout le monde!";
	char **tab = extraire(text);
	int n = 4;
	int *occ = calcul(tab, n), *po;
	printf("Les occurrences des premiers lettres sont:\n");
    for(po=occ; po<occ+25; po++)
     if(*po != 0)
       printf("%d fois la lettre \'%c\'\n",*po,'A'+(po-occ));
}

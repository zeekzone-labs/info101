#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* delete(char ch[], char s){
	char *resultat = (char*)malloc(strlen(ch)*sizeof(char));
	int i, k = 0;
	
	for (i = 0; ch[i] != '\0' ; i++){
		if( ch[i] != s) {
			resultat[k] = ch[i];
			k++;
		}
	}
	resultat[k] = '\0';
	return resultat;
}



main()
{	
	char ch[] = "Zeekzone" ;
	
	printf("%s\n", delete(ch, 'e'));

}


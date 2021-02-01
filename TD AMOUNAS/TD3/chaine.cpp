# include<stdio.h>
int main(){
	char chaine[30];
	char s[20];
	gets(s) ;/* saisir une chaîne de caractères et la stocker dans s */
	printf("La chaîne de caractères saisie est: %s", s);
	
	scanf("%s", chaine);
	printf("La chaîne de caractères saisie est: %s", chaine);
	
	
	return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char* chaines[5];
	char *p;
	
	int i;
	for(i = 0; i < 5; i++){
		chaines[i] = (char*)malloc(101*sizeof(char));
		
		printf("Saisir une chaine de caracteres : ");
		gets(chaines[i]);
	}
	
	p = (char*)malloc(101*sizeof(char));
	for(i = 0; i < 2; i++){
		strcpy(p, chaines[i]);
		strcpy(chaines[i], chaines[5-i-1]);
		strcpy(chaines[5-i-1], p);
	}
	
	for(i = 0; i < 5; i++){
		printf("%s ", chaines[i]);
	}

}

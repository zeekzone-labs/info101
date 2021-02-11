#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	char* chaines[100];
	char *p;
	int i, n;
	
	printf("Saisir le nombre des phrases : ");
	scanf("%d", &n);
	getchar();
	
	for(i = 0; i < n; i++){
		chaines[i] = (char*)malloc(101*sizeof(char));
		
		printf("Saisir une chaine de caracteres : ");
		gets(chaines[i]); // scanf("%s", chaines[i]);
	}
	
	p = (char*)malloc(101*sizeof(char));
	for(i = 0; i < (int)(n/2); i++){
		strcpy(p, chaines[i]); // p <-- chaines[i]
		strcpy(chaines[i], chaines[5-i-1]); // chaines[i] <-- chaines[5-i-1]
		strcpy(chaines[5-i-1], p); // chaines[5-i-1] <-- p
	}
	
	for(i = 0; i < n; i++){
		printf("%s ", chaines[i]);
	}
}

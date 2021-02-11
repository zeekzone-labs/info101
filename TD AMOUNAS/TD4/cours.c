#include<stdio.h>

main(){
	int a;

	a = 5;
	printf("L'adresse de a &a=%x\n", &a);	
	printf("La valeur de a=%d\n", a);
	
	int *p;
	
	p = &a;
	
	printf("Le contenu de p a=%d\n", *p);	
	printf("La valeur de p=%x\n", p);	
	printf("L'adresse de p &p=%x\n", &p);	
	
	char c = 'A';
	printf("A = %d", c);
}



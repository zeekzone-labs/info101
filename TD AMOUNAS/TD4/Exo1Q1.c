#include<stdio.h>
main(){
	int T[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
	int *P;
	P = T;
	
	printf("a) *P+2 = %d\n", *P+2);
	printf("b) *(P+2) = %d\n", *(P+2));
	printf("c) &T[4]-3 = %d\n", &T[4]-3);
	printf("d) T+3 = %d\n", T+3);
	printf("e) &T[7]-P = %d\n", &T[7]-P);
	printf("f) P+(*P-10) = %d\n", P+(*P-10));
	printf("g) *(P+*(P+8)-T[7]) = %d\n", *(P+*(P+8)-T[7]));
	
	if(&T[0] > P)
		printf("positif");
	else if (&T[0] < P)
			printf("negatif");
	else 
			printf("ZERO");

}

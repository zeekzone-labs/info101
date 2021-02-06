#include<stdio.h>
int main(){
	int n, m;
	float s;
	printf("Donner une valeur pour n");
	scanf("%d", &n);
	printf("Donner une valeur pour s") ;
	scanf("%f", &s) ;
	m = n*s ;
	
	if(m%2 == 0){
		printf("%d est pair", m) ;
	}else{
		printf("%d est impair", m) ;
	}
return 0 ;
}

#include<stdio.h>
#include<limits.h>

#define MAX 100
#define _CHAR_MAX 127

struct person{
	int age;
	char nom[66];
};

int fact (int n)
{

int i , res = 1;
for ( i = 1; i <=n; i = i + 1)
res = res*i ;
return res;

}
//*********************************************************************************************
void affiche_fact (int n){
	int res = fact(n);

	printf (" %d ! = %d\n",n, res);
	return ;
}

main()
{
	int i, notes[3],  n=3, notesS1[3];
	struct person Hassan = { 24, "Zeekzone" };
	
	printf("%d  %s\n", Hassan.age, Hassan.nom);
	
	for (i = 0; i < n; i++){
		printf("Saisir notes[%d] = ", i);
		scanf("%d", &notes[i]);
	}
	
	for (i = 0; i < n; i++){
		if(notes[i] == 16)
			printf("exist\n");
	}
	
	for (i = 0; i < n; i++){
		printf("%d ", notes[i]);
	}
	
}
/*
i     test          Action              mise a jours
6     i>=1  vrai    printf("%d",i);       i--
5     i>=1  vrai    printf("%d",i);       i--
4     i>=1  vrai    printf("%d",i);
3     i>=1  vrai    printf("%d",i);
2     i>=1  vrai    printf("%d",i);
1     i>=1  vrai    printf("%d",i);       i--
0     i>=1  faux    fin
*/

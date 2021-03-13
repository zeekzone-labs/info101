```c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main(){
	/* Tableau statique pour le test
	char t[9][3] = {
					"DR", "TZ", "BQ", "DE", 
					"TL", "BA", "TU", "TG",
					"BF"
					};
	*/
	char **t;
	char tmp[3];
	
	int i, j, min, n;
	
	printf("Donner le nombre de mots: ");
	scanf("%d", &n);
	t = (char**)malloc(n*sizeof(char*));
	for(i=0; i<n; i++){
		t[i] =  (char*)malloc(3*sizeof(char));
		printf("Donner le mots numero %d: ", i+1);
		scanf("%s", t[i]);
	}
	
	
	for(i=0; i<n; i++) printf("%s ", t[i]);
	printf("\n");
	
	// premiere phase (tri selection)
	for(i=0; i<n-1; i++){
		min = i;
		for(j=i+1; j<n; j++){
			if(t[j][0] < t[min][0] )
				min = j;
		}
		
		if(i != min){
			strcpy(tmp, t[i]);
			strcpy(t[i], t[min]);
			strcpy(t[min], tmp);
		}
	}
	
	for(i=0; i<n; i++) printf("%s ", t[i]);
	printf("\n");
	
	// deuxieme phase
	
	for(i=0; i<n-1; i++){
		min = i;
		for(j=i+1; j<n && t[j][0] == t[i][0]; j++){
			if(t[j][1] < t[min][1])
				min = j;
		}
		if(i != min){
			strcpy(tmp, t[i]);
			strcpy(t[i], t[min]);
			strcpy(t[min], tmp);
		}
		
	}
	
	for(i=0; i<n; i++) printf("%s ", t[i]);
}


```

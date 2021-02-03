#include <stdio.h>
main(){
    int T, j, i;
    printf("Saisir la taille: \n");
    scanf("%d",&T); 
    for(i = 1; i <= T ; i++){
    	for(j = 1; j <= T; j++){
    		if(i == 1 || i== T || j == 1 || j== T)
    			printf("*");
    		else if(i == j || j == T-i+1)
    				printf("+");
    		else if(i == T/2 + 1)
    				printf("|");
            else if(j == T/2 + 1)
                    printf("-");
    		else
    			printf(" ");
		}
		printf("\n");
	}

}




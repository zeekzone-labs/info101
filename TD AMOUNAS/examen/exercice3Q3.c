#include<stdio.h>
main(){
    int n, count, tab[10],  i;
    const int c = 1000;
    int repeter = 0; // faux
    
    do{
    	count = 0;
	    i = 0;
	    do{
	        printf("donner une valeur ");
	        scanf("%d",&tab[i]);
	        
	        if(c < tab[i])
	        	printf("Plus grande !\n");
	        else if(c > tab[i])
	        	printf("Plus petite !\n");
	        else 
	        	printf("fin Programme! Felicitations. \n");
	        	
	        n = tab[i];
	        i++;
	        count++;
	    }while(n != c && count < 10);
	    
	    if(n == c)
	    	printf("Vous avez trouve la bonne reponse apres %d eassies\n", count);
	    else
	    	printf("Ooops! Vous avez nombre d'essaies permise (10)\n");
	    
	    printf("Voici les valeurs saisies: \n");
	    for(i=0; i<count; i++)
	    	printf("%d  ", tab[i]);
	    	
    	printf("\n ***************************** \n");
    	printf("Est ce que tu veux reprendre le jeu? (taper 1 si OUI, taper 0 si NON)\n");
    	scanf("%d", &repeter);
	}while(repeter == 1);
}


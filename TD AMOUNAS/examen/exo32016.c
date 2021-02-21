#include<stdio.h>
main(){
    int n, count;
    const int c = 1000;
    
    
    count = 0;
    do{
        printf("donner une valeur ");
        scanf("%d",&n);
        
        if(c < n)
        	printf("Plus grande !\n");
        else if(c > n)
        	printf("Plus petite !\n");
        else 
        	printf("fin Programme! Felicitations. \n");
        
        count++;
    }while(n != c && count < 10);
    
    if(n == c)
    	printf("Vous avez trouve la bonne reponse apres %d eassies", count);
    else
    	printf("Ooops! Vous avez nombre d'essaies permise (10)");
}


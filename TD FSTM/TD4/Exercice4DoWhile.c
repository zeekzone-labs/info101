#include<stdio.h>
main(){
    int n, a, count;
    
    printf("donner une valeur a deviner ");
    scanf("%d",&n);
    
    count = 0;
    do{
        printf("donner une valeur ");
        scanf("%d",&a);
        
        if(a < n)
        	printf("Plus grand !\n");
        else if(a > n)
        	printf("Plus petit !\n");
        
        count++;
    }while(n != a);
    
    printf("fin Programme! Felicitations. Vous avez trouve la bonne reponse apres %d eassies", count);
}

/*
Algorithme Devinette
   Variables  count, a: Entier
   Constant n = 14
Debut

    count <-- 0
    Repeter 
        ecrire("donner une valeur : ")
        lire(a)
        
        if(a < n)
        	printf("Plus grand !\n")
        else if(a > n)
        	printf("Plus petit !\n")
        	
        count <-- count + 1	
    Jusqu'a (n == a)
    
    ecrire("fin Programme! Felicitations. Vous avez la bonne reponse apres ", count, " essaies");
Fin
*/

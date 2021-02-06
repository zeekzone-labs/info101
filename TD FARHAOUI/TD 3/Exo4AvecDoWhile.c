#include<stdio.h>
main(){
    int N;
    
    do{
    	
        printf("donner une valeur ");
        scanf("%d",&N);
        
        if(N < 10)
        	printf("Plus grand !\n");
        else if(N > 20)
        	printf("Plus petit !\n");
        	
    }while(N<10 || N>20);
    
    printf("fin Programme.");
}


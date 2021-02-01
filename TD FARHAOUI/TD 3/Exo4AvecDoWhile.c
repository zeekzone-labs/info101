#include<stdio.h>
main(){
    int N;
    
    do{
        printf("\ndonner une valeur ");
        scanf("%d",&N);
        if(N<10)
          printf("Plus grand !");
        else if(N>20)
         printf("Plus petit !");
    }while(N<10||N>20);
    
    printf("fin Programme");
}


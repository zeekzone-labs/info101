#include<stdio.h>
main(){
    int N;
     
    printf("\ndonner une valeur ");
    scanf("%d",&N);
        
    while(N<10||N>20){
        if(N<10)
          printf("Plus grand !");
        else if(N>20)
         printf("Plus petit !");
         printf("\ndonner une valeur ");
        scanf("%d",&N);
    }
    
    printf("fin Programme");
}


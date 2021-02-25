#include<stdio.h>
#include<string.h>

void afficher(char ch[]);

main(){
	char test[] = "eae lo.ganmx";
	afficher(test);
}

void afficher(char ch[]){
	int i, j, k, n;
	n = strlen(ch);
	j = 0; 
	k = n-1;
	for(i=0; i<n; i++)
		if((i+1)%2 == 1){
			printf("%c", ch[j]);
			j++;
		}else{
			printf("%c", ch[k]);
			k--;
		}
}

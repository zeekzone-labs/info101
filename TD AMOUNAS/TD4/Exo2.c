#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){ 
	char ch[40], *pch;
	int abc[26], *pabc;
	
	printf("donner votre chaine\n");
	gets(ch);
	
	for(pabc=abc; pabc<abc+25; pabc++)
		*pabc=0;
	for(pch=ch; pch<ch+strlen(ch); pch++){ 
		if((*pch<='z') && (*pch>='a'))
		    *(abc+(*pch-'a')) += 1;
		if((*pch<='Z') && (*pch>='A'))
		    abc[(*pch-'A')] += 1;
	}
	
	puts(ch);
	printf("La chaine \"%s\" contient:\n",ch);
	for(pabc=abc; pabc<abc+25; pabc++)
		if(*pabc)
	   		printf("%d fois la lettre \'%c\'\n",*pabc,'A'+(pabc-abc));
}
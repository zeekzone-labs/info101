#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	int a, b;
	a = 1; 
	printf("b = ") ;
	scanf("%d", &b); //(la valeur lue est 12)
	if(a == b)   
		printf("%d\n",a/3);
	else if(a < 2 * b - 1) 
		printf("%d\n", b * 3 * a);
 
	printf("%d",a);
}



#include<stdio.h> // importer printf et scanf
#include<conio.h> // importer getch()

main()
{ 
	int a, b;
	a = 1; 
	b = 3;
	if(a + 2 > b)   
		a = b - 1;
	else 
		b = a + 2;
 
	printf("%d %d",a, b);
}

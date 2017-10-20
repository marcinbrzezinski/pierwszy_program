#include <stdio.h>

int mnoz(int a, int b){
	return a*b;
}


int main()	/* Moze byc zapisane 'int main(void)'	*/
{
	int a = 2, b = 6;
	int wynik;


	wynik = mnoz(a, b);

	printf("Wynik mnozenia: %i\n", wynik);		/* '\n' lamie linie*/

	
	return 0;
}



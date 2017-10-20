#include <stdio.h>

int mnoz(int a, int b){
	return a*b;
}
int dodaj(int a, int b){
	return a + b;
}
int odejmij(int a, int b){
	return a - b;
}
int podziel(int a, int b){
	return a / b;
}


int main()	/* Moze byc zapisane 'int main(void)'	*/
{
	int a = 2, b = 6;		/* deklaracja wraz z inicjacja */
	char wybor;
	printf("Co chcesz zrobic? Dzielic, dodac, mnozyc, czy odjac?");
	
	scanf("%c", &wybor);	/* czytaj z konsoli i zapisz pod wybor */
	/* if(wyrazenie) (blok jesli wyrazenie prawdziwe)
	   else (blok jesli wyrazenie falszywe);	*/

	if(wybor == '*')
		printf("Wynik mnozenia: %i\n", mnoz(a, b));
	else if(wybor == '+')
		 printf("Wynik dodawania: %i\n", dodaj(a, b));

	else if(wybor == '-')
		printf("Wynik odejmowania: %i\n", odejmij(a, b));
	else if(wybor == '/')
		printf("Wynik dzielenia: %i\n", podziel(a, b));
	return 0;
}



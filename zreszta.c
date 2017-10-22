#include <stdio.h>

int mnoz(int a, int b){
	printf("Wynik mnozenia: %i\n", a * b);
	return a * b;
}
int dodaj(int a, int b){
	printf("Wynik dodawania: %i\n", a + b);
	return a + b;
}
int odejmij(int a, int b){
	printf("Wynik odejmowania: %i\n", a - b);
	return a - b;
}
int podziel(int a, int b){
	printf("Wynik dzielenia: %i i reszta %i\n", a / b, a % b);
	return a / b;
}


int main()	/* Moze byc zapisane 'int main(void)'	*/
{


	int a, b;
	char wybor;

	printf("Witaj w kalkulatorze liczb calkowitych!\n");
	printf("Podaj wartosc pierwszego argumentu:"); scanf("%i", &a);
	printf("Co chcesz zrobic? Dzielic, dodac, mnozyc, czy odjac?");
        scanf(" %c", &wybor);    /* czytaj z konsoli i zapisz pod wybor */
        /* if(wyrazenie) (blok jesli wyrazenie prawdziwe)
           else (blok jesli wyrazenie falszywe);        */

	printf("Podaj wartosc drugiego argumentu:"); scanf("%i", &b);

	if(wybor == '*'){
		mnoz(a, b);
	}else if(wybor == '+'){
		dodaj(a, b);
	}else if(wybor == '-'){
		odejmij(a, b);
	}else if(wybor == '/'){
		podziel(a, b);
	}else {
	printf("Nie moge wykonac takiego dzialania!");
	}
	return 0;
}



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
printf("Wynik dzielenia: %i\n", a / b);
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

	if(wybor == '*'){
		mnoz(a, b);
	}else if(wybor == '+'){

	}else if(wybor == '-'){

	}else if(wybor == '/'){

	else
	return 0;
}



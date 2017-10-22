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
int licz(int a, int b, char wybor){
	if(wybor == '*'){
                mnoz(a, b);
        }else if(wybor == '+'){
                dodaj(a, b);
        }else if(wybor == '-'){
                odejmij(a, b);
        }else if(wybor == '/'){
                podziel(a, b);
        }else {
        	puts("Nie moge wykonac takiego dzialania!");
		return 0;
        }
        return 1;




int main()	/* Moze byc zapisane 'int main(void)'	*/
{


	int a, b;
	char wybor;
	int jeszcze_raz = 1;
	

	while(jeszcze_raz == 1);

		printf("Podaj wartosc pierwszego argumentu:"); scanf("%i", &a);
		printf("Co chcesz zrobic? Dzielic, dodac, mnozyc, czy odjac?"); scanf(" %c", &wybor);   
		printf("Podaj wartosc drugiego argumentu:"); scanf("%i", &b);

		licz(a, b, wybor);

		printf("Czy chcesz dalej liczyc? (1 - tak / 0 - nie) ");
		scanf("%d", &jeszcze_raz);
	}
	return 0;
}

#include <stdio.h>

int mnoz(int a, int b){
	return a*b;
}
int dodaj(int a, int b){
	return a + b;
}


int main()	/* Moze byc zapisane 'int main(void)'	*/
{
	int a = 2, b = 6;		/* deklaracja wraz z inicjacja */
	char wybor;
	
	scanf("%c", &wybor);	/* czytaj z konsoli i zapisz pod wybor */
	/* if(wyrazenie) (blok jesli wyrazenie prawdziwe)
	   else (blok jesli wyrazenie falszywe);	*/

	if(wybor == '*'){
		printf("Wynik mnozenia: %i\n", mnoz(a, b));
	}else{
		 printf("Wynik dodawania: %i\n", dodaj(a,b));
	};/* <= ten srednik jest opcjonalny jesli wystepuje klamra*/
	/* 'else' jest opcjonalne*/

	return 0;
}



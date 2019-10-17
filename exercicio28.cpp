/*
Função: calcular a tabuada de 7
Data:16/10/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int m = 0;
	printf("\nTabuda de 7\n");
	for(int p = 0; p<=10; p++){
		m = 7 * p;
		printf("7 X %i = %i\n", p, m);
	}
	return 0;
}

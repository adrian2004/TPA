/*
Função: calcular o fatorial de um número digitado pelo usuário 
Data:16/10/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int m = 0, r = 0;
	printf("digite um número: ");
	scanf("%i", &m);
	printf("\nTabuda de %i\n",m);
	for(int p = 0; p<=10; p++){
		r = m * p;
		printf("%i X %i = %i\n", m, p, r);
	}
	return 0;
}

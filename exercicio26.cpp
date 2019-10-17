/*
Função: calcular tabuada do número digitado pelo usuário 
Data:16/10/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	int m = 0, res = 0, v = 0, c = 0, cc = 0;
	
	printf("digite um número: ");
	scanf("%i", &m);
	cc = m - 2;
	res = m;
	while(cc>=1){
		cc = cc - 1;
		c =  c + 1;
		v = ((m - c) * res);
		res = v;
	}
	printf(" o fatorial de %i é %i", m, res);
	return 0;
}

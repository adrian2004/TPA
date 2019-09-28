/*
Função: Teste3
Autor: Adrian Wilmer Jaquier & Vitor Carvalho Ayala
Data de criação: 25/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num1, num2;
	int quoc, resto;
	printf("insira o primeiro número: ");
	scanf("%i", &num1);
	printf("insira o segundo número: ");
	scanf("%i", &num2);
	quoc = num1 / num2;
	resto = num1 - (quoc * num2);
	printf("O resto é: %i" ,resto);
	return 0;
}

/*
Fun��o: Teste3
Autor: Adrian Wilmer Jaquier & Vitor Carvalho Ayala
Data de cria��o: 25/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num1, num2;
	int quoc, resto;
	printf("insira o primeiro n�mero: ");
	scanf("%i", &num1);
	printf("insira o segundo n�mero: ");
	scanf("%i", &num2);
	quoc = num1 / num2;
	resto = num1 - (quoc * num2);
	printf("O resto �: %i" ,resto);
	return 0;
}

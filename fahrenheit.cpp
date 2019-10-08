/*
Funçao: Converte celsius em fahrenheit
Autor: Adrian Wilmer Jaquier
Data de criaçao: 02/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int grau = 0;
	printf("Insira o valor em graus c: ");
	scanf("%i", &grau);
	grau = (grau * 1.8) + 32;
	printf("%i graus fahrenheit\n", grau);
	system("pause");
}

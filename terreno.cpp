/*
Função: Calcula o preço de um terreno
Autor: Adrian Wilmer Jaquier
Data de criação: 29/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int lado = 0, base = 0, tamanho = 0, preco = 0;
	printf("Informe a base do terreno: ");
	scanf("%i", &base);
	printf("Informe a altura do terreno: ");
	scanf("%i", &lado);
	printf("Informe o preço por m²: ");
	scanf("%i", &preco);
	tamanho = lado * base;
	printf("Tamanho do terreno: %i\n", tamanho);
	preco = tamanho * preco;
	printf("Preço do terreno: %i reais", preco);
}

/*
Fun��o: Calcula o valor de uma presta��o atrasada
Autor: Adrian Wilmer Jaquier
Data da cria��o: 29/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float produto = 0, juros = 0;
	printf("Informe o valor do produto: ");
	scanf("%f", &produto);
	printf("Informe a porcentagem de juros: ");
	scanf("%f", &juros);
	juros = ((juros * produto) / 100) + produto;
	printf("O valor do produto com juros �: %.2f\n", juros);
	system("pause");
}

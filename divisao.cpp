/*
Funçao: calcula a divisao entre dois inteiros 
Autor: Adrian Wilmer Jaquier
Data criaçao: 02/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int dividendo = 0, divisor = 0, cosciente = 0;
	printf("Insira o dividendo: ");
	scanf("%i", &dividendo);
	printf("Insira o divisor: ");
	scanf("%i", &divisor);
	cosciente = dividendo / divisor;
	printf("O cosciente e %i\n", cosciente);
	system("pause");
}

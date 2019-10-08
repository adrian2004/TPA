/*
Função: Quadrado da soma de tres numeros
Autor: Adrian Wilmer Jaquier
Data de inicio: 28/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num1 = 0, num2 = 0, num3 = 0, soma = 0;
	printf("Insira o valor 1: ");
		scanf("%i", &num1);
	printf("Insira o valor 2: ");
		scanf("%i", &num2);
	printf("Insira o valor 3: ");
		scanf("%i", &num3);
	soma = (num1 + num2 + num3) * (num1 + num2 + num3);
	printf("quadrado da soma dos numeros: %i\n", soma);
	system("pause");
}

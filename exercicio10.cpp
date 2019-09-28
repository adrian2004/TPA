/*
Função: Informa se um numero e positivo ou negativo
Autor: Adrian Wilmer Jaquier
Data de criação: 25/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0;
	printf("Informe um número: ");
	scanf("%i", &num);
	if (num >= 0){
		printf("Número Positivo\n");
	}
	else{
		printf("Número Negativo\n");
	}
	system ("pause");
}

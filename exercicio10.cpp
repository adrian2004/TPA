/*
Fun��o: Informa se um numero e positivo ou negativo
Autor: Adrian Wilmer Jaquier
Data de cria��o: 25/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0;
	printf("Informe um n�mero: ");
	scanf("%i", &num);
	if (num >= 0){
		printf("N�mero Positivo\n");
	}
	else{
		printf("N�mero Negativo\n");
	}
	system ("pause");
}

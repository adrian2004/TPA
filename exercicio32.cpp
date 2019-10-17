/*
Função: le 5 numeros e exibe seus quadrados
Data:16/10/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0;
	for(int c=0; c<5; c++){
		printf("insira um numero: ");
			scanf("%i", &num);
		num = num * num;
		printf("quadrado = %i\n", num);
	}
}

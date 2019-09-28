/*
Funçao: Ler um numero, que caso seja maior que 100, recebera 150
Autor: Adrian Wilmer Jaquier
Data de criaçao: 25/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0;
	printf("Digite um valor: ");
	scanf("%i", &num);
	if (num >= 100){
		num = num + 150;
		printf("numero maior que 100, somando 150 resultado = %i\n", num);	
	}
	else if (num < 100){
		printf("numero menor que 100, resultado = %i\n", num);
	}
	system("pause");
}

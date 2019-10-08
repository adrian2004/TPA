/*
Função: mostra maior numero digitado
Data:06/09/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, ""); 
	int num1 = 0, num2 = 0;
	printf("Digite o primeiro numero: ");
	scanf("%i", &num1);
	printf("Digite o segundo numero: ");
	scanf("%i", &num2);
	if(num1 > num2){
		printf("o maior é %i", num1);
	}
	else if(num2 > num1){
		printf("o maior é %i", num2);
	}
	system("pause");
}

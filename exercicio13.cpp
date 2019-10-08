/*
Função: mostra maior numero digitado
Data:06/09/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, ""); 
	int num1 = 0, num2 = 0, num3;
	printf("Digite o primeiro numero: ");
	scanf("%i", &num1);
	printf("Digite o segundo numero: ");
	scanf("%i", &num2);
	printf("Digite o terceiro numero: ");
	scanf("%i", &num3);
	if(num1 > num2 and num2 > num3){
		printf("o maior é %i", num1);
	}
	else if(num2 > num1 and num1 > num3){
		printf("o maior é %i", num2);
	}
	else{
		printf("o maior é %i", num3);
	}
	system("pause");
}

/*
Função: mostra os numeros em ordem crescente
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
		printf("%i, %i, %i", num1, num2, num3);
	}
	else if(num1 > num2 and num3 > num2){
		printf("%i, %i, %i", num1, num3, num2);
	}
	else if(num2 > num1 and num1 > num3){
		printf("%i, %i, %i", num2, num1, num3);
	}
	else if(num2 > num1 and num3 > num1){
		printf("%i, %i, %i", num2, num3, num1);
	}
	else if(num3 > num1 and num2 > num1){
		printf("%i, %i, %i", num3, num2, num1);
	}
	else if(num3 > num1 and num1 > num2){
		printf("%i, %i, %i", num3, num1, num2);
	}
	system("pause");
}

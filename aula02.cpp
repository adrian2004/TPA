/*
Fun��o: Teste2
Autor: Adrian Wilmer Jaquier
Data de cria��o: 25/09/2019
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num1 = 0, num2 = 0, soma = 0;
	printf("informe um n�mero inteiro: ");
	scanf("%i", &num1);
	printf("informe um segundo n�mero inteiro: ");
	scanf("%i", &num2);
	soma = num1 + num2;
	printf("soma = %i + %i = %i\n",num1, num2, soma);
	system("pause");

}

/*
Função: Calcula o aumento no salario de um funcionario
Autor: Adrian Wilmer Jaquier
Data de criação: 29/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");	
	float salario = 0, aumento = 0, valor = 0; int escolha = 0;

	printf("Insira o atual salario: ");
		scanf("%f", &salario);
	printf("Quer inserir um valor para aumentar ou a porcentagem ? (Digite 1 ou 2): ");
		scanf("%i", &escolha);
	if (escolha = 1){
		printf("Insira o valor em $$$ para aumentar: ");
		scanf("%f", &valor);
		valor = valor + salario;
		printf("Novo salario: %.2f\n", valor);
	}	
	else if (escolha = 2){
		printf("Insira o valor em % para aumentar: ");
		scanf("%f", &valor);
		valor = ((valor * salario) / 100) + salario;
		printf("Novo salario: %.2f\n", valor);
	}
	system("pause");
}

/*
Funçao: Calcula IMC de um aluno
Autor: Adrian Wilmer Jaquier
Data de criaçao: 02/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int peso = 0, altura= 0, imc = 0;
	printf("Insira o peso do aluno: ");
	scanf("%i", &peso);
	printf("Insira a altura do aluno (em cm): ");
	scanf("%i", &altura);
	imc = peso / (altura * altura);
	if(imc <= 185){
		printf("Abaixo do peso\n");
	}
	else if(imc > 185 and imc <= 249){
		printf("Peso ideal\n");
	}
	else if(imc >= 250 and imc <= 349){
		printf("Obesidade nivel 1\n");
	}
	else if(imc >= 350 and imc <= 399){
		printf("Obesidade nivel 2\n");
	}
	else{
		printf("Obesidade nivel 3\n");
	}
	system("pause");
}

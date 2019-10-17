/*
Função: le exibe o nome de 5 pessoas
Data:16/10/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	char nome[30];
	for(int c = 0; c < 6; c++){
		printf("insira o nome da %i pessoa: ", c+1);
		scanf("%s", &nome);
		printf("bom dia %s\n", nome);
	}
}

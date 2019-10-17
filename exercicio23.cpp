/*
Função: le e exibe o nome de 50 pessoas
Data:09/10/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	char nome[30];
	int i=0;
	while(i < 50){
		printf("Insira o nome da %i pessoa: ", i+1);
		scanf("%s", nome);
		printf("Bom dia %s\n", nome);
		i++;
	}
}

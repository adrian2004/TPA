/*
Função: mostra qual maior número do dia da semana
Data:9/10/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, ""); 
	int dia ;
	printf("Insira o dia da semana: ");
	scanf("%i", &dia);
	switch(dia){
		case 1:
		printf("Domingo");
		break;
		
		case 2:
		printf("Segunda");
		break;
		
		case 3:
		printf("Terça");
		break;
		
		case 4:
		printf("Quarta");
		break;
		
		case 5:
		printf("Quinta");
		break;
		
		case 6:
		printf("Sexta");
		break;
		
		case 7:
		printf("Sábado");
		break;
		deafault :
		printf("Valor digitado invalido");
	}
	system("pause");
}

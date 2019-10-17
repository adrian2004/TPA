/*
Função: Lê a media de um aluno e diz se ele foi aprovado
Data:07/09/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, ""); 
	float nota = 0;
	printf("Insira a media final do aluno: ");
	scanf("%f", &nota);
	if(nota >= 7 and nota <=10){
		printf("Aluno Aprovado!");
	}
	else if(nota >= 0 and nota < 7){
		printf("Aluno reprovado");
	}
	else{
		printf("Nota invalida");
	}
	system("pause");
}

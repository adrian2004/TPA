/*
Função: Calcula a media de um aluno
Autor: Adrian Wilmer Jaquier
Data de criação: 02/10/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float nota = 0, media = 0;
	int i = 0;
	for(i = 0; i < 4; i++){
		printf("Insira a %i nota do aluno: ", i+1);
		scanf("%f", &nota);
		media = media + nota;
	}
	media = media / 4;
	printf("O aluno teve media %.1f\n", media);
	system("pause");
}


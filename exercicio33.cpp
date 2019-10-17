/*
Função: calcule a media de 5 alunos, considerando quen cada um possui 2 notas
Data:16/10/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float media = 0, nota = 0, nota2 = 0;
	for(int c = 0;c < 5;c++){
		printf("Insira a primeira nota do %i aluno: ", c+1);
		scanf("%f", &nota);
		printf("Insira a segunda nota do %i aluno: ", c+1);
		scanf("%f", &nota2);
		media = media + ((nota + nota2) / 2);
	}
	printf("media = %.1f", media);
}

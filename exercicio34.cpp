/*
Função: le 50 numeros e mostra a soma e a media
Data:16/10/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float media = 0, num = 0, soma = 0;
	for(int c = 0;c < 50;c++){
		printf("Insira o %i valor: ", c+1);
		scanf("%f", &num);
		soma = num + soma;
	}
	printf("a soma dos numeros é %.1f", soma);
	media = soma / 50;
	printf("a media dos numeros é %.1f", media);
}

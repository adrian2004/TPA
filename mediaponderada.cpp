/*
Funçao: media ponderada de quatro notas e quatro pesos
Autor: Adrian Wilmer Jaquier
Data de criaçao: 03/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int i = 0, peso = 0, div = 0;
	float nota = 0, media = 0;
	for(i = 0; i < 4; i++){
		printf("Insira a %i nota: ", i+1);
			scanf("%f", &nota);
		printf("Insira o peso dessa nota: ");
			scanf("%i", &peso);
		div = div + peso;
		media = (peso * nota) + media;
	}
	media = media / div;
	printf("A media final do aluno foi %.1f", media);
}

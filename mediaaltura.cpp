/*
Função: Exibe a media de duas alturas
Autor: Adrian Wilmer Jaquier
Data de criação: 04/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int alt1 = 0, alt2 = 0, media = 0;
	char nome1[20], nome2[20];
	printf("Qual o nome da primeira pessoa e sua altura ?\nNome: ");
	scanf("%s", &nome1);
	printf("Altura(cm): ");
	scanf("%i", &alt1);
	printf("Qual o nome da segunda pessoa e sua altura ?\nNome: ");
	scanf("%s", &nome2);
	printf("Altura(cm): ");
	scanf("%i", &alt2);
	media = (alt1 + alt2) / 2;
	printf("A media entre as alturas de %s e %s é %i\n", nome1, nome2, media);
	system("pause");
}

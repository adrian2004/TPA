/*
Função: Calcula a area de um triangulo
Autor: Adrian Wilmer Jaquier
Data de inicio: 28/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float base = 0, altura = 0, area = 0;
		printf("Insira o valor da base: ");
			scanf("%f", &base);
		printf("Insira o valor da altura: ");
			scanf("%f", &altura);
		area = (base * altura) / 2;
		printf("o valor da area é %f\n", area);
	system("pause");
}

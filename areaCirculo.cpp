/*
Função: Calcula a area de um circulo
Autor: Adrian Wilmer Jaquier
Data de inicio: 28/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float raio = 0, area = 0;
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	area = (raio * raio) * 3.14;
	printf("A area da circunferencia é %f\n", area);
	system("pause");
}

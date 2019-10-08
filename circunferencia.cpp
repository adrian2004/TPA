/*
Função: Exibe o comprimento e o volume de uma esfera
Autor: Adrian Wilmer Jaquier
Data de criação: 06/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int raio = 0;
	float comp = 0, vol = 0;
	printf("Insira o valor do raio da esfera: ");
	scanf("%i", &raio);
	comp = (raio * raio) * 3.14;
	vol = (3/4)*3.14*(raio * raio * raio);
	printf("O comprimento da circunferencia é %.2f e o volume é %.2f\n", comp, vol);
	system("pause");
}

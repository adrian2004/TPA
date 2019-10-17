/*
Função: le 5 numeros e exibe suas metades
Data:16/10/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	float num = 0;
	for(int c=0; c<5; c++){
		printf("insira um numero: ");
			scanf("%f", &num);
		num = num / 2;
		printf("metade = %.1f\n", num);
	}
}

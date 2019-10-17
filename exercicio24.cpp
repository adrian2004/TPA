/*
Função: informa o quadrado de um numero informado pelo usuario
Data:09/10/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 1, quadrado = 0;
	while(num != 0){
		printf("Digite o numero que voce deseja calcular: ");
		scanf("%i", &num);
		quadrado = num * num;
		printf("quadrado: %i\n", quadrado);
	}
	system("pause");
}

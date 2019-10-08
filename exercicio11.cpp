/*
Função: se o numero for entre 5 e 20 mostra o cubo dele
Data:06/09/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, ""); 
	int num = 0;
	printf("Insira um valor, se for entre 5 e 20 exibiremos o cubo: ");
	scanf("%i", &num);
	if(num >= 5 and num <= 20){
		num = num * num * num;
	}
	printf("Resultado = %i", num);
}

/*
Função: le 10 valores e indica quantos sao negativos
Data:16/10/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int val = 0, cont = 0;
	for(int c = 0; c < 10; c++){
		printf("Insira o %i valor: ", c+1);
			scanf("%i", &val);
		if(val < 0){
			cont = cont + 1;
		}
	}
	printf("%i valores sao negativos", cont);
}

/*
Função: le 10 valores e indica o maior
Data:16/10/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int num = 0, comp = 0;
	for(int c = 0; c < 10; c++){
		printf("Insira o %i valor: ", c+1);
			scanf("%i", &num);
		if(num > comp){
			comp = num;
		}
	}
	printf("o maior valor e %i", comp);
}

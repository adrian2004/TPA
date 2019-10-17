/*
Função: mostra se o numero é par ou impar
Data:07/09/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, ""); 
	int num = 0;
	printf("Insira o numero: ");
	scanf("%i", &num);
	if(num % 2 == 0){
		printf("Par\n");
	}
	else{
		printf("Impar\n");
	}
	system("pause");
}

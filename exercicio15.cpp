/*
Função: classifica um nadador por sua idade
Data:07/09/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, ""); 
	int idade = 0;
	printf("Insira a idade do nadador: ");
	scanf("%i", &idade);
	if(idade >= 5 and idade <= 11){
		printf("Nadador classe infantil");
	}
	else if(idade >= 12 and idade <= 17){
		printf("Nadador classe juvenil");
	}
	else if(idade > 18){
		printf("Nadador classe adulta");
	}
	else{
		printf("Nadador muito jovem, ainda nao pode pertencer a uma classe");
	}
}

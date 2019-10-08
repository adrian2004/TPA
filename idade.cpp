/*
Funçao: recebe o ano de nascimento e mostra a idade em anos e dias
Autor: Adrian Wilmer Jaquier
Data de criaçao: 02/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int ano = 0, mes = 0, dia = 0, anod = 0, mesd = 0, diad = 0;
	//user
	printf("Insira seu ano de nascimento: ");
	scanf("%i", &ano);
	printf("Insira seu mes de nascimento: ");
	scanf("%i", &mes);
	printf("Insira seu dia de nascimento: ");
	scanf("%i", &dia);
	//data
	printf("Insira o ano em que estamos: ");
	scanf("%i", &anod);
	printf("Insira o mes em que estamos: ");
	scanf("%i", &mesd);
	printf("Insira o dia em que estamos: ");
	scanf("%i", &diad);
	//calculo
	ano = anod - ano;
	mes = mesd - mes;
	dia = diad - dia;
	//
	mes = mes * 30;
	dia = dia + mes;
	//
	printf("Você esta vivo a %i anos e %i dias", ano, dia);
}

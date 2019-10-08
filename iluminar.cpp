/*
Função: calcula o quanto uma casa gasta para se iluminar
Data:06/09/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, ""); 
	int kw = 0, lado = 0, base = 0;
	//a cada m2 gasta 18kw
	printf("Informe o lado do terreno: ");
	scanf("%i", &lado);
	printf("Informe a base do terreno: ");
	scanf("%i", &base);
	base = base * lado;
	kw = base * 18;
	printf("Sua casa gasta %i kw para se iluminar\n", kw);
	system("pause");
}

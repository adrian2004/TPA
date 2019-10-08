/*
Função: mostra horario em segundos
Data:06/09/2019
Autor: Adrian Wilmer Jaquier
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, ""); 
	int hora = 0, min = 0, seg = 0;
	printf("Insira o valor em horas: ");
	scanf("%i", &hora);
	printf("Insira o valor em minutos: ");
	scanf("%i", &min);
	printf("Insira o valor em segundos: ");
	scanf("%i", &seg);
	hora = hora * 60;
	hora = hora * 60;
	min = min * 60;
	seg = seg + min + hora;
	printf("%i segundos\n", seg);
	system("pause");
}

/*
Função: Sabendo que A= 3, B = 7, C = 4, informe se as expressões são verdadeiras ou falsas
Autor: Adrian Wilmer Jaquier
Data de criação: 26/09/2019
*/

#include <iostream>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int a = 3, b = 7, c = 4;
		printf("A = 3, B = 7, C = 4\n\n");
			printf("(A + C) > B\n");
				if((a + c) > b){
					printf("Verdadeiro\n");
				}
				else{
					printf("Falso\n");
				}
			printf("\nB >= (A+2)\n");
				if(b >= (a + 2)){
					printf("Verdadeiro\n");
				}
				else{
					printf("Falso\n");
				}
			printf("\nC = (B - A)\n");
				if(c = (b - a)){
					printf("Verdadeiro\n");
				}
				else{
					printf("Falso\n");
				}
			printf("\n(B + A) <= C\n");
				if((b + a) <= c){
					printf("Verdadeiro\n");
				}
				else{
					printf("Falso\n");
				}
			printf("\n(C + A) > B\n");
				if((c + a) > b){
					printf("Verdadeiro\n");
				}
				else{
					printf("Falso\n");
				}
system("pause");
}

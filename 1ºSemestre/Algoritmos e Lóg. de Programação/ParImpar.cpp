/*
	Name: ParImpar.cpp
	Author: Mike Bento
	Date: 20/03/25 16:48
	Description: Algoritmo que verifica se o número é par ou impar
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	num = 0;
	
	puts("Algoritmo que verifica se o número é par ou impar");
	printf("Digite um número: ");
	scanf("%d", &num);
	
	if(num % 2 == 0) {
		puts("O número é par");
	} else {
		puts("O número é ímpar");
	}
}

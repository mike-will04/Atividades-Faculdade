/*
	Name: ParImpar.cpp
	Author: Mike Bento
	Date: 20/03/25 16:48
	Description: Algoritmo que verifica se o n�mero � par ou impar
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int num;
	num = 0;
	
	puts("Algoritmo que verifica se o n�mero � par ou impar");
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	
	if(num % 2 == 0) {
		puts("O n�mero � par");
	} else {
		puts("O n�mero � �mpar");
	}
}

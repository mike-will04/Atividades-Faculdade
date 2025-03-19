/*
	Name: MaiorMenor.cpp
	Author: Mike Bento
	Date: 18/03/25 11:24
	Description: Programa que lê dois números inteiros e aponte qual deles é o maior 
*/

#include <stdio.h> //STanDard Input Output  
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int num1, num2;
	num1 = 0;
	num2 = 0;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &num1);
	printf("Digite o segundo numero: ");
	scanf("%d", &num2);
	
	if (num1 > num2)
		printf("O numero maior eh: %d", num1);
	else if (num2>num1) 
		printf("O numero maior eh: %d", num2);
	else 
		printf("Os numeros sao iguais");
}// Fim do programa

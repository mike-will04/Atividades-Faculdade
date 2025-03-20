/*
	Name: MaiorMenorTres.cpp
	Author: Mike Bento
	Date: 19/03/25 19:25
	Description: Algoritmo que lê 3 números e indica qual deles é o maior
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int num1,num2,num3;
	
	num1 = num2 = num3 =0;
	
	puts("Algoritmo que lê 3 números e indica qual deles é o maior");
	printf("Digite o primeiro número: ");
	scanf("%d", &num1);
	printf("Digite o segundo número: ");
	scanf("%d", &num2),
	printf("Digite o terceiro número: ");
	scanf("%d", &num3);
	
	if (num1 > num2)
		printf("O maior número é: %d", num1);
	else if (num2 > num3)
		printf("O maior número é: %d", num2);
	else
		printf("O maior número é: %d", num3);
}

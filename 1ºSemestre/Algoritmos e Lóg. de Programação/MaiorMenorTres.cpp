/*
	Name: MaiorMenorTres.cpp
	Author: Mike Bento
	Date: 19/03/25 19:25
	Description: Algoritmo que l� 3 n�meros e indica qual deles � o maior
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int num1,num2,num3;
	
	num1 = num2 = num3 =0;
	
	puts("Algoritmo que l� 3 n�meros e indica qual deles � o maior");
	printf("Digite o primeiro n�mero: ");
	scanf("%d", &num1);
	printf("Digite o segundo n�mero: ");
	scanf("%d", &num2),
	printf("Digite o terceiro n�mero: ");
	scanf("%d", &num3);
	
	if (num1 > num2)
		printf("O maior n�mero �: %d", num1);
	else if (num2 > num3)
		printf("O maior n�mero �: %d", num2);
	else
		printf("O maior n�mero �: %d", num3);
}

/*
	Name: AreaTriangulo.cpp
	Author: Mike Bento
	Date: 18/03/25 18:47
	Description: Programa que calcula a �rea de um tri�ngulo
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float base, altura, area;
	base = altura = area = 0.0;
	
	puts("Programa que calcula a �rea de um tri�ngulo");
	printf("Digite o valor da base: ");
	scanf("%f", &base);
	printf("Digite o valor da altura: ");
	scanf("%f", &altura);
	
	area = (base * altura) / 2;
	
	printf("A �rea desse tri�ngulo �: %.2f", area);
}

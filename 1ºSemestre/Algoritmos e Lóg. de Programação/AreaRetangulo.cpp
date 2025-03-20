/*
  Name: AreaRetangulo.cpp 
  Author: Mike Bento
  Date: 18/03/25 18:03
  Description: Algoritmo que calcula a �rea de um ret�ngulo
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float largura, comprimento, area;
	largura = comprimento = area = 0.0;
	
	puts("Algoritmo que calcula a �rea de um ret�ngulo");
	printf("Digite o valor do comprimento: ");
	scanf("%f", &comprimento);
	printf("Digite o valor da largura: ");
	scanf("%f", &largura);
	
	area = largura * comprimento;
	
	printf("A �rea do ret�ngulo �: %.2f", area);
}

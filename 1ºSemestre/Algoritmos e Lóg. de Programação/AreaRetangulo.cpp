/*
  Name: AreaRetangulo.cpp 
  Author: Mike Bento
  Date: 18/03/25 18:03
  Description: Algoritmo que calcula a área de um retângulo
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	float largura, comprimento, area;
	largura = comprimento = area = 0.0;
	
	puts("Algoritmo que calcula a área de um retângulo");
	printf("Digite o valor do comprimento: ");
	scanf("%f", &comprimento);
	printf("Digite o valor da largura: ");
	scanf("%f", &largura);
	
	area = largura * comprimento;
	
	printf("A área do retângulo é: %.2f", area);
}

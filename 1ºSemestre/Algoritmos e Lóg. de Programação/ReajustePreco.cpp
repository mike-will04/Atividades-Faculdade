/*
	Name: ReajustePreco.cpp
	Author: Mike Bento
	Date: 18/03/25 19:23
	Description: Programa que faz o resjuste no preço de acordo com o percentual diigitado pelo usuário
*/

#include <stdio.h>
#include <locale.h>

main()
{
	float preco, reajuste, preco_reajustado;
	preco = reajuste = preco_reajustado = 0.0;
	
	puts("Programa que faz o resjuste no preço");
	printf("Digite o valor do produto: ");
	scanf("%f", &preco);
	printf("Digite o valor do reajuste: ");
	scanf("%f", &reajuste);
	
	preco_reajustado = preco * (1 + reajuste / 100);
	
	printf("O valor do produto reajustado ficou : %.2f", preco_reajustado);
}


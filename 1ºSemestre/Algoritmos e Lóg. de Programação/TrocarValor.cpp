/*
	Name: TrocarValor.cpp
	Author: Mike Will
	Date: 20/03/25 16:57
	Description: Algoritmo que guarda um valor em duas váriaveis e depois inverte os valores
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int x, y, xy, yx;
	x = y = xy = yx =0;
	
	puts("Algoritmo que guarda um valor em duas váriaveis e depois inverte os valores");
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	printf("Digite o valor de y: ");
	scanf("%d", &y);
	printf("x: %d \ny: %d", x, y);
	
	xy = y;
	yx = x;
	
	printf("\nNovos Valores:\nx: %d \ny: %d", xy, yx);
}

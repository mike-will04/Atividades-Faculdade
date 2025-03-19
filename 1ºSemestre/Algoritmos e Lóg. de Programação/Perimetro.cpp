/*
	Name: Perimetro
	Author: Mike Bento
	Date: 18/03/25 18:33
	Description: Programa que calcula o perímetro de uma circunferência 
*/

#include <stdio.h>;
#include <locale.h>;

main()
{
	setlocale(LC_ALL,"Portuguese");
	float raio, pi, perimetro;
	raio = perimetro = 0.0;
	pi = 3.1416;
	
	puts("Programa que calcula o perímetro de uma circunferência");
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	
	perimetro = 2 * pi * raio;
	
	printf("O perímetro dessa circunferência é: %.2f", perimetro);
}

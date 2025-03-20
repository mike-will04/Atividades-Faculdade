/*
	Name: MostrarDados
	Author: Mike Bento
	Date: 18/03/25 18:57
	Description: Programa que lê mostra o nome, idade e altura 
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	int idade;
	float altura;
	
	idade = 0;
	altura = 0.0;
	char nome[] = " ";
	
	puts("Programa que lê mostra o nome, idade e altura");
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	printf("O seu nome é %s", nome);
	printf("\nSua idade é: %d", idade);
	printf("\nSua altura é: %.2f", altura);
}

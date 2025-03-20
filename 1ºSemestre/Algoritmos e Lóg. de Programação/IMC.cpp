/*
	Name: IMC.cpp
	Author: Mike Bento
	Date: 19/03/25 20:50
	Description: Programa que classica o IMC de uma pessoa
*/

#include <stdio.h>
#include <locale.h>
#include <string.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float peso, altura, imc;
	char classificacao[] = "";
	
	peso = altura = imc = 0.0;
	
	puts("Programa que classica o IMC de uma pessoa");
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	if() {
		
	}
}

/*
	Name: IMC.cpp
	Author: Mike Bento
	Date: 19/03/25 20:50
	Description: Algoritmo que classifica o IMC de uma pessoa
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float peso, altura, imc;
	
	peso = altura = imc = 0.0;
	
	puts("Algoritmo que classifica o IMC de uma pessoa");
	printf("Digite o seu peso: ");
	scanf("%f", &peso);
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	if (imc < 18.5) {
		puts("Baixo peso");
	} else if (imc >= 18.5 && imc <= 24.9) {
		puts("Peso adequado");
	} else if (imc >= 25 && imc <= 29.9) {
		puts("Sobrepeso");
	} else if (imc >= 30 && imc <= 34.9) {
		puts("Obesidade grau I");
	} else if (imc >= 35 && imc <= 39.9) {
		puts("Obesidade Severa");
	} else {
		puts("Obesidade Mórbida");
	}
}

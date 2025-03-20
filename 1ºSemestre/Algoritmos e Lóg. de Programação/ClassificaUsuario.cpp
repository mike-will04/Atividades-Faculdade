/*
	Name: ClassificaUsuario.cpp
	Author: Mike Will
	Date: 19/03/25 19:38
	Description: Programa que lê sexo, altura e peso, classifica e exibe uma mensagem
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float altura, peso, imc;
	char sexo;
	
	altura = peso = imc = 0.0;
	
	puts("Programa que lê sexo, altura e peso, classifica e exibe uma mensagem");
	printf("Digite o seu sexo (M/F): ");
	scanf("%c", &sexo);
	printf("Digite o sua altura: ");
	scanf("%f", &altura);
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	imc = peso / (altura * altura);
	
	if (sexo == 'M' || sexo == 'm') {
		if (altura < 1.60){
			printf("\nVocê é Homem\nEstatura: Baixo \nIMC: %.2f", imc);
		} else if (altura > 1.75) {
			printf("\nVocê é Homem\nEstatura: Alto \nIMC: %.2f", imc);
		} else {
			printf("\nVocê é Homem\nEstatura: Mediana \nIMC: %.2f", imc);
		}	
	} else if (sexo == 'F' || sexo == 'f') {
		if (altura < 1.50) {
			printf("Você é Muler\nEstatura: Baixo \nIMC: %.2f", imc);
		} else if (altura > 1.65) {
			printf("Você é Muler\nEstatura: Alto \nIMC: %.2f", imc);
		} else {
			printf("Você é Muler\nEstatura: Mediana \nIMC: %.2f", imc);
		}
	}		
}

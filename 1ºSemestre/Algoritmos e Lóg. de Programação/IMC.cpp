/*
	Name: ClassificaUsuario.cpp
	Author: Mike Will
	Date: 19/03/25 19:38
	Description: Programa que l� sexo, altura e peso, classifica e exibe uma mensagem
*/

#include <stdio.h>;
#include <locale.h>;
#include <string.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float altura, peso, imc;
	char sexo;
	char estatura[] = "";
	
	altura = peso = imc = 0.0;
	
	puts("Programa que l� sexo, altura e peso, classifica e exibe uma mensagem");
	printf("Digite o seu sexo (M/F): ");
	scanf("%c", &sexo);
	printf("Digite o sua altura: ");
	scanf("%f", &altura);
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	imc = peso / (altura * altura);
	
	if (sexo == 'M' || sexo == 'm') {
		if (altura < 1.60){
			strcpy(estatura, "Baixo");
			printf("\nVoc� � Homem\nEstatura: %s \nIMC: %.2f", estatura, imc);
		} else if (altura > 1.75) {
			strcpy(estatura, "Alto");
			printf("\nVoc� � Homem\nEstatura: %s \nIMC: %.2f", estatura, imc);
		} else {
			strcpy(estatura, "Mediana");
			printf("\nVoc� � Homem\nEstatura: %s \nIMC: %.2f", estatura, imc);
		}	
	} else if (sexo == 'F' || sexo == 'f') {
		if (altura < 1.50) {
			strcpy(estatura, "Baixo");
			printf("Voc� � Muler\nEstatura: %s \nIMC: %.2f", estatura, imc);
		} else if (altura > 1.65) {
			strcpy(estatura, "Alto");
			printf("Voc� � Muler\nEstatura: %s \nIMC: %.2f", estatura, imc);
		} else {
			strcpy(estatura, "Mediana");
			printf("Voc� � Muler\nEstatura: %s \nIMC: %.2f", estatura, imc);
		}
	}		
}

/*
	Name: MascFem.cpp
	Author: Mike Bento 
	Date: 18/03/25 11:55
	Description: Programa para identificar o sexo do usuario a partir da sua resposta 
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	char sexo;//variável para armazenar uma ínica letra
	sexo = ' ';
	
	printf("Digite o seu sexo (M/F): ");
	scanf("%c", &sexo);
	
	if (sexo == 'M' || sexo == 'm') 
		puts("Voce eh do sexo masculino");
	else if (sexo == 'F' || sexo == 'f')
		puts("Voce eh do sexo feminino");
		else 
			puts("ERRO: Digite novamente seu sexo");
}// Fim do programa

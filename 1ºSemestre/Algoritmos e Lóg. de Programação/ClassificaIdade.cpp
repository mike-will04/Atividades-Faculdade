/*
	Name: ClassificaIdade.cpp
	Author: Mike Bento
	Date: 19/03/25 21:21
	Description: Algoritmo que L� idade do usu�rio e classifica
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	idade = 0;
	
	puts("Algoritmo que L� idade do usu�rio e classifica");
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if (idade <= 2) { 
		puts("Beb�");
	} else if (idade >= 3 && idade <= 10) {
		puts("Crian�a");
	} else if (idade >= 11 && idade <= 19) {
		puts("Adolescente");
	} else if (idade >= 20 && idade <= 65) {
		puts("Adulto");
	} else {
		puts("Idoso");
	}
}

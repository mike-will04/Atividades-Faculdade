/*
	Name: IdadeFilme.cpp
	Author: Mike Bento
	Date: 19/03/25 21:29
	Description: Algoritmo que lê a idade e enquadra na classificação do filme
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	char idade;

	puts("Algoritmo que lê a idade e enquada na classificação do filme");
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if (idade == 'L'){
		idade = 0;
	}
	
	if (idade == 18) {
		puts("Filme Adulto");
	} else if (idade == 16) {
		puts("Filme permitido para pessoas até 16 anos");
	} else if (idade == 14) {
		puts("Classificação para crianças até 14 anos");
	} else if (idade == 12) {
		puts("Permitido para crianças até 12 anos");
	} else if (idade == 10) {
		puts("Poderão assistir a partir dos 10 anos");
	} else if (idade == 0){
		puts("Filme livre para todas as idades");
	} else {
		puts("Classificação não encontrada");
	}
}

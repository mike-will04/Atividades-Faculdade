/*
	Name: IdadeFilme.cpp
	Author: Mike Bento
	Date: 19/03/25 21:29
	Description: Algoritmo que l� a idade e enquadra na classifica��o do filme
*/

#include <stdio.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Portuguese");
	
	char idade;

	puts("Algoritmo que l� a idade e enquada na classifica��o do filme");
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	
	if (idade == 'L'){
		idade = 0;
	}
	
	if (idade == 18) {
		puts("Filme Adulto");
	} else if (idade == 16) {
		puts("Filme permitido para pessoas at� 16 anos");
	} else if (idade == 14) {
		puts("Classifica��o para crian�as at� 14 anos");
	} else if (idade == 12) {
		puts("Permitido para crian�as at� 12 anos");
	} else if (idade == 10) {
		puts("Poder�o assistir a partir dos 10 anos");
	} else if (idade == 0){
		puts("Filme livre para todas as idades");
	} else {
		puts("Classifica��o n�o encontrada");
	}
}

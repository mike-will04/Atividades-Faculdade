/**
*Descrição: Primeiro programa em C para somar 2 números.
*Author: Mike Bento
*Data: Criado em 25 de Fevereiro de 2025
**/
/*
Antes de executar programa ele precisa ser COMPILADO para que o ódigo seja transformado em linguagem de máquina
Todo arquivo digital tem uma extensão (tipo de arquivo) - "nome.estensão"
Os ódigos feitos em linguagem  tema a extensão ".C" / ++ = ".cpp"
Exemplos:
relatorio.doc - Word
planilha.xls - Excel
contrato.pdf - Acrobat
Cliente.java - Ling. Java
*/

#include <stdio.h> //Standard Input Output
int main() //função principal da linguagem C - Tudo começa a partir dela 
{
    //Declaração de variáveis
     int a, b, soma;

     //Inicialização de variáveis
     a = 0; //a Recebe 0
     b = 0;
     soma = 0;
     
     puts("PROGRAMA PARA SOMAR 2 NUMEROS INTEIROS");
     puts("======================================");
     //Função para entrada de dados via teclado
     printf("Digite o valor de A: ");
     scanf("%d",&a);//Ler um número do teclado e armazenar na variável "a" que está na memória
     
     printf("Digite o valor de B: ");
     scanf("%d", &b);
     
     //Realizar a soma
     soma = a + b;
     
     //Exibir o resultado na tela
     puts("=======================================");
     printf("Resultado da soma de %d e %d é: %d", a, b, soma);
     printf("\nfim do programa......................");
    
     return soma;
     
}//fim do programa 
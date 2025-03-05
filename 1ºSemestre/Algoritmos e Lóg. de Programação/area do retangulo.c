/**
*Descrição: Programa que calcula a área de um reÂngulo lendo frente(largura) e fundos (comprimento), mostrando o resultado no final.
*Author: Mike Bento
*Data: Criado em 25 de Fevereiro de 2025
**/

//Bibliotecas
#include <stdio.h>
int main()
{
     float larg, comp, area;
     larg = 0.0;
     comp = 0.0;
     area = 0;
     
     puts("PROGRAMA PARA CALCULAR A AREA DE UM RETANGULO");
     puts("=============================================");
     printf("Largura: ");
     scanf("%f",&larg);
     printf("Comprimento: ");
     scanf("%f", &comp);

     area = larg * comp;//Multiplicamos sempre com asterisco "*"
     
     puts("=============================================");
     printf("Area do retângulo: %3f", area); 
}
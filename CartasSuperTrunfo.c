#include <stdio.h>


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado = 'B';
char codigo[3] = 'A01';
char cidade[20] = 'cubatao';
int habitantes = 112.476;
float area = 142.9;
float pib = 21.946;
int turismo = 7;
  // Área para entrada de dados
printf("Digite a letra do estado: \n");
    scanf("%d", &estado);
    printf("O estado é: %d\n", estado);
  // Área para exibição dos dados da cidade
printf ("Estado:%d\n", estado);
printf ("Código da Carta:%s\n", codigo);
//Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
printf ("cidade:%s\n", cidade);
printf ("população:%d\n", habitantes);
printf ("Área:%.2f km²\n", area);
printf ("PIB: %.2f bilhões de reais\n", pib);
printf ("Número de Pontos Turísticos: %d\n", turismo);
return 0;
} 

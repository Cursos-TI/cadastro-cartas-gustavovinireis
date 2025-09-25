#include <stdio.h>


int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado;
char codigo[3];
char cidade[20];
int habitantes;
float area;
float pib;
int turismo;
  // Área para entrada de dados
  printf("Bem vindo ao  jogo Super Trunfo de Países e Cidades!\n\n");
  printf("Vamos cadastrar a carta 1:\n");
printf("Digite a letra do estado: \n");
    scanf("%c", &estado);
    printf("O estado é: %c\n", estado);
    printf("Digite a letra do estado seguida de um número de 01 a 04:\n");
    scanf("%s", codigo);
    printf("O codigo da carta é: %s\n", codigo);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("A cidade é: %s\n", cidade);
    printf("Digite o número de habitantes:\n");
    scanf("%d", &habitantes);
    printf("A população é: %i\n", habitantes);
    printf("Digite a área em km²:\n");
    scanf("%f", &area);
    printf("A área é: %.2f km²\n", area);
    printf("Digite o PIB em bilhões de reais:\n");
    scanf("%f", &pib);
    printf("O PIB é: %.2f bilhões de reais\n", pib);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turismo);
    printf("O número de pontos turísticos é: %d\n", turismo);
  // Área para exibição dos dados da cidade
printf("carta 1 \n\n");
  printf ("Estado:%c\n", estado);
printf ("Código da Carta:%3s\n", codigo);
printf ("cidade:%s\n", cidade);
printf ("população:%i\n", habitantes);
printf ("Área:%.2f km²\n", area);
printf ("PIB: %.2f bilhões de reais\n", pib);
printf ("Número de Pontos Turísticos: %d\n\n\n", turismo);
return 0;
} 

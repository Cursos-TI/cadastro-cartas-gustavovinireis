#include <stdio.h>
#include <stdlib.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado;
char codigo[4];
char cidade[20];
int habitantes;
float area;
float pib;
int turismo;
  // Área para instruções iniciais
  printf("Bem vindo ao  jogo Super Trunfo de Países e Cidades!\n\n Pressione ENTER para iniciar\n");
  getchar();
  printf("Vamos cadastrar a carta 1! \n\n");
  printf("Para nosso jogo o Brasil será dividido em oito estados, identificados pelas letras de A a H.\n Cada estado terá quatro cidades de sua escolha, numeradas de 1 a 4.\n A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02)\n\n");
 printf("Pressione ENTER para continuar\n");
  getchar();
  printf("serão eles:\n A - Acre\n B - Bahia\n C - Ceará\n D - Rio de Janeiro\n E - Espírito Santo\n F - Pernambuco\n G - Goiás\n H - São Paulo\n\n\n");
  //area para entrada dos dados da primeira carta
  printf("Digite a letra do estado que você escolheu para a primeira carta: \n");
    scanf("%c", &estado);
    printf("O estado é: %c\n", estado);
    printf("Digite a letra do estado seguida de um número de 01 a 04:\n");
    scanf("%s", codigo);
    printf("O codigo da carta é: %s\n", codigo);
    printf("Digite o nome da cidade, para nomes compostos utilize somente o primeiro nome:\n");
    scanf("%s", cidade);
    printf("A cidade é: %s\n", cidade);
    printf("Digite o número de habitantes:\n");
    scanf("%i", &habitantes);
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
  // Área para exibição dos dados da primeira carta
printf("carta 1 \n\n");
  printf ("Estado:%c\n", estado);
printf ("Código da Carta:%3s\n", codigo);
printf ("cidade:%s\n", cidade);
printf ("população:%i\n", habitantes);
printf ("Área:%.2f km²\n", area);
printf ("PIB: %.2f bilhões de reais\n", pib);
printf ("Número de Pontos Turísticos: %d\n\n\n", turismo);
//area para entrada dos dados da segunda carta
  printf("Vamos cadastrar a carta 2! \n\n ");
     printf("Escolha um dos estados:\n A - Acre\n B - Bahia\n C - Ceará\n D - Rio de Janeiro\n E - Espírito Santo\n F - Pernambuco\n G - Goiás\n H - São Paulo\n\n\n");
printf("Digite a letra do estado: \n");
    scanf(" %c", &estado);
    printf("O estado é: %c\n", estado);
    printf("Digite a letra do estado seguida de um número de 01 a 04:\n");
    scanf("%s", codigo);
    printf("O codigo da carta é: %s\n", codigo);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade);
    printf("A cidade é: %s\n", cidade);
    printf("Digite o número de habitantes:\n");
    scanf("%i", &habitantes);
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
  // Área para exibição dos dados da segunda carta
printf("carta 2 \n\n");
  printf ("Estado:%c\n", estado);
printf ("Código da Carta:%3s\n", codigo);
printf ("cidade:%s\n", cidade);
printf ("população:%i\n", habitantes);
printf ("Área:%.2f km²\n", area);
printf ("PIB: %.2f bilhões de reais\n", pib);
printf ("Número de Pontos Turísticos: %d\n\n\n", turismo);

return 0;
} 

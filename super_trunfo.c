#include <stdio.h>
#include <stdlib.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado1;
char codigo1[4];
char cidade1[20];
int habitantes1;
float area1;
float pib1;
int turismo1;

char estado2;
char codigo2[4];
char cidade2[20];
int habitantes2;
float area2;
float pib2;
int turismo2;
  // Área para instruções iniciais
  printf("~~~~~~Bem vindo ao  jogo Super Trunfo de Países e Cidades!~~~~~~\n\n Pressione ENTER para iniciar\n");
  getchar();
  printf("Vamos cadastrar a carta 1! \n\n");
  printf("~~~~~~instruções~~~~~~\n\n Para nosso jogo o Brasil será dividido em oito estados, identificados pelas letras de A a H.\n Cada estado terá quatro cidades de sua escolha, numeradas de 1 a 4.\n A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02)\n\n");
 printf("Pressione ENTER para continuar\n");
  getchar();
  printf("serão eles:\n A - Acre\n B - Bahia\n C - Ceará\n D - Rio de Janeiro\n E - Espírito Santo\n F - Pernambuco\n G - Goiás\n H - São Paulo\n\n\n");
  //area para entrada dos dados da primeira carta
  printf("Digite a letra do estado que você escolheu para a primeira carta: \n");
    scanf("%c", &estado1);
    printf("O estado é: %c\n", estado1);
    printf("Digite a letra do estado seguida de um número de 01 a 04:\n");
    scanf("%s", codigo1);
    printf("O codigo da carta é: %s\n", codigo1);
    printf("Digite o nome da cidade, para nomes compostos utilize somente o primeiro nome:\n");
    scanf("%s", cidade1);
    printf("A cidade é: %s\n", cidade1);
    printf("Digite o número de habitantes:\n");
    scanf("%i", &habitantes1);
    printf("A população é: %i\n", habitantes1);
    printf("Digite a área em km²:\n");
    scanf("%f", &area1);
    printf("A área é: %.2f km²\n", area1);
    printf("Digite o PIB em bilhões de reais:\n");
    scanf("%f", &pib1);
    printf("O PIB é: %.2f bilhões de reais\n", pib1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turismo1);
    printf("O número de pontos turísticos é: %d\n", turismo1);
  // Área para exibição dos dados da primeira carta
printf("carta 1 \n\n");
  printf ("Estado:%c\n", estado1);
printf ("Código da Carta:%3s\n", codigo1);
printf ("cidade:%s\n", cidade1);
printf ("população:%i\n", habitantes1);
printf ("Área:%.2f km²\n", area1);
printf ("PIB: %.2f bilhões de reais\n", pib1);
printf ("Número de Pontos Turísticos: %d\n\n\n", turismo1);
//area para entrada dos dados da segunda carta
  printf("Vamos cadastrar a carta 2! \n\n ");
     printf("Escolha um dos estados:\n A - Acre\n B - Bahia\n C - Ceará\n D - Rio de Janeiro\n E - Espírito Santo\n F - Pernambuco\n G - Goiás\n H - São Paulo\n\n\n");
printf("Digite a letra do estado: \n");
    scanf(" %c", &estado2);
    printf("O estado é: %c\n", estado2);
    printf("Digite a letra do estado seguida de um número de 01 a 04:\n");
    scanf("%s", codigo2);
    printf("O codigo da carta é: %s\n", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    printf("A cidade é: %s\n", cidade2);
    printf("Digite o número de habitantes:\n");
    scanf("%i", &habitantes2);
    printf("A população é: %i\n", habitantes2);
    printf("Digite a área em km²:\n");
    scanf("%f", &area2);
    printf("A área é: %.2f km²\n", area2);
    printf("Digite o PIB em bilhões de reais:\n");
    scanf("%f", &pib2);
    printf("O PIB é: %.2f bilhões de reais\n", pib2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &turismo2);
    printf("O número de pontos turísticos é: %d\n", turismo2);
  // Área para exibição dos dados da segunda carta
printf("carta 2 \n\n");
  printf ("Estado:%c\n", estado2);
printf ("Código da Carta:%3s\n", codigo2);
printf ("cidade:%s\n", cidade2);
printf ("população:%i\n", habitantes2);
printf ("Área:%.2f km²\n", area2);
printf ("PIB: %.2f bilhões de reais\n", pib2);
printf ("Número de Pontos Turísticos: %d\n\n\n", turismo2);
printf("Agora vamos comparar as cartas! \n\n Pressione ENTER para continuar\n");
getchar();
//area para comparação das cartas
printf("carta 1 \n\n");
  printf ("Estado:%c\n", estado1);
printf ("Código da Carta:%3s\n", codigo1);
printf ("cidade:%s\n", cidade1);
printf ("população:%i\n", habitantes1);
printf ("Área:%.2f km²\n", area1);
printf ("PIB: %.2f bilhões de reais\n", pib1);
printf ("Número de Pontos Turísticos: %d\n\n\n", turismo1);

printf("carta 2 \n\n");
  printf ("Estado:%c\n", estado2);
printf ("Código da Carta:%3s\n", codigo2);
printf ("cidade:%s\n", cidade2);
printf ("população:%i\n", habitantes2);
printf ("Área:%.2f km²\n", area2);
printf ("PIB: %.2f bilhões de reais\n", pib2);
printf ("Número de Pontos Turísticos: %d\n\n\n", turismo2);


return 0;
} 

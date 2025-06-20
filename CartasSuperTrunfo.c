#include <stdio.h>

int main(){

/*Para cada carta adicionada ao jogo, suas variaveis devem seguir o padrão:
(nome da variavel + numero sequêncial correspondente ao número da carta)
utilizando a variavel "pib" como exemplo, ficaria:
carta 1, pib1, carta 2, pib2,
carta 3, pib3, ...*/

//O nome das variantes vão de acordo com as propriedades das cartas

//Variáveis da carta 1    
char estado1;
char codigo1[4];
char cidade1[50];
int populacao1;
float area1;
float pib1;
int pontos1;

//Variáveis da carta 2
char estado2;
char codigo2[4];
char cidade2[50];
int populacao2;
float area2;
float pib2;
int pontos2;

//Entrada de Dados da carta 1

printf("Bem-vindo ao cadastro de cartas, preencha os campos a seguir corretamente.");
printf("Digite os dados da carta 1:\n");

printf("Estado (Uma Letra de A a H): ");
scanf(" %c", &estado1);

printf("Código da carta, (Letra do estado + número de 01 a 04, ex: A01): ");
scanf(" %s", codigo1);

printf("Nome da cidade: ");
scanf(" %s", cidade1);

printf("População: ");
scanf("%d", &populacao1);

printf("Área (em Km²): ");
scanf("%f", &area1);

printf("PIB (Em bilhões de reais): ");
scanf("%f", &pib1);

printf("Número de pontos turísticos: ");
scanf("%d", &pontos1);

//Exibição dos dados da carta 1

printf("\nCarta1:\n");
printf("Estado: %c\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f Km²\n", area1);
printf("PIB: %.2f Bilhões de Reais\n", pib1);
printf("Pontos Turísticos: %d\n", pontos1);

//Entrada de Dados da carta 2

printf("\nDigite os dados da carta 2:\n");

printf("Estado (Uma Letra de A a H): ");
scanf(" %c", &estado2);

printf("Código da carta, (Letra do estado + número de 01 a 04, ex: A01): ");
scanf(" %s", codigo2);

printf("Nome da cidade: ");
scanf(" %s", cidade2);

printf("População: ");
scanf("%d", &populacao2);

printf("Área (em Km²): ");
scanf("%f", &area2);

printf("PIB (Em bilhões de reais): ");
scanf("%f", &pib2);

printf("Número de pontos turísticos: ");
scanf("%d", &pontos2);


//Exibição dos dados da carta 2

printf("\nCarta2:\n");
printf("Estado: %c\n", estado2);
printf("Código: %s\n", codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f Km²\n", area2);
printf("PIB: %.2f Bilhões de Reais\n", pib2);
printf("Pontos Turísticos: %d\n", pontos2);

return 0;

}
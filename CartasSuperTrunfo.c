#include <stdio.h>

int main()
{
    // Variáveis da carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // Variáveis da carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // Entrada de Dados da carta 1
    printf("Bem-vindo ao cadastro de cartas, preencha os campos a seguir corretamente.\n");
    printf("Digite os dados da carta 1:\n");
    printf("Estado (Uma Letra de A a H): ");
    scanf(" %c", &estado1);
    printf("Código da carta, (Letra do estado + número de 01 a 04, ex: A01): ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em Km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    // Calculo das propriedades especiais da carta 1
    float densidade1 = (float)populacao1 / area1;
    float percapita1 = (float)pib1 / populacao1;
    float superpoder1 = (float)(populacao1 + area1 + pib1 + pontos1 + percapita1) + (1 / densidade1);

    // Exibição dos dados da carta 1
    printf("\nCarta1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", percapita1);
    printf("Super poder: %.2f\n", superpoder1);

    // Entrada de Dados da carta 2
    printf("\nDigite os dados da carta 2:\n");
    printf("Estado (Uma Letra de A a H): ");
    scanf(" %c", &estado2);
    printf("Código da carta, (Letra do estado + número de 01 a 04, ex: A01): ");
    scanf(" %s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em Km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Calculo das propriedades especiais da carta 2
    float densidade2 = (float)populacao2 / area2;
    float percapita2 = (float)pib2 / populacao2;
    float superpoder2 = (float)(populacao2 + area2 + pib2 + pontos2 + percapita2) + (1 / densidade2);

    // Exibição dos dados da carta 2
    printf("\nCarta2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per capita: %.2f\n", percapita2);
    printf("Super poder: %.2f\n", superpoder2);

    // Sistema de comparação das cartas
    printf("Comparação de  cartas (Atributo Super Poder)\n");
    printf("Carta 1 %s: %.2f\n", cidade1, superpoder1);
    printf("Carta 2 %s: %.2f\n", cidade2, superpoder2);

    if (superpoder1 == superpoder2)
    {
        printf("Resultado: Empate");
    }
    else
    {

        if (superpoder1 > superpoder2)
        {
            printf("Resultado: Carta 1 %s venceu!", cidade1);
        }
        else
        {
            printf("Resultado: Carta 2 %s venceu!", cidade2);
        }
    }
    return 0;
}
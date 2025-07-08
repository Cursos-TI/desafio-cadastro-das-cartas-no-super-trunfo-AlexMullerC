#include <stdio.h>

int main()
{
    int opcao;
    // Variáveis da carta 1
    char estado1 = "C";
    char codigo1 = "C01";
    char cidade1 = "Fortaleza";
    unsigned long int populacao1 = 2686612;
    float area1 = 31314;
    float pib1 = 5810000000;
    int pontos1 = 22;

    // Variáveis da carta 2
    char estado2 = "B";
    char codigo2 = "B02";
    char cidade2 = "Olinda";
    unsigned long int populacao2 = 386605;
    float area2 = 4168;
    float pib2 = 590000000;
    int pontos2 = 15;

    // Calculo das propriedades especiais da carta 1
    float densidade1 = (float)populacao1 / area1;
    float percapita1 = (float)pib1 / populacao1;
    float superpoder1 = (float)(populacao1 + area1 + pib1 + pontos1 + percapita1) + (1 / densidade1);

    // Calculo das propriedades especiais da carta 2
    float densidade2 = (float)populacao2 / area2;
    float percapita2 = (float)pib2 / populacao2;
    float superpoder2 = (float)(populacao2 + area2 + pib2 + pontos2 + percapita2) + (1 / densidade2);

    // Exibição dos dados da carta 1
    printf("\nCarta1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f Km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %f reais\n", percapita1);
    printf("Super poder: %.2f\n", superpoder1);

    // Exibição dos dados da carta 2
    printf("\nCarta2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f Bilhões de Reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per capita: %f\n", percapita2);
    printf("Super poder: %.2f\n", superpoder2);

    // Sistema de comparação das cartas
    printf("\nEscolha qual propriedade das cartas você quer comparar\n");
    printf("Opção 1: População\n"
           "Opção 2: Área em Km/²\n"
           "Opção 3: PIB\n"
           "Opção 4: Pontos Turísticos\n"
           "Opção 5: Densidade Populacional\n"
           "Opção 6: Pib per Capita\n"
           "Opção 7: Super Poder\n"
           "Digite sua escolha: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        if (populacao1 > populacao2)
        {
            printf("\nPopulação de %s: %lu - %s: %lu\n"
                   "Carta 1, %s venceu!",
                   cidade1, populacao1, cidade2, populacao2, cidade1);
        }
        else if (populacao1 < populacao2)
        {
            printf("\nPopulação de %s: %lu - %s: %lu\n"
                   "Carta 2, %s venceu!",
                   cidade1, populacao1, cidade2, populacao2, cidade2);
        }
        else
        {
            printf("\nEmpate, ambas tem uma população de: %lu", populacao1);
        }
        break;
    case 2:
        if (area1 > area2)
        {
            printf("\nÁrea de %s: %.2f - %s: %.2f\n"
                   "Carta 1, %s venceu!",
                   cidade1, area1, cidade2, area2, cidade1);
        }
        else if (area1 < area2)
        {
            printf("\nÁrea de %s: %.2f - %s: %.2f\n"
                   "Carta 2, %s venceu!",
                   cidade1, area1, cidade2, area2, cidade2);
        }
        else
        {
            printf("\nEmpate, ambas tem uma área de: %.2f", area1);
        }
        break;
    case 3:
        if (pib1 > pib2)
        {
            printf("\nPib de %s : %.2f - %s: %.2f\n"
                   "Carta 1, %s venceu!",
                   cidade1, pib1, cidade2, pib2, cidade1);
        }
        else if (pib1 < pib2)
        {
            printf("\nPib de %s : %.2f - %s: %.2f\n"
                   "Carta 2, %s venceu!",
                   cidade1, pib1, cidade2, pib2, cidade2);
        }
        else
        {
            printf("\nEmpate, ambas tem o PIB de: %.2f", pib1);
        }
        break;
    case 4:
        if (pontos1 > pontos2)
        {
            printf("\nPontos Turísticos de %s: %d - %s: %d\n"
                   "Carta 1, %s venceu!",
                   cidade1, pontos1, cidade2, pontos2, cidade1);
        }
        else if (pontos1 < pontos2)
        {
            printf("\nPontos Turísticos de %s: %d - %s: %d\n"
                   "Carta 2, %s venceu!",
                   cidade1, pontos1, cidade2, pontos2, cidade2);
        }
        else
        {
            printf("\nEmpate, ambas tem %d Pontos Turísticos!", pontos1);
        }
        break;
    case 5:
        if (densidade1 < densidade2)
        {
            printf("\nDensidade populacional de %s: %.2f - %s: %.2f\n"
                   "Carta 1, %s venceu!",
                   cidade1, densidade1, cidade2, densidade2, cidade1);
        }
        else if (densidade1 > densidade2)
        {
            printf("\nDensidade populacional de %s: %.2f - %s: %.2f\n"
                   "Carta 2, %s venceu!",
                   cidade1, densidade1, cidade2, densidade2, cidade2);
        }
        else
        {
            printf("\nEmpate, ambas tem densidade populacional de: %.2f", densidade1);
        }
        break;
    case 6:
        if (percapita1 > percapita2)
        {
            printf("\nPib per capita de %s: %.2f - %s: %.2f\n"
                   "Carta 1, %s venceu!",
                   cidade1, percapita1, cidade2, percapita2, cidade1);
        }
        else if (percapita1 < percapita2)
        {
            printf("\nPib per capita de %s: %.2f - %s: %.2f\n"
                   "Carta 2, %s venceu!",
                   cidade1, percapita1, cidade2, percapita2, cidade1);
        }
        else
        {
            printf("\nEmpate, ambas tem %.2f", percapita1);
        }
        break;
    case 7:
        if (superpoder1 > superpoder2)
        {
            printf("\nSuper poder de %s: %.2f - %s: %.2f\n"
                   "Carta 1, %s venceu!",
                   cidade1, superpoder1, cidade2, superpoder2, cidade1);
        }
        else if (superpoder1 < superpoder2)
        {
            printf("\nSuper poder de %s: %.2f - %s: %.2f\n"
                   "Carta 2, %s venceu!",
                   cidade1, superpoder1, cidade2, superpoder2, cidade2);
        }
        else
        {
            printf("\nEmpate, ambas tem %.2f", superpoder1);
        }
        break;

    default:
        printf("\nOpção inválida");
        break;
    }
    return 0;
}
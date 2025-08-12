#include <stdio.h>

int main() {
    char estado1[10], codigo1[10], cidade1[60];
    unsigned long int populacao1;
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1;
    int pontos1;

    char estado2[10], codigo2[10], cidade2[60];
    unsigned long int populacao2;
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;
    int pontos2;

    printf("Digite o Estado: \n");
    scanf("%s", estado1);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: \n");
    getchar(); 
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Digite a Populacao: \n");
    scanf("%lu", &populacao1);

    printf("Digite a Area (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &pontos1);

    densidade_populacional1 = area1 != 0 ? populacao1 / area1 : 0;
    pib_per_capita1 = populacao1 != 0 ? pib1 / populacao1 : 0;
    super_poder1 = (float)populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + (densidade_populacional1 != 0 ? 1 / densidade_populacional1 : 0);

    printf("\nDigite o Estado: \n");
    scanf("%s", estado2);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    getchar(); 
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite a Populacao: \n");
    scanf("%lu", &populacao2);

    printf("Digite a Area (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &pontos2);

    densidade_populacional2 = area2 != 0 ? populacao2 / area2 : 0;
    pib_per_capita2 = populacao2 != 0 ? pib2 / populacao2 : 0;
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + (densidade_populacional2 != 0 ? 1 / densidade_populacional2 : 0);

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    printf("\nComparação de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

    return 0;
}

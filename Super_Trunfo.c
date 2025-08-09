#include <stdio.h>

int main() {
    char estado1[10];
    char codigo1[10];
    char cidade1[60];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    printf("Digite o Estado: \n");
    scanf("%s", estado1);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("Digite a Populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km²): \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &pontos1);
    
   

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
   

    char estado2[10];
    char codigo2[10];
    char cidade2[60];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    printf("\nDigite o Estado: \n");
    scanf("%s", estado2);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a Populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &pontos2);
    
    

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
  

    return 0;
}
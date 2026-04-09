#include <stdio.h>

int main() {
    // =======================================================
    // VARIÁVEIS DA CARTA 1
    // =======================================================
    char estado1;
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    // Novas propriedades calculadas (Nível Aventureiro)
    float densidade1;
    float pib_capita1;

    // =======================================================
    // VARIÁVEIS DA CARTA 2
    // =======================================================
    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    // Novas propriedades calculadas (Nível Aventureiro)
    float densidade2;
    float pib_capita2;

    // =======================================================
    // ENTRADA DE DADOS: CARTA 1
    // =======================================================
    printf("=== CADASTRO DA CARTA 1 ===\n");
    
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1); 
    
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a area em km2: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhoes de reais, ex: 699.28): ");
    scanf("%f", &pib1);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos da Carta 1
    densidade1 = (float) populacao1 / area1;
    // Multiplicamos o PIB por 1 bilhão (1000000000.0) para obter o valor real em reais antes de dividir
    pib_capita1 = (pib1 * 1000000000.0f) / (float) populacao1;

    // =======================================================
    // ENTRADA DE DADOS: CARTA 2
    // =======================================================
    printf("\n=== CADASTRO DA CARTA 2 ===\n");
    
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome2);
    
    printf("Digite a populacao: ");
    scanf("%lu", &populacao2);
    
    printf("Digite a area em km2: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhoes de reais, ex: 300.50): ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da Carta 2
    densidade2 = (float) populacao2 / area2;
    pib_capita2 = (pib2 * 1000000000.0f) / (float) populacao2;

    // =======================================================
    // EXIBIÇÃO DOS DADOS (SAÍDA FORMATADA)
    // =======================================================
    printf("\n=========================================\n");
    
    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_capita1);

    printf("\n-----------------------------------------\n\n");

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_capita2);

    return 0;
}
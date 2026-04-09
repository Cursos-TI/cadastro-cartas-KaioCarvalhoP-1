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
    
    // Novas propriedades calculadas (Nível Aventureiro e Mestre)
    float densidade1;
    float pib_capita1;
    float super_poder1;

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
    
    // Novas propriedades calculadas (Nível Aventureiro e Mestre)
    float densidade2;
    float pib_capita2;
    float super_poder2;

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
    pib_capita1 = (pib1 * 1000000000.0f) / (float) populacao1;
    // Super Poder: soma de todos os atributos numéricos. Note o uso de conversão de tipo (casting) e o inverso da densidade.
    super_poder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + pib_capita1 + (1.0f / densidade1);

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
    // Super Poder: soma de todos os atributos numéricos.
    super_poder2 = (float) populacao2 + area2 + pib2 + (float) pontos_turisticos2 + pib_capita2 + (1.0f / densidade2);

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
    printf("Super Poder: %.2f\n", super_poder1);

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
    printf("Super Poder: %.2f\n", super_poder2);

    // =======================================================
    // COMPARAÇÃO DAS CARTAS (BATALHA SUPER TRUNFO)
    // =======================================================
    printf("\n=========================================\n");
    printf("Comparacao de Cartas:\n");

    // Usando operadores relacionais. O resultado será 1 (verdadeiro, Carta 1 venceu) ou 0 (falso, Carta 2 venceu).
    int vence_populacao = populacao1 > populacao2;
    int vence_area = area1 > area2;
    int vence_pib = pib1 > pib2;
    int vence_pontos = pontos_turisticos1 > pontos_turisticos2;
    int vence_densidade = densidade1 < densidade2; // Atenção: Para densidade, o MENOR valor vence!
    int vence_pib_capita = pib_capita1 > pib_capita2;
    int vence_super = super_poder1 > super_poder2;

    // A expressão (variavel ? 1 : 2) checa se a variável é verdadeira (1). Se for, imprime 1 (Carta 1), senão imprime 2 (Carta 2).
    printf("Populacao: Carta %d venceu (%d)\n", vence_populacao ? 1 : 2, vence_populacao);
    printf("Area: Carta %d venceu (%d)\n", vence_area ? 1 : 2, vence_area);
    printf("PIB: Carta %d venceu (%d)\n", vence_pib ? 1 : 2, vence_pib);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", vence_pontos ? 1 : 2, vence_pontos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", vence_densidade ? 1 : 2, vence_densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", vence_pib_capita ? 1 : 2, vence_pib_capita);
    printf("Super Poder: Carta %d venceu (%d)\n", vence_super ? 1 : 2, vence_super);

    return 0;
}
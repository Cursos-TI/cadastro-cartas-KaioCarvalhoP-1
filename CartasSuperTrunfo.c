#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

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
    float densidade2;
    float pib_capita2;
    float super_poder2;

    // =======================================================
    // ENTRADA DE DADOS: CARTA 1
    // =======================================================
    printf("=== CADASTRO DA CARTA 1 ===\n");
    
    printf("Digite a letra do Estado (A-H): ");
    scanf(" %c", &estado1); // O espaco antes do %c ignora quebras de linha pendentes no buffer
    
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome1); // Lê a string inteira, incluindo espacos (ex: Rio de Janeiro)
    
    printf("Digite a populacao: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a area (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos da Carta 1
    densidade1 = (float)populacao1 / area1;
    pib_capita1 = pib1 / (float)populacao1;
    // O inverso da densidade é usado para que, no Super Poder, a carta com menor densidade saia ganhando
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_capita1 + (1.0f / densidade1);

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
    
    printf("Digite a area (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos da Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_capita2 = pib2 / (float)populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_capita2 + (1.0f / densidade2);

    // =======================================================
    // COMPARAÇÃO DAS CARTAS (NÍVEL MESTRE)
    // =======================================================
    // O desafio pede uso de operadores relacionais. 
    // Em C, um operador relacional (ex: >) retorna 1 se for Verdadeiro e 0 se for Falso.
    
    printf("\n=========================================\n");
    printf("=== RESULTADO DA COMPARACAO DAS CARTAS ===\n");
    printf("=========================================\n");
    printf("Carta 1: %s (%s)\n", nome1, codigo1);
    printf("Carta 2: %s (%s)\n", nome2, codigo2);
    printf("Regra: (1) significa que a Carta 1 venceu, (0) significa que a Carta 2 venceu.\n\n");

    printf("Populacao: %d\n", populacao1 > populacao2);
    printf("Area: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Densidade Populacional (Vence a MENOR): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pib_capita1 > pib_capita2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);   

return 0;
} 

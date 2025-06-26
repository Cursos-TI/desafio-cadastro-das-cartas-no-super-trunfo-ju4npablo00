#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1[50];
    char codigo1[5];
    char cidade1[50];
    int populacao1;
    int pontosTuristicos1;
    float area1;
    float pib1;

    // Dados da Carta 2
    char estado2[50];
    char codigo2[5];
    char cidade2[50];
    int populacao2;
    int pontosTuristicos2;
    float area2;
    float pib2;

    // Entrada da Carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Digite o nome do Estado:\n");
    scanf(" %[^\n]", estado1);

    printf("Digite o Código da Carta (ex: SP01):\n");
    scanf(" %s", codigo1);

    printf("Nome da Cidade:\n");
    scanf(" %[^\n]", cidade1);

    printf("Total de Habitantes:\n");
    scanf("%d", &populacao1);

    printf("Área (em km²):\n");
    scanf("%f", &area1);

    printf("PIB (em bilhões):\n");
    scanf("%f", &pib1);

    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    getchar(); // Limpa o \n pendente

    // Entrada da Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Digite o nome do Estado:\n");
    scanf(" %[^\n]", estado2);

    printf("Digite o Código da Carta (ex: RJ02):\n");
    scanf(" %s", codigo2);

    printf("Nome da Cidade:\n");
    scanf(" %[^\n]", cidade2);

    printf("Total de Habitantes:\n");
    scanf("%d", &populacao2);

    printf("Área (em km²):\n");
    scanf("%f", &area2);

    printf("PIB (em bilhões):\n");
    scanf("%f", &pib2);

    printf("Quantidade de Pontos Turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    // Exibição da Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Habitantes: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    // Exibição da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Habitantes: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

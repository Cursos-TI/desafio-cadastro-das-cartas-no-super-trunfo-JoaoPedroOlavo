#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    char estado, codigo[6], cidade[25]; // Definição das variáveis do tipo char e seus tamanhos
    int populacao, pontos_turisticos; // Definição das variáveis do tipo inteiro
    float area, pib; // Definição de variáveis do tipo flutuante

    //Carta 1
    // Realizando a entrada de dados referente ao Estado, utilizando da letra A até H para representar os 8 estados
    printf("Informe o estado ('A até H'): ");
    scanf("%c", &estado);

    // Realizando a entrada de dados referente ao código da carta, letra seguida de número 1 ao 4
    printf("Informe o código da carta: ");
    scanf("%s", &codigo);

    // Realizando a entrada de dados referente ao nome da cidade
    printf("Informe o nome da cidade: ");
    scanf("%s", &cidade);

    // Realizando a entrada de dados refente ao número de habitantes da cidade
    printf("Informe o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    // Realizando a entrada de dados referente à área da cidade (em km²)
    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area);

    // Realizando a entrada de dados referente ao PIB
    printf("Informe o PIB: ");
    scanf("%f", &pib);

    // Realizando a entrada de dados referente ao número de pontos turisticos
    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Realizando exibição da carta 1
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %fkm² \n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de pontos turisticos: %d \n\n\n", pontos_turisticos);

    //Carta 2
    // Realizando a entrada de dados referente ao Estado, utilizando da letra A até H para representar os 8 estados
    printf("Informe o estado ('A até H'): ");
    scanf("%c", &estado);

    // Realizando a entrada de dados referente ao código da carta, letra seguida de número 1 ao 4
    printf("Informe o código da carta: ");
    scanf("%s", &codigo);

    // Realizando a entrada de dados referente ao nome da cidade
    printf("Informe o nome da cidade: ");
    scanf("%s", &cidade);

    // Realizando a entrada de dados refente ao número de habitantes da cidade
    printf("Informe o número de habitantes da cidade: ");
    scanf("%d", &populacao);

    // Realizando a entrada de dados referente à área da cidade (em km²)
    printf("Informe a área da cidade em km²: ");
    scanf("%f", &area);

    // Realizando a entrada de dados referente ao PIB
    printf("Informe o PIB: ");
    scanf("%f", &pib);

    // Realizando a entrada de dados referente ao número de pontos turisticos
    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Realizando exibição da carta 2
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n", populacao);
    printf("Área: %fkm² \n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de pontos turisticos: %d \n\n\n", pontos_turisticos);


    return 0;
}

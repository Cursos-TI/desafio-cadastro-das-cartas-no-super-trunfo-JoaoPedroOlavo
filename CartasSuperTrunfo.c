#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // Definição de variáveis
    char estadoCarta1, estadoCarta2;
    char codigoCarta1[5], codigoCarta2[5];
    char cidadeCarta1[25], cidadeCarta2[25];
    unsigned int populacaoCarta1, populacaoCarta2;
    unsigned int pontosTuristicosCarta1, pontosTuristicosCarta2;
    float areaCarta1, areaCarta2, densidadeCarta1, densidadeCarta2;
    float pibCarta1, pibCarta2, pibPerCapitaCarta1, pibPerCapitaCarta2;
    float superPoderCarta1, superPoderCarta2;

    //Carta 1
    // Realizando a entrada de dados referente ao Estado, utilizando da letra A até H para representar os 8 estados
    printf("Informe o estado ('A até H'): ");
    scanf("%s", &estadoCarta1);

    // Realizando a entrada de dados referente ao código da carta, letra seguida de número 1 ao 4
    printf("Informe o código da carta: ");
    scanf("%s", &codigoCarta1);

    // Realizando a entrada de dados referente ao nome da cidade
    printf("Informe o nome da cidade: ");
    scanf("%s", &cidadeCarta1);

    // Realizando a entrada de dados refente ao número de habitantes da cidade
    printf("Informe o número de habitantes da cidade: ");
    scanf("%u", &populacaoCarta1);

    // Realizando a entrada de dados referente à área da cidade (em km²)
    printf("Informe a área da cidade em km²: ");
    scanf("%f", &areaCarta1);

    // Realizando a entrada de dados referente ao PIB
    printf("Informe o PIB: ");
    scanf("%f", &pibCarta1);

    // Realizando a entrada de dados referente ao número de pontos turisticos
    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%u", &pontosTuristicosCarta1);

    //Realiza o cálculo da densidade populacional
    densidadeCarta1 = populacaoCarta1 / areaCarta1;

    //Realiza o cálculo do PIB per capita
    pibPerCapitaCarta1 = pibCarta1 / populacaoCarta1;

    // Realizando exibição da carta 1
    printf("Carta 1:\n");
    printf("Estado: %s \n", estadoCarta1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da cidade: %s \n", cidadeCarta1);
    printf("População: %u \n", populacaoCarta1);
    printf("Área: %.2fkm² \n", areaCarta1);
    printf("PIB: %.2f bilhões de reais\n", pibCarta1);
    printf("Número de pontos turisticos: %u \n", pontosTuristicosCarta1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeCarta1);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapitaCarta1);


    //Carta 2
    // Realizando a entrada de dados referente ao Estado, utilizando da letra A até H para representar os 8 estados
    printf("Informe o estado ('A até H'): ");
    scanf("%s", &estadoCarta2);

    // Realizando a entrada de dados referente ao código da carta, letra seguida de número 1 ao 4
    printf("Informe o código da carta: ");
    scanf("%s", &codigoCarta2);

    // Realizando a entrada de dados referente ao nome da cidade
    printf("Informe o nome da cidade: ");
    scanf("%s", &cidadeCarta2);

    // Realizando a entrada de dados refente ao número de habitantes da cidade
    printf("Informe o número de habitantes da cidade: ");
    scanf("%u", &populacaoCarta2);

    // Realizando a entrada de dados referente à área da cidade (em km²)
    printf("Informe a área da cidade em km²: ");
    scanf("%f", &areaCarta2);

    // Realizando a entrada de dados referente ao PIB
    printf("Informe o PIB: ");
    scanf("%f", &pibCarta2);

    // Realizando a entrada de dados referente ao número de pontos turisticos
    printf("Informe a quantidade de pontos turísticos: ");
    scanf("%u", &pontosTuristicosCarta2);

    //Realiza o cálculo da densidade populacional
    densidadeCarta2 = populacaoCarta2 / areaCarta2;

    //Realiza o cálculo do PIB per capita
    pibPerCapitaCarta2 = pibCarta2/ populacaoCarta2;

    // Realizando exibição da carta 2
    printf("Carta 2:\n");
    printf("Estado: %s \n", estadoCarta2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da cidade: %s \n", cidadeCarta2);
    printf("População: %u \n", populacaoCarta2);
    printf("Área: %.2fkm² \n", areaCarta2);
    printf("PIB: %.2f bilhões de reais\n", pibCarta2);
    printf("Número de pontos turisticos: %u \n", pontosTuristicosCarta2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeCarta2);
    printf("PIB per Capita: %.2f reais\n\n", pibPerCapitaCarta2);

    superPoderCarta1 = (float) populacaoCarta1 + areaCarta1 + pibCarta1 + pontosTuristicosCarta1 + pibPerCapitaCarta1 - densidadeCarta1;
    superPoderCarta2 = (float) populacaoCarta2 + areaCarta2 + pibCarta2 + pontosTuristicosCarta2 + pibPerCapitaCarta2 - densidadeCarta2;

    int resultadoPopulacao = populacaoCarta1 > populacaoCarta2;
    int resultadoArea = areaCarta1 > areaCarta2;
    int resultadoPib = pibCarta1 > pibCarta2;
    int resultadoPontosTuristicos = pontosTuristicosCarta1 > pontosTuristicosCarta2;
    int resultadoDensidade = densidadeCarta1 < densidadeCarta2;
    int resultadoPibPerCapita = pibPerCapitaCarta1 > pibPerCapitaCarta2;
    int resultadoSuperPoder = superPoderCarta1 > superPoderCarta2;

    printf("Comparação entre cartas:\n");
    printf("População: Carta (%d) venceu (%d)\n", 1+(1-resultadoPopulacao), resultadoPopulacao);
    printf("Área: Carta (%d) venceu (%d)\n", 1+(1-resultadoArea), resultadoArea);
    printf("PIB: Carta (%d) venceu (%d)\n", 1+(1-resultadoPib), resultadoPib);
    printf("Pontos Turisticos: Carta (%d) venceu (%d)\n", 1+(1-resultadoPontosTuristicos), resultadoPontosTuristicos);
    printf("Densidade populacional: Carta (%d) venceu (%d)\n", 1+(1-resultadoDensidade), resultadoDensidade);
    printf("PIB per Capita: Carta (%d) venceu (%d)\n", 1+(1-resultadoPibPerCapita), resultadoPibPerCapita);
    printf("Super Poder: Carta(%d) venceu (%d)\n", 1+(1-resultadoSuperPoder), resultadoSuperPoder);


    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Lógica do Jogo Super Trunfo

int main() {
    // Variáveis separadas para cada atributo de cada cidade.
    //Carta 1
    char codigo1[5];
    char nome_um[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    char estado1;
    float pibpc1;
    float dp1;
    float superPoder1;
    //Carta 2
    char codigo2[5];
    char nome_dois[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    char estado2;
    float pibpc2;
    float dp2;
    float superPoder2;

    // Cadastro das Cartas:
    // Utilizando a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Carta 1
    printf("Digite a letra do Estado 1: ");
    scanf(" %c", &estado1);

    printf("Digite o código da Carta 1: ");
    scanf("%4s", codigo1);
    
    printf("Digite o nome da cidade 1: ");
    scanf(" %49[^\n]", nome_um);

    printf("Digite o tamanho da população da cidade 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade 1: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade 1: ");
    scanf("%d", &pontos_turisticos1);

    //Carta 2
    printf("Digite a letra do Estado 2: ");
    scanf(" %c", &estado2);

    printf("Digite o código da Carta 2: ");
    scanf("%4s", codigo2);
    
    printf("Digite o nome da cidade 2: ");
    scanf(" %49[^\n]", nome_dois);

    printf("Digite o tamanho da população da cidade 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade 2: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo do PIB per capita e da densidade populacional:
    pibpc1 =  (pib1*1000000000.00)/populacao1;
    dp1 = (float)populacao1/area1;
    
    pibpc2 = (pib2*1000000000.00)/populacao2;
    dp2 = (float)populacao2/area2;

    // Cálculo dos super poderes:

    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pibpc1 + (1/dp1);
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pibpc2 + (1/dp2);

    // Exibição dos Dados das Cartas:
    // Utilizando a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exibindo os valores inseridos para cada atributo da cidade, um por linha.

    //Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", nome_um);
    printf("População: %lu \n", populacao1);
    printf("Área territorial: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d \n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", dp1);
    printf("PIB per Capita: %.2f reais\n", pibpc1);

    //Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", nome_dois);
    printf("População: %lu \n", populacao2);
    printf("Área territorial: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d \n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", dp2);
    printf("PIB per Capita: %.2f reais\n", pibpc2);

    //Comparação das cartas com estruturas de decisão usando o atributo População.

    printf("Comparação das cartas (População):\n");
    printf("Carta 1 - %s: %lu \n", nome_um, populacao1);
    printf("Carta 2 - %s: %lu \n", nome_dois, populacao2);

    if(populacao1>populacao2){
        printf("Resultado: Carta 1 venceu!\n");
    }else{
        printf("Resultado: Carta 2 venceu!\n");
    }


    return 0;
}
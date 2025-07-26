#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo1[5];
    char nome_um[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    char estado1;

    char codigo2[5];
    char nome_dois[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    char estado2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Carta 1
    printf("Digite a letra do Estado 1: ");
    scanf(" %c", &estado1);

    printf("Digite o código da Carta 1: ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade 1: ");
    scanf("%s", nome_um);

    printf("Digite o tamanho da população da cidade 1: ");
    scanf("%d", &populacao1);

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
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade 2: ");
    scanf("%s", nome_dois);

    printf("Digite o tamanho da população da cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade 2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade 2: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Cidade: %s \n", nome_um);
    printf("População: %d \n", populacao1);
    printf("Área territorial: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Pontos turísticos: %d \n", pontos_turisticos1);

    //Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", nome_dois);
    printf("População: %d \n", populacao2);
    printf("Área territorial: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Pontos turísticos: %d \n", pontos_turisticos2);

    return 0;
}
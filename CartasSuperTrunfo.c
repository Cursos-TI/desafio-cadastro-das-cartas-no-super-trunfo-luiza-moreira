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
    /*
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
    printf("Super Poder: %.2f\n", superPoder1);
    */
    //Carta 2
    /*
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
    printf("Super Poder: %.2f\n", superPoder2);
    */
    //Comparação das cartas
/*
    printf("Comparação das cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao1>populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1>area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1>pib2);
    printf("Pontos turísticos: Carta 1 venceu (%d)\n", pontos_turisticos1>pontos_turisticos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", dp1<dp2);
    printf("PIB per capita: Carta 1 venceu (%d)\n", pibpc1>pibpc2);
    printf("Super poder: Carta 1 venceu (%d)\n", superPoder1>superPoder2);

*/
    //Comparação das cartas com estruturas de decisão usando o atributo População.
/*
    printf("Comparação das cartas (População):\n");
    printf("Carta 1 - %s: %lu \n", nome_um, populacao1);
    printf("Carta 2 - %s: %lu \n", nome_dois, populacao2);

    if(populacao1>populacao2){
        printf("Resultado: Carta 1 venceu!\n");
    }else{
        printf("Resultado: Carta 2 venceu!\n");
    }
*/

    // Nível aventureiro tema 2: Usando o switch para criar o menu de escolha do atributo a ser comparado.


    int atributo;
    printf("Escolha o atributo a ser comparado:\n");
    printf("1. População.\n");
    printf("2. Área territorial.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("5. Densidade demográfica.\n");
    printf("6. PIB per capita.\n");
    printf("7. Super poder.\n");
    printf("Escolha: \n");
    scanf("%d", &atributo);

    printf("Cidade 1: %s\n", nome_um);
    printf("Cidade 2: %s\n", nome_dois);
    switch (atributo){
        case 1:
            printf("Atributo escolhido: População.\n");
            printf("População 1: %lu - População 2: %lu\n", populacao1, populacao2);
            if (populacao1>populacao2){
                printf("A carta 1 venceu!\n");
            } else if (populacao2>populacao1){
                printf("A carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 2:
            printf("Atributo escolhido: Área territorial.\n");
            printf("Área 1: %.2f - Área 2: %.2f\n", area1, area2);
            if (area1>area2){
                printf("A carta 1 venceu!\n");
            } else if (area2>area1){
                printf("A carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 3:
            printf("Atributo escolhido: PIB.\n");
            printf("PIB 1: %.2f - PIB 2: %.2f\n", pib1, pib2);
            if (pib1>pib2){
                printf("A carta 1 venceu!\n");
            } else if (pib2>pib1){
                printf("A carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;
        case 4: 
            printf("Atributo escolhido: Pontos turísticos.\n");
            printf("Pontos turísticos 1: %d - Pontos turísticos 2: %d\n", pontos_turisticos1, pontos_turisticos2);
            if (pontos_turisticos1>pontos_turisticos2){
                printf("A carta 1 venceu!\n");
            } else if (pontos_turisticos2>pontos_turisticos1){
                printf("A carta 2 venceu!\n");
            } else {
                printf("Empate!\n");}
            break;
        case 5: 
            printf("Atributo escolhido: Densidade demográfica.\n");
            printf("Densidade 1: %.2f - Densidade 2: %.2f\n", dp1, dp2);
            if (dp1>dp2){
                printf("A carta 2 venceu!\n");
            } else if (dp2>dp1){
                printf("A carta 1 venceu!\n");
            } else {
                printf("Empate!\n");}
            break;
        case 6:
            printf("Atributo escolhido: PIB per capita.\n");
            printf("PIB per capita 1: %.2f - PIB per capita 2: %.2f\n", pibpc1, pibpc2);
            if (pibpc1>pibpc2){
                printf("A carta 1 venceu!\n");
            } else if (pibpc2>pibpc1){
                printf("A carta 2 venceu!\n");
            } else {
                printf("Empate!\n");}
            break;
        case 7:
            printf("Atributo escolhido: Super Poder.\n");
            printf("Área 1: %.2f - Área 2: %.2f\n", superPoder1, superPoder2);
            if (superPoder1>superPoder2){
                printf("A carta 1 venceu!\n");
            } else if (superPoder2>superPoder1){
                printf("A carta 2 venceu!\n");
            } else {
                printf("Empate!\n");}
            break;
        default:
            printf("Opção inválida!\n");
            
    }

    return 0;
}
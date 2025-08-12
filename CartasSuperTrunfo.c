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

    /* Cálculo do PIB per capita e da densidade populacional:
    pibpc1 =  (pib1*1000000000.00)/populacao1;
    dp1 = (float)populacao1/area1;
    
    pibpc2 = (pib2*1000000000.00)/populacao2;
    dp2 = (float)populacao2/area2;
*/
    // Cálculo dos super poderes:

    //superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pibpc1 + (1/dp1);
    //superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pibpc2 + (1/dp2);

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
    //printf("Densidade Populacional: %.2f hab/km²\n", dp1);
    //printf("PIB per Capita: %.2f reais\n", pibpc1);
    //printf("Super Poder: %.2f\n", superPoder1);

    //Carta 2
    
    printf("Carta 2:\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Cidade: %s \n", nome_dois);
    printf("População: %lu \n", populacao2);
    printf("Área territorial: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d \n", pontos_turisticos2);
    //printf("Densidade Populacional: %.2f hab/km²\n", dp2);
    //printf("PIB per Capita: %.2f reais\n", pibpc2);
    //printf("Super Poder: %.2f\n", superPoder2);
    
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

    // Nível mestre tema 2: Usando ferramentas para comparação mais complexa (dois atributos escolhidos pelo usuário).


    int atributo1;
    int atributo2;
    char* resultado;
    float soma1,soma2;

    printf("Escolha o primeiro atributo a ser comparado:\n");
    printf("1. População.\n");
    printf("2. Área territorial.\n");
    printf("3. PIB.\n");
    printf("4. Número de pontos turísticos.\n");
    printf("Escolha: \n");
    scanf("%d", &atributo1);


    // escolha do segundo atributo sem que o primeiro atributo esteja na lista.
    switch (atributo1){
        case 1:
            printf("Escolha o segundo atributo a ser comparado:\n");
            printf("1. Área territorial.\n");
            printf("2. PIB.\n");
            printf("3. Número de pontos turísticos.\n");
            printf("Escolha: \n");
            scanf("%d", &atributo2);
            switch(atributo2){

                case 1:
                    soma1 = (float)populacao1 + area1;
                    soma2 = (float)populacao2 + area2;
                    printf("Cidade 1: %s\n", nome_um);
                    printf("Cidade 2: %s\n", nome_dois);
                    printf("Os atributos escolhidos foram População e Área Territorial.\n");
                    printf("População 1: %lu  -  População 2: %lu\n", populacao1, populacao2);
                    printf("Área territorial 1: %.2f  -  Área Territorial 2: %.2f\n", area1, area2);
                    
                    resultado = soma1>soma2 ? "A carta 1 venceu!": "A carta 2 venceu!";
                    resultado = soma1==soma2 ? "Empate!" : resultado;
                    printf("%s\n", resultado);
                break;

                case 2:
                    soma1 = (float)populacao1 + pib1;
                    soma2 = (float)populacao2 + pib2;
                    printf("Cidade 1: %s\n", nome_um);
                    printf("Cidade 2: %s\n", nome_dois);
                    printf("Os atributos escolhidos foram População e PIB.\n");
                    printf("População 1: %lu  -  População 2: %lu\n", populacao1, populacao2);
                    printf("PIB 1: %.2f  -  PIB 2: %.2f\n", pib1, pib2);

                    resultado = soma1>soma2 ? "A carta 1 venceu!": "A carta 2 venceu!";
                    resultado = soma1==soma2 ? "Empate!" : resultado;
                    printf("%s\n", resultado);
                break;
                case 3:
                    soma1 = (float)populacao1 + pontos_turisticos1;
                    soma2 = (float)populacao2 + pontos_turisticos2;
                    printf("Cidade 1: %s\n", nome_um);
                    printf("Cidade 2: %s\n", nome_dois);
                    printf("Os atributos escolhidos foram População e Pontos Turísticos.\n");
                    printf("População 1: %lu  -  População 2: %lu\n", populacao1, populacao2);
                    printf("Pontos turísticos 1: %d  -  Pontos Turísticos 2: %d\n", pontos_turisticos1, pontos_turisticos2);

                    resultado = soma1>soma2 ? "A carta 1 venceu!": "A carta 2 venceu!";
                    resultado = soma1==soma2 ? "Empate!" : resultado;
                    printf("%s\n", resultado);

                break;
                default:
                    printf("Opção inválida!");
                 }
            break;
        case 2:
            printf("Escolha o segundo atributo a ser comparado:\n");
            printf("1. População.\n");
            printf("2. PIB.\n");
            printf("3. Número de pontos turísticos.\n");
            printf("Escolha: \n");
            scanf("%d", &atributo2);

            switch(atributo2){

                case 1:
                    soma1 = (float)populacao1 + area1;
                    soma2 = (float)populacao2 + area2;
                    printf("Cidade 1: %s\n", nome_um);
                    printf("Cidade 2: %s\n", nome_dois);
                    printf("Os atributos escolhidos foram Área Territorial e População.\n");
                    printf("Área territorial 1: %.2f  -  Área Territorial 2: %.2f\n", area1, area2);
                    printf("População 1: %lu  -  População 2: %lu\n", populacao1, populacao2);
                    
                    resultado = soma1>soma2 ? "A carta 1 venceu!": "A carta 2 venceu!";
                    resultado = soma1==soma2 ? "Empate!" : resultado;
                    printf("%s\n", resultado);
        
                break;
                case 2:
                    soma1 = area1 + pib1;
                    soma2 = area2 + pib2;
                    printf("Cidade 1: %s\n", nome_um);
                    printf("Cidade 2: %s\n", nome_dois);
                    printf("Os atributos escolhidos foram Área Territorial e PIB.\n");
                    printf("Área Territorial 1: %.2f  -  Área Territorial 2: %.2f\n", area1, area2);
                    printf("PIB 1: %.2f  -  PIB 2: %.2f\n", pib1, pib2);

                    resultado = soma1>soma2 ? "A carta 1 venceu!": "A carta 2 venceu!";
                    resultado = soma1==soma2 ? "Empate!" : resultado;
                    printf("%s\n", resultado);
                break;
                case 3:
                    soma1 = area1 + (float)pontos_turisticos1;
                    soma2 = area2 + (float)pontos_turisticos2;
                    printf("Cidade 1: %s\n", nome_um);
                    printf("Cidade 2: %s\n", nome_dois);
                    printf("Os atributos escolhidos foram Área Territorial e Pontos Turísticos.\n");
                    printf("Área Territorial 1: %.2f  -  Área Territorial 2: %.2f\n", area1, area2);
                    printf("Pontos turísticos 1: %d  -  Pontos Turísticos 2: %d\n", pontos_turisticos1, pontos_turisticos2);

                    resultado = soma1>soma2 ? "A carta 1 venceu!": "A carta 2 venceu!";
                    resultado = soma1==soma2 ? "Empate!" : resultado;
                    printf("%s\n", resultado);

                break;
                default:
                    printf("Opção inválida!");
                 }
            break;
        case 3:
            printf("Escolha o segundo atributo a ser comparado:\n");
            printf("1. População.\n");
            printf("2. Área territorial.\n");
            printf("3. Número de pontos turísticos.\n");
            printf("Escolha: \n");
            scanf("%d", &atributo2);

            switch(atributo2){

                case 1:
                    soma1 = (float)populacao1 + pib1;
                    soma2 = (float)populacao2 + pib2;
                    printf("Cidade 1: %s\n", nome_um);
                    printf("Cidade 2: %s\n", nome_dois);
                    printf("Os atributos escolhidos foram PIB e População.\n");
                    printf("PIB 1: %.2f  -  PIB 2: %.2f\n", pib1, pib2);
                    printf("População 1: %lu  -  População 2: %lu\n", populacao1, populacao2);
                    
                    resultado = soma1>soma2 ? "A carta 1 venceu!": "A carta 2 venceu!";
                    resultado = soma1==soma2 ? "Empate!" : resultado;
                    printf("%s\n", resultado);
        
                break;
                case 2:
                    soma1 = area1 + pib1;
                    soma2 = area2 + pib2;
                    printf("Cidade 1: %s\n", nome_um);
                    printf("Cidade 2: %s\n", nome_dois);
                    printf("Os atributos escolhidos foram PIB e Área Territorial.\n");
                    printf("PIB 1: %.2f  -  PIB 2: %.2f\n", pib1, pib2);
                    printf("Área Territorial 1: %.2f  -  Área Territorial 2: %.2f\n", area1, area2);

                    resultado = soma1>soma2 ? "A carta 1 venceu!": "A carta 2 venceu!";
                    resultado = soma1==soma2 ? "Empate!" : resultado;
                    printf("%s\n", resultado);
                break;
                case 3:
                    soma1 = pib1 + (float)pontos_turisticos1;
                    soma2 = pib2 + (float)pontos_turisticos2;
                    printf("Cidade 1: %s\n", nome_um);
                    printf("Cidade 2: %s\n", nome_dois);
                    printf("Os atributos escolhidos foram PIB e Pontos Turísticos.\n");
                    printf("PIB 1: %.2f  -  PIB 2: %.2f\n", pib1, pib2);
                    printf("Pontos turísticos 1: %d  -  Pontos Turísticos 2: %d\n", pontos_turisticos1, pontos_turisticos2);

                    resultado = soma1>soma2 ? "A carta 1 venceu!": "A carta 2 venceu!";
                    resultado = soma1==soma2 ? "Empate!" : resultado;
                    printf("%s\n", resultado);

                break;
                default:
                    printf("Opção inválida!");
                 }

            break;

        case 4: 
            printf("Escolha o segundo atributo a ser comparado:\n");
            printf("1. População.\n");
            printf("2. Área territorial.\n");
            printf("3. PIB.\n");
            printf("Escolha: \n");
            scanf("%d", &atributo2);
            switch(atributo2){

                case 1:
                    soma1 = pontos_turisticos1 + populacao1;
                    soma2 = pontos_turisticos2 + populacao2;
                    printf("Cidade 1: %s\n", nome_um);
                    printf("Cidade 2: %s\n", nome_dois);
                    printf("Os atributos escolhidos foram Pontos Turísticos e População.\n");
                    printf("Pontos Turísticos 1: %d  -  Pontos Turísticos 2: %d\n", pontos_turisticos1, pontos_turisticos2);
                    printf("População 1: %lu  -  População 2: %lu\n", populacao1, populacao2);
                    
                    resultado = soma1>soma2 ? "A carta 1 venceu!": "A carta 2 venceu!";
                    resultado = soma1==soma2 ? "Empate!" : resultado;
                    printf("%s\n", resultado);
        
                break;
                case 2:
                    soma1 = area1 + (float)pontos_turisticos1;
                    soma2 = area2 + (float)pontos_turisticos2;
                    printf("Cidade 1: %s\n", nome_um);
                    printf("Cidade 2: %s\n", nome_dois);
                    printf("Os atributos escolhidos foram Pontos Turísticos e Área Territorial.\n");
                    printf("Pontos Turísticos 1: %d  -  Pontos Turísticos 2: %d\n", pontos_turisticos1, pontos_turisticos2);
                    printf("Área Territorial 1: %.2f  -  Área Territorial 2: %.2f\n", area1, area2);

                    resultado = soma1>soma2 ? "A carta 1 venceu!": "A carta 2 venceu!";
                    resultado = soma1==soma2 ? "Empate!" : resultado;
                    printf("%s\n", resultado);
                break;
                case 3:
                    soma1 = pib1 + pontos_turisticos1;
                    soma2 = pib2 + pontos_turisticos2;
                    printf("Cidade 1: %s\n", nome_um);
                    printf("Cidade 2: %s\n", nome_dois);
                    printf("Os atributos escolhidos foram Pontos Turísticos e PIB.\n");
                    printf("Pontos turísticos 1: %d  -  Pontos Turísticos 2: %d\n", pontos_turisticos1, pontos_turisticos2);
                    printf("PIB 1: %.2f  -  PIB 2: %.2f\n", pib1, pib2);

                    resultado = soma1>soma2 ? "A carta 1 venceu!": "A carta 2 venceu!";
                    resultado = soma1==soma2 ? "Empate!" : resultado;
                    printf("%s\n", resultado);

                break;
                default:
                    printf("Opção inválida!");

                 }
            break;
        default:
            printf("Opção inválida!\n");
            
    }

    
    
    

    return 0;
}
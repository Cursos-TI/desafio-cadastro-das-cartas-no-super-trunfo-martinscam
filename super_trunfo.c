#include <stdio.h>

int main(){

    //Declaração das variáveis utilizadas para coletar os dados da carta 1

    int populacao1, pontosturisticos1;
    char estado1, codigocarta1[4], cidade1[50];
    float area1, pib1;
    float densidade1, percapita1;

    //Declaração das variáveis utilizadas para coletar os dados da carta 2

    int populacao2, pontosturisticos2;
    char estado2, codigocarta2[4], cidade2[50];
    float area2, pib2;
    float densidade2, percapita2;


    //Apresentação dos comandos

    printf("Realize o cadastro de duas cartas de Super Trunfo, seguindo as próximas instruções: \n");

    printf("\n"); // Adiciona uma linha em branco


    //Solicitação e coleta dos dados da carta 1


    printf("Defina uma letra entre A e H para representar o primeiro estado: \n");
    scanf(" %c", &estado1); //Solicitação e coleta da letra que representa o estado 1

    printf("Defina o código da primeira carta, digitando a letra do primeiro estado, seguida de um número de 01 a 04 (exemplo: A01, A02...): \n");
    scanf("%s", &codigocarta1); //Solicitação e coleta do código da carta 1

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1); //Solicitação e coleta do nome da cidade 1

    printf("Defina o número de habitantes da cidade: \n");
    scanf("%d", &populacao1); //Solicitação e coleta da população da cidade 1

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1); //Solicitação e coleta da área da cidade 1 em km² 

    printf("Digite o PIB - Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1); //Solicitação e coleta do PIB da cidade 1

    printf("Digite o número de pontos turísticos existentes na cidade: \n");
    scanf("%d", &pontosturisticos1); //Solicitação do número de pontos turísticos existentes na cidade 1


    printf("\n"); // Adiciona uma linha em branco


    //Solicitação e coleta dos dados da carta 2


    printf("Defina uma letra entre A e H para representar o segundo estado: \n");
    scanf(" %c", &estado2); //Solicitação e coleta da letra que representa o estado 2
    
    printf("Defina o código da carta, digitando a letra do segundo estado, seguida de um número de 01 a 04 (exemplo: A01, A02...): \n");
    scanf("%s", &codigocarta2); //Solicitação e coleta do nome do estado 2
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2); //Solicitação e coleta do nome da cidade 2
    
    printf("Defina o número de habitantes da cidade: \n");
    scanf("%d", &populacao2); //Solicitação e coleta da população da cidade 2
    
    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2); //Solicitação e coleta da área da cidade 2 em km² 
    
    printf("Digite o PIB - Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2); //Solicitação e coleta do PIB da cidade 2
    
    printf("Digite o número de pontos turísticos existentes na cidade: \n");
    scanf("%d", &pontosturisticos2); //Solicitação do número de pontos turísticos existentes na cidade 2

    printf("\n"); // Adiciona uma linha em branco


    //Exibição das informações coletadas da carta 1


    printf("INFORMAÇÕES DA CARTA 1: \n");

    printf("\n"); // Adiciona uma linha em branco
    
    printf("Estado: %c\n", estado1); //Exibição da letra do estado 1

    printf("Código da carta: %s\n", codigocarta1); //Exibição do código da carta 1

    printf("Cidade: %s\n", cidade1); //Exibição do nome da cidade 1

    printf("População: %d\n", populacao1); //Exibição da população da cidade 1

    printf("Área: %.2f km² \n", area1); //Exibição da área da cidade 1

    printf("PIB: %.2f bilhões de reais\n", pib1); //Exibição do PIB da cidade 1

    printf("Pontos Turísticos: %d\n", pontosturisticos1); //Exibição do número de pontos turísticos na cidade 1

    
    densidade1 = (float) populacao1 / area1; //Calcula a densidade populacional, dividindo o valor populacional pela área da cidade

    percapita1 = (float) pib1 / populacao1; //Calcula o PIB Per Capita, dividindo o valor do PIB pelo valor populacional da cidade


    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); //Exibe o valor da densidade populacional calculado acima
    
    printf("PIB Per Capita: %.2f reais\n", percapita1); //Exibe o valor do PIB Per Capita calculado acima

    
    printf("\n"); // Adiciona uma linha em branco


    //Exibição das informações coletadas da carta 2

    
    printf("INFORMAÇÕES DA CARTA 2: \n");

    printf("\n"); // Adiciona uma linha em branco
    
    printf("Estado: %c\n", estado2); //Exibição da letra do estado 2

    printf("Código da carta: %s\n", codigocarta2); //Exibição do código da carta 2

    printf("Cidade: %s\n", cidade2); //Exibição do nome da cidade 2

    printf("População: %d\n", populacao2); //Exibição da população da cidade 2

    printf("Área: %.2f km² \n", area2); //Exibição da área da cidade 2

    printf("PIB: %.2f bilhões de reais\n", pib2); //Exibição do PIB da cidade 2

    printf("Pontos Turísticos: %d\n", pontosturisticos2); //Exibição do número de pontos turísticos na cidade 2


    densidade2 = (float) populacao2 / area2; //Calcula a densidade populacional, dividindo o valor populacional pela área da cidade

    percapita2 = (float) pib2 / populacao2; //Calcula o PIB Per Capita, dividindo o valor do PIB pelo valor populacional da cidade


    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); //Exibe o valor da densidade populacional calculado acima
    
    printf("PIB Per Capita: %.2f reais\n", percapita2); //Exibe o valor do PIB Per Capita calculado acima


    


return 0;
}
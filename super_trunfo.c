#include <stdio.h>

int main() {
    int opcao1, opcao2;
    char pause;

    // Declaração das variáveis utilizadas para coletar os dados das cartas
    int populacao1, pontosturisticos1, populacao2, pontosturisticos2;
    char estado1, codigocarta1[4], cidade1[50];
    char estado2, codigocarta2[4], cidade2[50];
    float area1, pib1, densidade1, percapita1, superpoder1;
    float area2, pib2, densidade2, percapita2, superpoder2;

    // Apresentação dos comandos
    printf("Realize o cadastro de duas cartas de Super Trunfo, seguindo as próximas instruções:\n\n");

    // Entrada de dados carta 1
    printf("Defina uma letra entre A e H para representar o primeiro estado: ");
    scanf(" %c", &estado1);

    printf("Defina o código da primeira carta (exemplo: A01, A02...): ");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Defina o número de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos existentes na cidade: ");
    scanf("%d", &pontosturisticos1);

    printf("\n"); //Pula uma linha

    // Entrada de dados carta 2
    printf("Defina uma letra entre A e H para representar o segundo estado: ");
    scanf(" %c", &estado2);

    printf("Defina o código da segunda carta (exemplo: A01, A02...): ");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Defina o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos existentes na cidade: ");
    scanf("%d", &pontosturisticos2);

    printf("\n");

    // Cálculos das cartas
    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + percapita1 + (1 / densidade1);

    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + percapita2 + (1 / densidade2);

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Demográfica\n");
    
    //Entrada da escolha do primeiro atributo
    printf("Opção: ");
    scanf("%d", &opcao1);

    // Escolha do segundo atributo, já removendo o atributo que foi escolhido
    printf("\nEscolha o segundo atributo:\n");
    for (int i = 1; i <= 5; i++) {
        if (i != opcao1) {
            switch (i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Número de pontos turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }
    //Entrada da escolha do segundo atributo
    printf("Opção: ");
    scanf("%d", &opcao2);

    //Declaração dos atributos para as comparações
    float valor1Atributo1 = 0, valor2Atributo1 = 0;
    float valor1Atributo2 = 0, valor2Atributo2 = 0;

    // Função de comparação de atributo com operadores
    for (int i = 0; i < 2; i++) {
        int opcao = (i == 0) ? opcao1 : opcao2;
        float v1 = 0, v2 = 0;

        //Switch para comparar
        switch (opcao) {
            case 1: v1 = populacao1; v2 = populacao2; break;
            case 2: v1 = area1; v2 = area2; break;
            case 3: v1 = pib1; v2 = pib2; break;
            case 4: v1 = pontosturisticos1; v2 = pontosturisticos2; break;
            case 5: v1 = densidade1; v2 = densidade2; break;
        }

        if (i == 0) { valor1Atributo1 = v1; valor2Atributo1 = v2; }
        else { valor1Atributo2 = v1; valor2Atributo2 = v2; }
    }

    // Soma e decisão
    float soma1 = (opcao1 == 5 ? (1 / valor1Atributo1) : valor1Atributo1) + (opcao2 == 5 ? (1 / valor1Atributo2) : valor1Atributo2);
    float soma2 = (opcao1 == 5 ? (1 / valor2Atributo1) : valor2Atributo1) + (opcao2 == 5 ? (1 / valor2Atributo2) : valor2Atributo2);
    
    // Exibe as informações das cartas que serão comparadas
    printf("\n===== COMPARAÇÃO DE CARTAS =====\n");
    printf("Cidade 1: %s\n", cidade1);
    printf("Cidade 2: %s\n\n", cidade2);

    //Switch para exibição do atributo conforme for escolhido pelo usuário, usando os operadores para comparar
    for (int i = 0; i < 2; i++) {
        int opcao = (i == 0) ? opcao1 : opcao2;
        const char* nomeAtributo = "";
        switch (opcao) {
            case 1: nomeAtributo = "População"; break;
            case 2: nomeAtributo = "Área"; break;
            case 3: nomeAtributo = "PIB"; break;
            case 4: nomeAtributo = "Pontos Turísticos"; break;
            case 5: nomeAtributo = "Densidade Demográfica"; break;
        }

        float v1 = (i == 0) ? valor1Atributo1 : valor1Atributo2;
        float v2 = (i == 0) ? valor2Atributo1 : valor2Atributo2;

        //Exibição dos atributos escolhidos
        printf("Atributo %d: %s\n", i + 1, nomeAtributo);
        printf("%s: %.2f\n", cidade1, v1);
        printf("%s: %.2f\n\n", cidade2, v2);
    }
    
    //Exibição dos atributos somados
    printf("Soma dos Atributos:\n");
    printf("%s: %.2f\n", cidade1, soma1);
    printf("%s: %.2f\n", cidade2, soma2);

    //Exibição do resultado, a depender se uma das cartas venceu ou se foi empate
    printf("\nResultado: ");
    (soma1 > soma2) ? printf("%s venceu!\n", cidade1) :
    (soma2 > soma1) ? printf("%s venceu!\n", cidade2) :
                      printf("Empate!\n");

    return 0;
}
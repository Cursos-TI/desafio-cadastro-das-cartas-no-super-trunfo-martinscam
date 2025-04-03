#include <stdio.h>

int main() {
    int opcao;
    char pause;

    // Declaração das variáveis utilizadas para coletar os dados das cartas
    int populacao1, pontosturisticos1, populacao2, pontosturisticos2;
    char estado1, codigocarta1[4], cidade1[50];
    char estado2, codigocarta2[4], cidade2[50];
    float area1, pib1, densidade1, percapita1, superpoder1;
    float area2, pib2, densidade2, percapita2, superpoder2;

    // Apresentação dos comandos
    printf("Realize o cadastro de duas cartas de Super Trunfo, seguindo as próximas instruções:\n\n");

    // Solicitação e entrada dos dados da carta 1
    printf("Defina uma letra entre A e H para representar o primeiro estado: ");
    scanf(" %c", &estado1);

    printf("Defina o código da primeira carta (exemplo: A01, A02...): ");
    scanf("%s", codigocarta1);

    printf("Digite o nome do país: ");
    scanf("%s", cidade1);

    printf("Defina o número de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área do país em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o PIB do país: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos existentes no país: ");
    scanf("%d", &pontosturisticos1);

    printf("\n");

    // Solicitação e entrada dos dados da carta 2
    printf("Defina uma letra entre A e H para representar o segundo estado: ");
    scanf(" %c", &estado2);

    printf("Defina o código da segunda carta (exemplo: A01, A02...): ");
    scanf("%s", codigocarta2);

    printf("Digite o nome do país: ");
    scanf("%s", cidade2);

    printf("Defina o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área do país em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o PIB do país: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos existentes no país: ");
    scanf("%d", &pontosturisticos2);

    printf("\n");

    // Cálculos das cartas
    densidade1 = populacao1 / area1;
    percapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + percapita1 + (1 / densidade1);

    densidade2 = populacao2 / area2;
    percapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + percapita2 + (1 / densidade2);

    // Exibição das regras de comparação
    printf("\nRegras de Comparação:\n");
    printf("- O maior valor vence, exceto na Densidade Demográfica, onde o menor vence.\n\n");

    // Menu interativo para escolha do atributo de comparação
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    //Exibe as cartas que serão comparadas

    printf("\nComparação de cartas:\n"); 
    printf("País 1: %s\n", cidade1);
    printf("País 2: %s\n", cidade2);
    
    switch (opcao) { //Exibe e compara as informações de cada atributo, cada case exibe uma variável, de acordo com o que o usuário escolher
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", cidade1, populacao1);
            printf("%s: %d habitantes\n", cidade2, populacao2);
            if (populacao1 > populacao2) printf("%s venceu!\n", cidade1);
            else if (populacao2 > populacao1) printf("%s venceu!\n", cidade2);
            else printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) printf("%s venceu!\n", cidade1);
            else if (area2 > area1) printf("%s venceu!\n", cidade2);
            else printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);
            if (pib1 > pib2) printf("%s venceu!\n", cidade1);
            else if (pib2 > pib1) printf("%s venceu!\n", cidade2);
            else printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Número de pontos turísticos\n");
            printf("%s: %d pontos\n", cidade1, pontosturisticos1);
            printf("%s: %d pontos\n", cidade2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2) printf("%s venceu!\n", cidade1);
            else if (pontosturisticos2 > pontosturisticos1) printf("%s venceu!\n", cidade2);
            else printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade2);
            if (densidade1 < densidade2) printf("%s venceu!\n", cidade1);
            else if (densidade2 < densidade1) printf("%s venceu!\n", cidade2);
            else printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
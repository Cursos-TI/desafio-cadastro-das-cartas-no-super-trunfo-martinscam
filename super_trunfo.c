#include <stdio.h>

int main(){

    //Declaração das variáveis utilizadas para coletar os dados da carta 1

    int populacao1, pontosturisticos1;
    char estado1, codigocarta1[4], cidade1[50];
    float area1, pib1;
    float densidade1, percapita1;
    float superpoder1;

    //Declaração das variáveis utilizadas para coletar os dados da carta 2

    int populacao2, pontosturisticos2;
    char estado2, codigocarta2[4], cidade2[50];
    float area2, pib2;
    float densidade2, percapita2;
    float superpoder2;

    //Apresentação dos comandos

    printf("Realize o cadastro de duas cartas de Super Trunfo, seguindo as próximas instruções:\n");

    printf("\n"); // Adiciona uma linha em branco

    //Solicitação e entrada dos dados da carta 1

    printf("Defina uma letra entre A e H para representar o primeiro estado: ");
    scanf("%c", &estado1); //Solicitação e entrada da letra que representa o estado 1

    printf("Defina o código da primeira carta, digitando a letra do primeiro estado, seguida de um número de 01 a 04 (exemplo: A01, A02...): ");
    scanf("%s", &codigocarta1); //Solicitação e entrada do código da carta 1

    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade1); //Solicitação e entrada do nome da cidade 1

    printf("Defina o número de habitantes da cidade: ");
    scanf("%d", &populacao1); //Solicitação e entrada da população da cidade 1

    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1); //Solicitação e entrada da área da cidade 1 em km² 

    printf("Digite o PIB - Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1); //Solicitação e entrada do PIB da cidade 1

    printf("Digite o número de pontos turísticos existentes na cidade: ");
    scanf("%d", &pontosturisticos1); //Solicitação e entrada do número de pontos turísticos existentes na cidade 1

    printf("\n"); // Adiciona uma linha em branco

    //Solicitação e coleta dos dados da carta 2

    printf("Defina uma letra entre A e H para representar o segundo estado: ");
    scanf(" %c", &estado2); //Solicitação e entrada da letra que representa o estado 2
    
    printf("Defina o código da carta, digitando a letra do segundo estado, seguida de um número de 01 a 04 (exemplo: A01, A02...): ");
    scanf("%s", &codigocarta2); //Solicitação e entrada do nome do estado 2
    
    printf("Digite o nome da cidade: ");
    scanf("%s", &cidade2); //Solicitação e entrada do nome da cidade 2
    
    printf("Defina o número de habitantes da cidade: ");
    scanf("%d", &populacao2); //Solicitação e entrada da população da cidade 2
    
    printf("Digite a área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2); //Solicitação e entrada da área da cidade 2 em km² 
    
    printf("Digite o PIB - Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2); //Solicitação e entrada do PIB da cidade 2
    
    printf("Digite o número de pontos turísticos existentes na cidade: ");
    scanf("%d", &pontosturisticos2); //Solicitação e entrada do número de pontos turísticos existentes na cidade 2

    printf("\n"); // Adiciona uma linha em branco

    //Calculos da carta 1

    densidade1 = populacao1 / area1; //Calcula a densidade populacional, dividindo o valor populacional pela área da cidade
    percapita1 = pib1 / populacao1; //Calcula o PIB Per Capita, dividindo o valor do PIB pelo valor populacional da cidade
    superpoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + percapita1 + (1 / densidade1); //Soma todos os atributos da carta 1, incluindo o inverso da densidade para garantir maior pontuação à carta com menor densidade
 
    //Calculos da carta 2

    densidade2 = (float) populacao2 / area2; //Calcula a densidade populacional, dividindo o valor populacional pela área da cidade
    percapita2 = (float) pib2 / populacao2; //Calcula o PIB Per Capita, dividindo o valor do PIB pelo valor populacional da cidade
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + percapita2 + (1 / densidade2); //Soma todos os atributos da carta 2, incluindo o inverso da densidade para garantir maior pontuação à carta com menor densidade

    printf("Comparação de cartas pelo atributo População:\n");

    printf("\n"); // Adiciona uma linha em branco

    //Exibição dos dados que serão comparados
    
    printf("Carta 1 - População: %d\n", populacao1);

    printf("Carta 2 - População: %d\n", populacao2);

    //Comparação utilizando if/else

    if(populacao1 > populacao2){ //declarando a ação e os atributos a serem comparados

        printf("Carta 1 (%s) venceu!\n", cidade1); //Exibição da informação, caso a comparação seja verdadeira
  
     }
  
     else{
  
        printf("Carta 2 (%s) venceu!\n", cidade2); //Exibição da informação, caso a comparação seja falsa
  
     }
    

return 0;
}
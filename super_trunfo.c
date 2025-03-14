#include <stdio.h>

int main(){

    //Declaração das variáveis utilizadas para coletar os dados

    int populacao, pontosturisticos;
    char estado, codigocarta[4], cidade[50];
    float area, pib;

    //Solicitação e coleta do nome do estado

    printf("Defina uma letra entre A e H para representar um estado: \n");
    scanf("%c", &estado);

     //Solicitação e coleta do nome do estado

    printf("Defina o código da carta, digitando a letra do estado, seguida de um número de 01 a 04 (exemplo: A01, A02...): \n");
    scanf("%s", &codigocarta);

    //Solicitação e coleta do nome da cidade

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    //Solicitação e coleta da população da cidade

    printf("Defina o número de habitantes da cidade: \n");
    scanf("%d", &populacao);

    //Solicitação e coleta da área da cidade em km²

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area);

    //Solicitação e coleta do PIB da cidade

    printf("Digite o PIB - Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib);

    //Solicitação do número de pontos turísticos existentes na cidade

    printf("Digite o número de pontos turísticos existentes na cidade: \n");
    scanf("%d", &pontosturisticos);

    //Exibição das informações coletadas da primeira carta

    printf("Informações da Carta 1: \n");
    
    //Exibição da letra do estado

    printf("Estado: %c\n", estado);

    //Exibição do código da carta

    printf("Código da carta: %s\n", codigocarta);
    


return 0;
}
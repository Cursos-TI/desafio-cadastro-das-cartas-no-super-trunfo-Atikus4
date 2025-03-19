#include <stdio.h>

int main(){

    //Dados Carta 1
    char estado[50]; //Máximo de caracteres estado(50)
    char cod_carta[10]; //Máximo de caracteres código(10)
    char nome_cidade[50]; //Máximo de caracteres cidade(50)
    int populacao;
    float area_km2;
    float PIB;
    int p_turisticos;

    //Dados Carta 2
    char estado2[50]; //Máximo de caracteres estado(50)
    char cod_carta2[10]; //Máximo de caracteres código(10)
    char nome_cidade2[50]; //Máximo de caracteres cidade(50)
    int populacao2;
    float area_km22;
    float PIB2;
    int p_turisticos2;

//Carta 1

    //Espaço para digitar o nome do Estado
    printf("Digite o Nome do Estado(carta 1):");
    scanf(" %[^\n]s", estado);

    //Espaço para digitar o código da carta
    printf("Digite o código da carta(carta 1):");
    scanf(" %s", cod_carta); //%s usado para ler palavras sem espaço

    //Espaço para digitar o nome do Estado
    printf("Digite o nome da Cidade(carta 1):");
    scanf(" %[^\n]s", nome_cidade); //%[^\n]s usado para ler palavras com espaço

    //Espaço para digitar a população total
    printf("População total(carta 1):");
    scanf("%d", &populacao);

    //Espaço para digitar o tamanho da área em km²
    printf("Digite o tamanho da área em km² (carta 1):");
    scanf("%f", &area_km2);

    //Espaço para digitar o PIB
    printf("Digite o PIB(carta 1):");
    scanf("%f", &PIB);

    //Espaço para digitar a quantidade de pontos turísticos
    printf("Digite o Numero de Pontos Turisticos(carta 1):");
    scanf("%d", &p_turisticos);
//Carta 1


    
//Carta 2
    printf("Digite o Nome do Estado(carta 2):");
    scanf(" %[^\n]s", estado2);

    //Espaço para digitar o código da carta
    printf("Digite o código da carta(carta 2):");
    scanf(" %s", cod_carta2); //%s usado para ler palavras sem espaço

    //Espaço para digitar o nome do Estado
    printf("Digite o nome da Cidade(carta 2):");
    scanf(" %[^\n]s", nome_cidade2); //%[^\n]s usado para ler palavras com espaço

    //Espaço para digitar a população total
    printf("População total(carta 2):");
    scanf("%d", &populacao2);

    //Espaço para digitar o tamanho da área em km²
    printf("Digite o tamanho da área em km² (carta 2):");
    scanf("%f", &area_km22);

    //Espaço para digitar o PIB
    printf("Digite o PIB(carta 2):");
    scanf("%f", &PIB2);

    //Espaço para digitar a quantidade de pontos turísticos
    printf("Digite o Numero de Pontos Turisticos(carta 2):");
    scanf("%d", &p_turisticos2);
//Carta 2


    //Resultado da carta 1
    printf("\n Dados da primeira carta: \n Estado: %.1s\n Código: %.3s\n Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %f bilhões\n Pontos Turísticos: %d\n", 
        estado, cod_carta, nome_cidade, populacao, area_km2, PIB, p_turisticos);

    printf("\n Dados da segunda carta: \n Estado: %.1s\n Código: %.3s\n Cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %f bilhões\n Pontos Turísticos: %d\n", 
        estado2, cod_carta2, nome_cidade2, populacao2, area_km22, PIB2, p_turisticos2);
    
    return 0;
}

//Feito por Lucca Pontes Homero
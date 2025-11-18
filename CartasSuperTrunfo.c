#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //Carta 1
    char estado1 = 'x';
    char codigo1[50] = "y";
    char cidade1[50] = "b";
    int populacao1 = 4;
    float area1 = 3;
    float pib1 =2;
    int nunpontos1 = 1;
 
  //Carta 2
    char estado2 = 'c';
    char codigo2[50] = "a";
    char cidade2[50] = "d";
    int populacao2 = 1;
    float area2 = 2;
    float pib2 = 3;
    int nunpontos2 = 4;

  // Área para entrada de dados

  //Apresentação do jogo

    printf("       Super Trunfo \n");

  //Criação da carta 1

    printf("Insira os dados da carta 1 \n");

    printf("Digite o estado: \n");
    scanf("%c", &estado1);

    printf("Digite o código: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &nunpontos1);

    printf("\n");

    printf("Dados coletados");

  //Espaço entre a coleta de dados

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

  //Criação da carta 2

    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código: \n");
    scanf("%s", &codigo2);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a população: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB: \n");
    scanf(" %f", &pib2);

    printf("Digite o número de pontos turisticos: \n");
    scanf(" %d", &nunpontos2);

    printf("Dados coletados \n");


  //Espaço entre coleta de dados e apresentação

    printf("\n");
    printf("\n");
    printf("\n");

  // Área para exibição dos dados da cidade
  //Apresentação das cartas
    printf("Carta 1:");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reaisv\n", pib1);
    printf("Número de Pontos Turísticos: %d \n", nunpontos1);
  
  //Espaço entre coleta de dados e apresentação

    printf("\n");
    printf("\n");
    printf("\n");
  
  
  //Apresentação da carta 2
  
    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f milhões de reias \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", nunpontos2);

return 0;
} 

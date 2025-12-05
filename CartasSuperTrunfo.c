#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  //Carta 1
    char estado1;
    char codigo1[20];
    char cidade1[20];
    int populacao1;
    float area1;
    float PIB1;
    int nunpontos1;
    float densipopu1;
    float PIBperCapita1;
    float densiInverso1;
    float SuperPoder1;
 
  //Carta 2
    char estado2;
    char codigo2[20];
    char cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int nunpontos2;
    float densipopu2;
    float PIBperCapita2;
    float densiInverso2;
    float SuperPoder2;

  //Variavel da comparação

    int resultadoA, resultadoB, resultadoC, resultadoD, resultadoE, resultadoF, resultadoG;

  // Área para entrada de dados

  //Apresentação do jogo

    printf("         ---- Super Trunfo ----\n");

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
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &nunpontos1);

    printf("\n");

    printf("   ===== Dados coletados =====");

    densipopu1 = populacao1 / area1;
    PIBperCapita1 = PIB1 / populacao1;
    densiInverso1 = 1/densipopu1;
    SuperPoder1 = populacao1+area1+PIB1+nunpontos1+PIBperCapita1+densiInverso1;

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
    scanf(" %f", &PIB2);

    printf("Digite o número de pontos turisticos: \n");
    scanf(" %d", &nunpontos2);

    printf("   ===== Dados coletados =====");

    densipopu2 = populacao2 / area2;
    PIBperCapita2 = PIB2 / populacao2;
    densiInverso2 = 1/densipopu2;
    SuperPoder2 = populacao2+area2+PIB2+nunpontos2+PIBperCapita2+densiInverso2;


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
    printf("PIB: %f reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d \n", nunpontos1);
    printf("Densidade Populacional: %.2f hab/km² \n", densipopu1);
    printf("PIB per Capita: %.2f reais \n", PIBperCapita1);
  
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
    printf("PIB: %f reias \n", PIB2);
    printf("Número de Pontos Turísticos: %d \n", nunpontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densipopu2);
    printf("PIB per Capita: %.2f reais\n", PIBperCapita2);

  //Comparação entre as cartas
    resultadoA = populacao1>populacao2;
    resultadoB = area1>area2;
    resultadoC = PIB1>PIB2;
    resultadoD = nunpontos1>nunpontos2;
    resultadoE = densipopu1>densipopu2;
    resultadoF = PIBperCapita1>PIBperCapita2;
    resultadoG = SuperPoder1>SuperPoder2;


  //Espaço entre apresentação e resultado

    printf("\n");
    printf("\n");
    printf("\n");

  //Resultado da comparação entre as cartas

    printf("População: %d \n", resultadoA);
    printf("Área: %d \n", resultadoB);
    printf("PIB: %d \n", resultadoC);
    printf("Número de Pontos Turísticos: %d \n", resultadoD);
    printf("Desindade Populacional: %d \n", resultadoE);
    printf("PIB per Capita: %d \n", resultadoF);
    printf("Super Poder: %d \n", resultadoG);

return 0;
} 

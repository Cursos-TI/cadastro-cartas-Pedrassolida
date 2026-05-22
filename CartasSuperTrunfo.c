#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  //variaveis Carta 1
  char estado1;
  char codigo1[4];
  char nome_cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos_turisticos1;
  
  //variaveis Carta 2
  char estado2;
  char codigo2[4];
  char nome_cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos_turisticos2;

  // Área para entrada de dados
  //--entrada de dados carta 1--
    printf("===Cadastro da Carta 1===\n");

    printf("Digite o Estado1:  ");
    scanf(" %c", &estado1);

    printf("Digite o código:  ");
    scanf(" %s", codigo1);

    printf("Digite o codigo da carta (Ex: A01): ");
    scanf(" %s", codigo1); // Strings não precisam do & no scanf

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1); // %[^\n] permite ler nomes com espaços, como "Ilha de Jeju"

    printf("Digite a populacao da cidade: ");
    scanf(" %d", &populacao1);

    printf("Digite a area em km²: ");
    scanf(" %f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf(" %f", &pib1);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos1);
    printf("\n"); // Apenas pula uma linha no terminal

    // --- ENTRADA DE DADOS: CARTA 2 ---
    printf("=== CADASTRO DA CARTA 2 ===\n");

    printf("Digite a letra do Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta (Ex: B02): ");
    scanf(" %s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a populacao da cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a area em km²: ");
    scanf(" %f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turisticos: ");
    scanf(" %d", &pontos_turisticos2);

    printf("\n");

  // Área para exibição dos dados da cidade
// --- EXIBIÇÃO DE DADOS: CARTA 1 ---
    printf("=== DADOS DA CARTA 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1); // %.2f mostra apenas 2 casas decimais
    printf("PIB: %.2f bilhões de dólares\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("\n"); // Pula uma linha para separar as cartas

    // --- EXIBIÇÃO DE DADOS: CARTA 2 ---
    printf("=== DADOS DA CARTA 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de dólares\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
return 0;
} 

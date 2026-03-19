#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  int NumCarta1, NumCarta2;
  char Estado1[3], Estado2[3];
  char Codigo1[5], Codigo2[5];
  char NomeCidade1[50], NomeCidade2[50];
  int Populacao1, Populacao2;
  float Pib1, Pib2;
  int Pontos1, Pontos2;


  // Área para entrada de dados

   // -------- CARTA 1 --------
  printf("numero da Primeira Carta: ");
  scanf("%d", &NumCarta1);

  printf("estado primeira carta: ");
  scanf("%2s", Estado1);

  printf("codigo primeira carta: ");
  scanf("%4s", Codigo1);

  printf("cidade Primeira carta: ");
  scanf(" %[^\n]", NomeCidade1);

  printf("Populacao primeira carta: ");
  scanf("%d", &Populacao1);

  printf("Pib Primeira carta: ");
  scanf("%f", &Pib1);

  printf("qtd pontos turistico Primeira carta: ");
  scanf("%d", &Pontos1);


   // -------- CARTA 2 --------
  printf("\nnumero da Segunda Carta: ");
  scanf("%d", &NumCarta2);

  printf("estado Segunda carta: ");
  scanf("%2s", Estado2);

  printf("codigo Segunda carta: ");
  scanf("%4s", Codigo2);

  printf("cidade Segunda carta: ");
  scanf(" %[^\n]", NomeCidade2);

  printf("Populacao Segunda carta: ");
  scanf("%d", &Populacao2);

  printf("Pib Segunda carta: ");
  scanf("%f", &Pib2);

  printf("qtd pontos turistico Segunda carta: ");
  scanf("%d", &Pontos2);
  
  
  // Área para exibição dos dados da cidade
  printf("\n===== CARTA 1 =====\n");
  printf("Carta: %d\nEstado: %s\nCodigo: %s\nCidade: %s\nPopulacao: %d\nPib: %.2f\nPontos: %d\n",
         NumCarta1, Estado1, Codigo1, NomeCidade1, Populacao1, Pib1, Pontos1);

  printf("\n===== CARTA 2 =====\n");
  printf("Carta: %d\nEstado: %s\nCodigo: %s\nCidade: %s\nPopulacao: %d\nPib: %.2f\nPontos: %d\n",
         NumCarta2, Estado2, Codigo2, NomeCidade2, Populacao2, Pib2, Pontos2);

return 0;
} 

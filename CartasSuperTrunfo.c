#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  int NumCarta1=0;
  char Estado1 [2]="";
  char Codigo1 [3]="";
  char NomeCidade1 [15]="";
  int Populacao1=0;
  float Pib1=0;
  int Numeropontosturisticos1=0;

  int NumCarta2;
  char Estado2 [15];
  char Codigo2 [3];
  char NomeCidade2 [15];
  int Populacao2;
  float Pib2;
  int Numeropontosturisticos2;


  // Área para entrada de dados
  printf("Digite o numero da Primeira Carta:");
  scanf("%d",&NumCarta1);

  printf("Digite o Primeiro Estado:");
  scanf("%s", Estado1);

   printf("Digite a Primeiro Codigo:");
  scanf("%s",Codigo1);

  printf("Digite a Primeira Cidade:");
  scanf("%s",NomeCidade1);

  // Área para exibição dos dados da cidade
printf("Carta: %d\nEstado: %s\nCodigo: %s\nNomecidade: %s\n", NumCarta1, Estado1,Codigo1,NomeCidade1);
printf("Estado: %s ",Estado1);

return 0;
} 

#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
   // Entrada de dados para carta 1
    printf ("Insira os dados da carta 1:\n ");

    printf ("Estado: ");
    scanf ("%s", &estado1);

    printf ("codigo da carta: ");
    scanf ("%s", &codigo1);

    printf ("Nome da cidade: ");
    scanf ("%s", &nomeCidade1);

    printf ("População:  ");
    scanf ("%d", &populacao1);

    printf ("Area (em Km²)");
    scanf ("%d", &area1);

    printf ("Pib: ");
    scanf ("%f", &pib1);

    printf ("Número de pontos pontosTuristicos: ");
    scanf ("%s", &pontosTuristicos1);


    // Entrada de dados para carta 2
    printf ("Insira os dados da carta 2:\n ");

    printf ("Estado: ");
    scanf ("%s", &estado2);

    printf ("codigo da carta: ");
    scanf ("%s", &codigo2);

    printf ("Nome da cidade: ");
    scanf ("%s", &nomeCidade2);

    printf ("População:  ");
    scanf ("%d", &populacao2);

    printf ("Area (em Km²)");
    scanf ("%d", &area2);

    printf ("Pib: ");
    scanf ("%f", &pib2);

    printf ("Número de pontos pontosTuristicos: ");
    scanf ("%s", &pontosTuristicos2);

return 0;
} 

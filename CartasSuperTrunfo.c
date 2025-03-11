#include <stdio.h>

int main() {
    
    int codigo_cidade, pontos_turisticos;
    char nome_cidade[50];
    float area, populaçao, PIB;

    printf ("Digite o código da cidade: \n");
    scanf ("%d", &codigo_cidade);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome_cidade);

    printf ("Digite quantos pontos turíscticos existem na cidade: \n");
    scanf ("%d", &pontos_turisticos);

    printf ("Digite a área da cidade: \n");
    scanf ("%f", &area);

    printf ("Digite a população: \n");
    scanf ("%f", &populaçao);

    printf ("Digite o PIB: \n");
    scanf ("%f", &PIB);

    printf ("Código da cidade é: %d\n", codigo_cidade);
    printf ("Nome da cidade é: %s\n", nome_cidade);
    printf ("Pontos Turísticps da cidade: %d\n", pontos_turisticos);
    printf ("Área da cidade é: %f\n", area);
    printf ("População da cidade: %f\n", populaçao);
    printf ("PIB da cidade é: %f\n", PIB);

    return 0;
}

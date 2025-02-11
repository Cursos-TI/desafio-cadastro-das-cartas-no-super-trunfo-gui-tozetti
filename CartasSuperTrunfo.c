#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
//teste Gui

int main() {
    
    int código_cidade, pontos_turísticos;
    char nome_cidade[50];
    float área, população, PIB;

    printf ("Digite o código da cidade: \n");
    scanf ("%d", &código_cidade);

    printf ("Digite o nome da cidade: \n");
    scanf ("%s", &nome_cidade);

    printf ("Digite quantos pontos turíscticos existem na cidade: \n");
    scanf ("%d", &pontos_turísticos);

    printf ("Digite a área da cidade: \n");
    scanf ("%f", &área);

    printf ("Digite a população: \n");
    scanf ("%f", &população);

    printf ("Digite o PIB: \n");
    scanf ("%f", &PIB);

    printf ("Código da cidade é: %d\n - Nome da cidade é: %s\n", código_cidade, nome_cidade);
    printf ("Pontos Turísticps da cidade: %d\n - Área da cidade é: %f\n", pontos_turísticos, área);
    printf ("População da cidade: %f\n - PIB da cidade é: %f\n", população, PIB);
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1;//Declaração de variáveis 
    char codigo1[20];
    char nome1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

        //Aqui o usuario entrará com informações sobre a carta 01, tais como:
        printf("Digite a incial de um estado (entre A e H): \n");//Sigla do estado (será atrelado ao número 01)
            scanf(" %c", &estado1); 

                // Criação manual do código da carta 1
                codigo1[0] = estado1;
                codigo1[1] = '0';
                codigo1[2] = '1';
                codigo1[3] = '\0';

        printf("Digite o nome de uma cidade deste estado: \n");//Nome da cidade
            scanf("%19s", nome1);

        printf("Esta será a cidade número 1! Quantos habitantes há nela? \n");//População
            scanf("%d", &populacao1);

        printf("Qual o tamanho total dela em km²? \n");//Área (em km²)
            scanf("%f", &area1);

        printf("Qual o PIB (Produto Intero Bruto) desta cidade? \n");//PIB
            scanf("%f", &pib1);

        printf("Quantos pontos turisticos há nesta cidade? \n");//Número de Pontos Turísticos
        scanf("%d", &pontos1);


    char estado2;
    char codigo2[20];
    char nome2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

        //Aqui o usuario entrará com informações sobre a segunda carta, 02, tais como:
        printf("Agora digite a inicial de outro estado (lembrando,entre A e H): \n");//Sigla do segundo estado (será atrelado ao número 02)
            scanf(" %c", &estado2); 

                // Criação manual do código da carta 2
                codigo2[0] = estado1;
                codigo2[1] = '0';
                codigo2[2] = '2';
                codigo2[3] = '\0';

        printf("Digite o nome de uma cidade deste estado: \n");//Nome da cidade
            scanf("%19s", nome2);

        printf("Esta será a cidade número 2! Quantos habitantes há nela? \n");//População
            scanf("%d", &populacao2);

        printf("Qual o tamanho total dela em km²? \n");//Área (em km²)
            scanf("%f", &area2);

        printf("Qual o PIB (Produto Intero Bruto) desta cidade? \n");//PIB
            scanf("%f", &pib2);

        printf("Quantos pontos turisticos há nesta cidade? \n");//Número de Pontos Turísticos
        scanf("%d", &pontos2);

    printf("Sua Carta 1 é: Estado: %c - Código da Carta: %s - Nome da Cidade: %s - População: %d - Área (em km²): %f - PIB: %f - Número de Pontos Turístico: %d", estado1, codigo1, nome1, populacao1, area1, pib1, pontos1);
    printf("E sua Carta 2 é: Estado: %c - Código da Carta: %s - Nome da Cidade: %s - Popu;ação: %d - Área (em km²): %f - PIB: %f - Número de Pontos Turístico: %d", estado2, codigo2, nome2, populacao2, area2, pib2, pontos2);

    return 0;
}

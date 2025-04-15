#include <stdio.h>

int main(){
    char codigo_1[3], codigo_2[3];
    char cidade_1[30], cidade_2[30];
    char estado_1[30], estado_2[30];
    float area_1, pib_1, area_2, pib_2;
    int ponto_turistico_1, populacao_1, ponto_turistico_2, populacao_2;


    printf("Jogo Super Trunfo - Cadastro de Cidades\n");
    printf("-----------------------------------------\n");
    printf("Cadastro da primeira carta!\n");
    printf("-----------------------------------------\n");
    
    printf("Digite o nome do Estado:\n");
    scanf(" %[^\n]", &estado_1); // incluindo %[^\n] ao invés de %s o programa consegue ler o espaço do nome do estado e cidade

    printf("Digite o código da cidade: (Escolha um número e uma letra. Ex: 1A)\n");
    scanf("%s", &codigo_1);

    printf("Digite o nome da Cidade: \n");
    scanf(" %[^\n]", &cidade_1);  

    printf("Digite a quantidade populacional: \n");
    scanf("%d", &populacao_1);

    while (getchar() != '\n');

    printf("Digite o tamanho da área da cidade por m²: \n");
    scanf("%f", &area_1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &ponto_turistico_1);

    printf("Cadastro da segunda carta!\n");

    printf("Digite o nome do Estado:\n");
    scanf(" %[^\n]", &estado_2); // incluindo %[^\n] ao invés de %s o programa consegue ler o espaço do nome do estado e cidade

    printf("Digite o código da cidade: (Escolha um número e uma letra. Ex: 1A)\n");
    scanf("%s", &codigo_2);

    printf("Digite o nome da Cidade: \n");
    scanf(" %[^\n]", &cidade_2);  

    printf("Digite a quantidade populacional: \n");
    scanf("%d", &populacao_2);

    // limpa o buffer antes de ler a área para evitar pulos inesperados
    while (getchar() != '\n');

    printf("Digite o tamanho da área da cidade por m²: \n");
    scanf("%f", &area_2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &ponto_turistico_2);

    printf("-----------------------------------------\n");
    printf("Registro das cartas cadastradas!\n");
    printf("-----------------------------------------\n");
    printf("Carta 1: \n");
    printf("-----------------------------------------\n");

    printf("Estado: %s\n", estado_1);
    printf("Código carta: %s\n", codigo_1);
    printf("Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f reais\n", pib_1);
    printf("Pontos Turísticos: %d\n", ponto_turistico_1);

    printf("-----------------------------------------\n");
    printf("Carta 2: \n");
    printf("-----------------------------------------\n");

    printf("Estado: %s\n", estado_2);
    printf("Código carta: %s\n", codigo_2);
    printf("Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f reais\n", pib_2);
    printf("Pontos Turísticos: %d\n", ponto_turistico_2);
    
}
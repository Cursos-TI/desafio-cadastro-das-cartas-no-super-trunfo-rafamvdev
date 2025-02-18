#include <stdio.h>

int main() {

    char codigo [2];
    char cidade[30];
    char estado[30];
    float area, pib;
    int ponto_turistico, populacao, qtdcartas;
    
    

    printf("Jogo Super Trunfo. Você precisa inserir os valores das Cidades para incluir as cartas no jogo.\n");
    printf("CADASTRO DE CARTAS:\n");

    printf("Insira o nome do Estado: \n");
    scanf(" %[^\n]", estado);
    
    printf("Insira o código da Cidade: \n");
    scanf("%s", codigo);

   // inclui o %[^\n] para poder incluir espaço no cadastro de nomes de cidades
    printf("Insira o nome da Cidade: \n");
    scanf(" %[^\n]", cidade);
    /*inclui o while getchar abaixo visto um erro que estava ocorrendo ao executar o programa,
    impedindo o progresso no cadastro das informações. Assim consigo limpar o buffer e seguir com 
    o cadastro normalmente sem erro.
    */
    while (getchar() != '\n');

    printf("Insira a população em quantidade numérica: \n");
    scanf("%d", &populacao);

    printf("Insira o tamanho da área em metros quadrados: \n");
    scanf("%f", &area);

    printf("Insira o PIB: \n");
    scanf("%f", &pib);

    printf("Insira a quantidade de pontos turísticos: \n");
    scanf("%d", &ponto_turistico);

    printf("Sua carta de Super Trunfo está registrada:\n");
    printf("Pais: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    // inclui o %.3f para limitar os numeros reais, deixando a visualização mais amigável
    printf("População: %d\n", populacao);
    printf("Area: %.3f\n", area);
    printf("PIB: %.3f\n", pib);
    printf("Pontos Turísticos: %d\n", ponto_turistico);

    return 0;
}
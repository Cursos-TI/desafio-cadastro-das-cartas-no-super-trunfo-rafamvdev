#include <stdio.h>
// forma para inclusão de vários cadastros com array

#define MAX_CARTAS 40  // definição de constante com numero máximo de cartas a serem cadastradas e #define para consumir menos memória na execução

typedef struct { // utilizei typedef struct para conseguir sequenciar as cartas e manter o código limpo e de fácil manutenção
    char codigo[3];
    char cidade[30];
    char estado[30];
    float area, pib;
    int ponto_turistico, populacao;
} Cartas;

int main() {
    Cartas cartas[MAX_CARTAS]; //criação de array das cartas
    int qtd_cartas = 0; // delimitando o valor iniciar 0 para a quantidade de cartas
    char continuar; // icluindo um char condição, para caso o usuario queira parar de criar cartas, basta selecionar uma das opções no wile 

    printf("Jogo Super Trunfo - Cadastro de Cidades\n");

    do {
        if (qtd_cartas >= MAX_CARTAS) { // implementando uma condição, onde a quantidade de cartas deve ter um limite de 40, acima disso o sistema para de solicitar inclusões
            printf("Limite de cartas atingido!\n"); 
            break;
        }

        printf("\nCadastro de Carta %d:\n", qtd_cartas + 1); //  inicio do contador para registro na array

        printf("Insira o nome do Estado: \n");
        scanf(" %[^\n]", cartas[qtd_cartas].estado); // incluindo[qtd_cartas] para representar o indice atual da array cartas e armazenando a variável estado

        printf("Insira o código da Cidade: \n");
        scanf("%s", cartas[qtd_cartas].codigo);

        printf("Insira o nome da Cidade: \n");
        scanf(" %[^\n]", cartas[qtd_cartas].cidade);

        printf("Insira a população: \n");
        scanf("%d", &cartas[qtd_cartas].populacao);

        // limpa o buffer antes de ler a área para evitar pulos inesperados
        while (getchar() != '\n');

        printf("Insira a área (m²): \n");
        scanf("%f", &cartas[qtd_cartas].area);

        printf("Insira o PIB: \n");
        scanf("%f", &cartas[qtd_cartas].pib);

        printf("Insira a quantidade de pontos turísticos: \n");
        scanf("%d", &cartas[qtd_cartas].ponto_turistico);

        qtd_cartas++; // adiciona mais um a array

        printf("\nDeseja cadastrar outra cidade? (S para continuar, N para sair): "); // texto de condição para seguir com o cadastro
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's'); // enquanto resposta for S ou s, o programa retorna ao loop cadastrando nova carta

    printf("\nCARTAS CADASTRADAS:\n");
    // para mostrar de forma ordenada cada carta cadastrada usei o laço de repetição for e inclui uma variavel i como contador (se i for menor que qtd_cartas o printf finaliza)
    for (int i = 0; i < qtd_cartas; i++) { 
        printf("\nCarta %d:\n", i + 1);
        printf("Estado: %s\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Cidade: %s\n", cartas[i].cidade);
        printf("População: %d\n", cartas[i].populacao);
        printf("Área: %.0f\n", cartas[i].area);
        printf("PIB: %.0f\n", cartas[i].pib);
        printf("Pontos Turísticos: %d\n", cartas[i].ponto_turistico);
    }

    return 0;
}
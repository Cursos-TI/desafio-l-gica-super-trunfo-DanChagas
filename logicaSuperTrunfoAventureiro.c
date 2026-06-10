#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Inicialização de Variáveis.
    char  estado_1[3],  estado_2[3];
    char  codigo_1[10], codigo_2[10];
    char  cidade_1[50], cidade_2[50];
    int   populacao_1, populacao_2;
    float densidade_populacional1, densidade_populacional2;
    float pip_per_capita1, pip_per_capita2;
    float area_1, area_2;
    float pib_1, pib_2;
    int pontos_turisticos_1, pontos_turisticos_2;
    int ataqueJogador, ataqueComputador;
    int pontosJogador = 0;
    int pontosComputador = 0;

    // Captura de Dados da Carta 1.
    printf("\n========== Primeira Carta ==========\n");

    printf("Estado: ");
    scanf(" %s", &estado_1);

    printf("Codigo: ");
    scanf(" %s", &codigo_1);

    printf("Cidade: ");
    scanf(" %s", &cidade_1);

    printf("Populacao: ");
    scanf(" %d", &populacao_1);

    printf("Area M²: ");
    scanf(" %f", &area_1);

    printf("PIB: ");
    scanf(" %f", &pib_1);

    printf("Pontos Turisticos: ");
    scanf(" %d", &pontos_turisticos_1);

    // Captura de Dados da Carta 2.
    printf("\n========== Segunda Carta ==========\n");

    printf("Estado: ");
    scanf(" %s", &estado_2);

    printf("Codigo: ");
    scanf(" %s", &codigo_2);

    printf("Cidade: ");
    scanf(" %s", &cidade_2);

    printf("Populacao: ");
    scanf(" %d", &populacao_2);

    printf("Area M²: ");
    scanf(" %f", &area_2);

    printf("PIB: ");
    scanf(" %f", &pib_2);

    printf("Pontos Turisticos: ");
    scanf(" %d", &pontos_turisticos_2);

    // Calcula e Armazena a Densidade Populacional das duas Cartas.
    densidade_populacional1 = populacao_1 / area_1;
    densidade_populacional2 = populacao_2 / area_2;

    // Calcula e Armazena o Pib Per Capita das duas Cartas.
    pip_per_capita1 = populacao_1 / area_1;
    pip_per_capita2 = populacao_2 / area_2;

    // Menu Interativo de Opções de Ataque.
    printf("\n<-_-_-_-_-_-_-_-_-_-_ ESCOLHA SEU ATAQUE -_-_-_-_-_-_-_-_-_-_>\n");
    printf("1 -> -_-_-_-_-_-[POPULACAO]-_-_-_-_-_-\n");
    printf("2 -> -_-_-_-_-_-[AREA]-_-_-_-_-_-\n");
    printf("3 -> -_-_-_-_-_-[PIB]-_-_-_-_-_-\n");
    printf("4 -> -_-_-_-_-_-[PONTOS TURISTICOS]-_-_-_-_-_-\n");
    printf("5 -> -_-_-_-_-_-[DENSIDADE POPULACIONAL]-_-_-_-_-_-\n");
    scanf("%d", &ataqueJogador);

    // Escolha do Computador.
    srand(time(0));
    ataqueComputador = rand() % 5 + 1;

    // ATAQUE JOGADOR
    switch (ataqueJogador)
    {
    case 1:
        printf("JOGADOR -> [POPULACAO].\n");
        break;
    case 2:
        printf("JOGADORO -> [AREA].\n");
        break;
    case 3:
        printf("JOGADOR -> [PIB].\n");
        break;
    case 4:
        printf("JOGADOR -> [PONTOS TURISTICOS].\n");
        break;
    case 5:
        printf("JOGADOR -> [DENSIDADE DEMOGRAFICA].\n");
        break;
    default:
        printf("OPCAO INVALIDA!");
        break;
    }

    // ATAQUE COMPUTADOR
    switch (ataqueComputador)
    {
    case 1:
        printf("COMPUTADOR -> [POPULACAO].\n");
        break;
    case 2:
        printf("COMPUTADOR -> [AREA].\n");
        break;
    case 3:
        printf("COMPUTADOR -> [PIB].\n");
        break;
    case 4:
        printf("COMPUTADOR -> [PONTOS TURISTICOS].\n");
        break;
    case 5:
        printf("COMPUTADOR -> [DENSIDADE DEMOGRAFICA].\n");
        break;
    default:
        printf("OPCAO INVALIDA!");
        break;
    }

    if ((ataqueJogador == 1) && (ataqueComputador == 1)) {
        if (populacao_1 > populacao_2) {
            printf("JOGADOR VENCEU!");
            pontosJogador++;
        } else {
            printf("COMPUTADOR VENCEU!");
            pontosComputador;
        }
    }
    else if ((ataqueJogador == 2) && (ataqueComputador == 2)) {
        if (area_1 > area_2) {
            printf("JOGADOR VENCEU!");
            pontosJogador++;
        } else {
            printf("COMPUTADOR VENCEU!");
            pontosComputador;
        }        
    }
    else if ((ataqueJogador == 3) && (ataqueComputador == 3)) {
        if (pib_1 > pib_2) {
            printf("JOGADOR VENCEU!");
            pontosJogador++;
        } else {
            printf("COMPUTADOR VENCEU!");
            pontosComputador;
        }        
    }
    else if ((ataqueJogador == 4) && (ataqueComputador == 4)) {
        if (pontos_turisticos_1 > pontos_turisticos_2) {
            printf("JOGADOR VENCEU!");
            pontosJogador++;
        } else {
            printf("COMPUTADOR VENCEU!");
            pontosComputador;
        }        
    }
    else if ((ataqueJogador == 5) && (ataqueComputador == 5)) {
        if (!densidade_populacional1 < !densidade_populacional2) {
            printf("JOGADOR VENCEU!");
            pontosJogador++;
        } else {
            printf("COMPUTADOR VENCEU!");
            pontosComputador;
        }        
    }
    else {
        printf("EMPATE!");
    }

    // Exibe os dados capturados de ambas as Cartas.
    printf("\n========== CARTA VENCEDORA ========== \n");

    if (pontosJogador > pontosComputador) {
        printf("\n\n [JOGADOR VENCEU!] \n\n");

        printf("Estado: %s\n", estado_1);
        printf("Codigo: %s\n", codigo_1);
        printf("Cidade: %s\n", cidade_1);
        printf("Populacao: %d\n", populacao_1);
        printf("Densidade Populacional: %.2f\n", densidade_populacional1);
        printf("Area M²: %.2f\n", area_1);
        printf("PIB (Produto Interno Bruto): %.2f\n", pib_1);
        printf("PIB Per Capita: R$%.2f", pip_per_capita1);
        printf("Pontos Turisticos: %d", pontos_turisticos_1);       
    }
    else {
        printf("\n\n [COMPUTADOR VENCEU!] \n\n");

        printf("Estado: %s\n", estado_2);
        printf("Codigo: %s\n", codigo_2);
        printf("Cidade: %s\n", cidade_2);
        printf("Populacao: %d\n", populacao_2);
        printf("Densidade Populacional: %.2f\n", densidade_populacional1);
        printf("Area M²: %.2f\n", area_2);
        printf("PIB (Produto Interno Bruto): %.2f\n", pib_2);
        printf("PIB Per Capita: R$%.2f", pip_per_capita1);
        printf("Pontos Turisticos: %d", pontos_turisticos_2);
    }

    return 0;
}

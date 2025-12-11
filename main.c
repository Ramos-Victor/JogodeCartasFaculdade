#include <stdio.h>

float calcDesensPopulacional(int qtdPopulacao, float extArea){ // função para calcular a densidade populacional
    float densidadePop = qtdPopulacao/extArea;

    return densidadePop;
}

float calcPIBCapita(float pib, int qtdPopulacao){ // função para calcular o PIB per Capita
    float pibCapita = pib/qtdPopulacao;

    return pibCapita;
}

float calcularSuperPoder(float qtdPopulacao, float extArea, float pib, float pibCap, float qtdPontosTuristicos){ // função para calcular o super poder
    float inversoDensidade = (float) extArea/ (float) qtdPopulacao;

    float superPoder = qtdPopulacao+extArea+pib+pibCap+qtdPontosTuristicos+inversoDensidade;

    return superPoder;
}

int main() {

    char estado[2][2]; // Armazena a sigla dos estados
    char cdCarta[2][4]; // Armazena os códigos das cartas
    char nmCidade[2][50]; // Armazena os nomes

    int qtdPopulacao[2]; // Armazena a qtd da população
    float extArea[2]; // Armazena a ext de Área
    float pib[2]; // Armazena o PIB
    int qtdPontosTuristicos[2]; // Armazena o qtd de Pontos Turisticos

    float densidadePopulacional[2];
    float pibPerCapita[2];

    float superPoder[2];

    for (int i = 0; i < 2; i++) { //looping de coleta dos dados

        printf("\n--- Carta %d ---\n", i + 1);

        printf("Estado (A-H): ");
        scanf(" %1s", estado[i]); // informa a sigla

        printf("Codigo (ex: A01): ");
        scanf(" %3s", cdCarta[i]); // informa o código

        printf("Nome da cidade: ");
        scanf(" %49s", nmCidade[i]); // informa o nome

        printf("Populacao: ");
        scanf("%d", &qtdPopulacao[i]); // informa a qtd da populacao

        printf("Area: ");
        scanf("%f", &extArea[i]); // informa a ext de area

        printf("PIB: ");
        scanf("%f", &pib[i]); // informa o PIB

        printf("Pontos turisticos: ");
        scanf("%d", &qtdPontosTuristicos[i]); // informa a qtd de Pontos Turisticos
    }

    for (int i = 0; i < 2; i++) { // looping de exibição

        printf("\nCarta %d\n", i + 1);

        printf("Estado: %s\n", estado[i]); // exibe o estado

        printf("Codigo: %s\n", cdCarta[i]); // exibe o codigo

        printf("Nome da Cidade: %s\n", nmCidade[i]); // exibe a cidade

        printf("Populacao %d\n", qtdPopulacao[i]); // exibe a populacao

        printf("Area: %.2f\n", extArea[i]); // exibe a area

        printf("PIB: %.2f\n", pib[i]); // exibe o PIB

        printf("Numero de Pontos turisticos: %d\n", qtdPontosTuristicos[i]); // exibe a qtd de Pontos Turisticos

        densidadePopulacional[i] = calcDesensPopulacional(qtdPopulacao[i], extArea[i]); // guarda o valor dentro do vetor
        
        printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional[i]); // imprime o valor

        pibPerCapita[i] = calcPIBCapita(pib[i], qtdPopulacao[i]); // guarda o valor dentro do vetor

        printf("PIB per Capita: %.2f reais\n\n", pibPerCapita[i]); // imprime o valor

        superPoder[i]= calcularSuperPoder((float)qtdPopulacao[i],extArea[i],pib[i], calcPIBCapita(pib[i], qtdPopulacao[i]),(float)qtdPontosTuristicos[i]); // calcula o super poder
    }

    printf("--------------------- Comparação das cartas -----------------\n");

    printf("População: %s", (qtdPopulacao[0]>qtdPopulacao[1]) ? "Carta 1 venceu (1)\n": "Carta 2 venceu (0)\n");

    printf("Área: %s", (extArea[0]>extArea[1]) ? "Carta 1 venceu (1)\n": "Carta 2 venceu (0)\n");

    printf("PIB: %s", (pib[0]>pib[1]) ? "Carta 1 venceu (1)\n": "Carta 2 venceu (0)\n");

    printf("Pontos turisticos: %s", (qtdPontosTuristicos[0]>qtdPontosTuristicos[1]) ? "Carta 1 venceu (1)\n": "Carta 2 venceu (0)\n");

    printf("Densidade Populacional: %s", (densidadePopulacional[0]<densidadePopulacional[1]) ? "Carta 1 venceu (1)\n": "Carta 2 venceu (0)\n");

    printf("PIB per Capita: %s", (pibPerCapita[0]>pibPerCapita[1]) ? "Carta 1 venceu (1)\n": "Carta 2 venceu (0)\n");

    printf("Super Poder: %s", (superPoder[0]>superPoder[1]) ? "Carta 1 venceu (1)\n": "Carta 2 venceu (0)\n");

    return 0;
}

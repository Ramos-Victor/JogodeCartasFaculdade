int main() {

    char estado[2][2]; // Armazena a sigla dos estados
    char cdCarta[2][4]; // Armazena os códigos das cartas
    char nmCidade[2][50]; // Armazena os nomes

    int qtdPopulacao[2]; // Armazena a qtd da população
    float extArea[2]; // Armazena a ext de Área
    float pib[2]; // Armazena o PIB
    int qtdPontosTuristicos[2]; // Armazena o qtd de Pontos Turisticos

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
    }

    return 0;
}

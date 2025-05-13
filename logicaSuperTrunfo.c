#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {

     // Variáveis onde ficarão armazenados os atributos da carta 1:
    char estado1;
    char codigoDaCarta1[4];
    char nomeDaCidade1[10];
    unsigned long int populacao1;
    float areaDaCidade1;
    float PIB1;
    int numDePontoTuristicos1;
    float densidadePopulacional1;
    float PIBPerCapita1;

    // Variáveis onde ficarão armazenados os atributos da carta 2:
    char estado2;
    char codigoDaCarta2[4];
    char nomeDaCidade2[10];
    unsigned long int populacao2;
    float areaDaCidade2;
    float PIB2;
    int numDePontoTuristicos2;
    float densidadePopulacional2;
    float PIBPerCapita2;
    
    // Cadastro das Cartas:

    /*O bloco de código a seguir primeiramente imprime uma mensagem (usando 'printf') pedindo para o usuário inserir determinado dado e em seguida lê esse dado inserido (usando 'scanf') e o armazena na variável determinada*/

    // Carta 1:
    printf("Cadastrar carta 1\n"); // Mostra uma mensagem para o usuário cadastrar uma carta.

    printf("\n"); // Deixa uma linha em branco para gerar visualmente no terminal um "pulo de linha".

    printf("Insira uma letra, de A a H correspondente, ao Estado da carta: \n"); // Requisição para o usuário inserir o dado.
    scanf("%c", &estado1); // Ler e armazena o dado inserido pelo usuário na variável determinada.

    printf("Insira o código da carta, letra do estado seguida de um número de 01 a 04. Ex: A01: \n");
    scanf("%s", codigoDaCarta1);

    printf("Insira o nome da cidade: \n");
    scanf("%s", nomeDaCidade1);

    printf("Insira o número de habitantes: \n");
    scanf("%lu", &populacao1);

    printf("Insira a área da cidade: \n");
    scanf("%f", &areaDaCidade1);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &PIB1);

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &numDePontoTuristicos1);

    printf("\n"); // Deixa uma linha em branco para gerar visualmente no terminal um "pulo de linha".

    // Carta 2:
    printf("Cadastrar carta 2\n"); // Mostra uma mensagem para o usuário cadastrar uma carta.

    printf("Insira uma letra, de A a H correspondente, ao Estado da carta: \n"); // Requisição para o usuário inserir o dado.
    scanf(" %c", &estado2); // Leitura e armazenamento do dado inserido pelo usuário.

    printf("Insira o código da carta, letra do estado seguida de um número de 01 a 04. Ex: A01: \n");
    scanf("%s", codigoDaCarta2);

    printf("Insira o nome da cidade: \n");
    scanf("%s", nomeDaCidade2);

    printf("Insira o número de habitantes: \n");
    scanf("%lu", &populacao2);

    printf("Insira a área da cidade: \n");
    scanf("%f", &areaDaCidade2);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &PIB2);

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &numDePontoTuristicos2);

    printf("\n"); // Deixa uma linha em branco para gerar visualmente no terminal um "pulo de linha".

    // Cálculo de atributos
    
    // Carta 1
    densidadePopulacional1 = (float) populacao1 / areaDaCidade1;
    PIBPerCapita1 = (float) PIB1 / populacao1;

    // Carta 2
    densidadePopulacional2 = (float) populacao2 / areaDaCidade2;
    PIBPerCapita2 = (float) PIB2 / populacao2;

    // Cálculo do Super Poder

    // Carta 1
    float superPoderCarta1;
    superPoderCarta1 = (float) populacao1 + areaDaCidade1 + PIB1 + numDePontoTuristicos1 + PIBPerCapita1 + (areaDaCidade1 / populacao1);

    // Carta 2
    float superPoderCarta2;
    superPoderCarta2 = (float) populacao2 + areaDaCidade2 + PIB2 + numDePontoTuristicos2 + PIBPerCapita2 + (areaDaCidade2 / populacao2);

    // Exibição dos Dados das Cartas:

    // Mostrar Carta 1
    printf("Carta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigoDaCarta1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", areaDaCidade1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", numDePontoTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB Per Capita: %.2f reais\n", PIBPerCapita1);
    printf("Poder: %.2f\n\n", superPoderCarta1);

    // Mostrar Carta 2
    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoDaCarta2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areaDaCidade2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", numDePontoTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB Per Capita: %.2f reais\n", PIBPerCapita2);
    printf("Poder: %.2f\n\n", superPoderCarta2);

    // Comparação de Cartas:
    printf("Comparação de cartas (Atributo: População): \n\n");
    
    printf("Carta 1 - %s (%c): %lu\n", nomeDaCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %lu\n", nomeDaCidade2, estado2, populacao2);

    // Estrutura de decisão simples para comparar os atributos e determinar o vencedor
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeDaCidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeDaCidade2);
    }
    

    return 0;
}

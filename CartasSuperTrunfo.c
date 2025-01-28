#include <stdio.h>


int main() {
    
    //Exibir mensagem de boas-vindas e introduzir o jogo
    printf("Bem vindo ao Super Trunfo!\n");
    printf("Cadastre sua carta com os dados que serão requisitados abaixo:\n\n");


    //Declaração das variáveis
    char estado;
    char codigo_da_carta[4];
    char nome_da_cidade[23];
    int populacao;
    float area;
    float densidade_populacional;
    float pib;
    float pib_per_capita;
    int numero_de_pontos_turisticos;

    
    // Solicitar e armazenar os dados do usuário
    printf("Digite o estado: \n");
    scanf("%c", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade);

    printf("Digite a população:\n");
    scanf("%d", &populacao);

    printf("Digite a área em km²: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib); 

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos);
    printf("\n");

    // Calculando a densidade populacional e o PIB per capita após a entrada dos dados
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;

    
    // Exibir os dados cadastrados
    printf("Os dados foram cadastrados com sucesso, aqui está a carta com os respectivos dados:\n\n");

    // Imprimir os dados cadastrados
    printf("Nome do estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo_da_carta);
    printf("Nome da Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Densidade Populacional: %.2f\n", densidade_populacional);
    printf("PIB: %.2f\n", pib);
    printf("PIB per Capita: %.2f\n", pib_per_capita);
    printf("Número de pontos turísticos: %d\n\n", numero_de_pontos_turisticos);

    // Finaliza o programa
    return 0;
}

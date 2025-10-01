#include <stdio.h>
int main()
{
    // Declarando as variáveis
    char estado1, estado2;
    char codigo1[3], codigo2[3], cidade1[50], cidade2[50];
    int habitantes1, habitantes2;
    int pontos_tur1, pontos_tur2, escolhaAtributo1, escolhaAtributo2;
    float area1, area2, pib1, pib2, densidade_1, densidade_2, valor1Atributo1, valor2Atributo1, valor1Atributo2, valor2Atributo2;
    float pib_per_capita1, pib_per_capita2, super_poder1, super_poder2, somaCarta1, somaCarta2;

    // Entrada de dados Carta 1
    printf("Cadastre os dados da carta número 1\n\n");

    // Estado da carta
    printf("Digite a letra do estado:\n");
    scanf(" %c", &estado1);

    // Código da carta
    printf("Digite o código da carta:\n");
    scanf("%s", codigo1);
    getchar();

    // Cidade da carta
    printf("Digite o nome da cidade:\n");
    fgets(cidade1, 50, stdin);

    // População da carta
    printf("Digite a quantidade de habitantes:\n");
    scanf("%d", &habitantes1);

    // Área da carta
    printf("Digite a área em km²:\n");
    scanf("%f", &area1);

    // PIB da carta
    printf("Digite o PIB:\n");
    scanf("%f", &pib1);

    // Pontos Turísticos da carta
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_tur1);

    // Entrada de dados Carta 2
    printf("\n\nAgora cadastre os dados da carta número 2\n\n");

    // Estado da carta
    printf("Digite a letra do estado:\n");
    scanf(" %c", &estado2);

    // Código da carta
    printf("Digite o código da carta:\n");
    scanf("%s", codigo2);
    getchar();

    // Cidade da carta
    printf("Digite o nome da cidade:\n");
    fgets(cidade2, 50, stdin);

    // População da carta
    printf("Digite a quantidade de habitantes:\n");
    scanf("%d", &habitantes2);

    // Área da carta
    printf("Digite a área em km²:\n");
    scanf("%f", &area2);

    // PIB da carta
    printf("Digite o PIB:\n");
    scanf("%f", &pib2);

    // Pontos Turísticos da carta
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontos_tur2);

    // Calculando o PIB per capita
    pib_per_capita1 = (float)(pib1 * 1000000000.0) / habitantes1;
    pib_per_capita2 = (float)(pib2 * 1000000000.0) / habitantes2;

    // Calculando a densidade populacional
    densidade_1 = (float)habitantes1 / area1;
    densidade_2 = (float)habitantes2 / area2;

    // Calculando o super poder
    super_poder1 = (float)habitantes1 + area1 + pib1 + pontos_tur1 + pib_per_capita1 + (1.0f / densidade_1);
    super_poder2 = (float)habitantes2 + area2 + pib2 + pontos_tur2 + pib_per_capita2 + (1.0f / densidade_2);

    // Exibindo densidade populacional e pib per capita da carta 1
    printf("Dados cadastrados da carta 1\n");
    printf("Densidade populacional: %.2f\n", densidade_1);
    printf("PIB per Capita: %.2f\n\n", pib_per_capita1);

    // Exibindo densidade populacional e pib per capita da carta 2
    printf("Dados cadastrados da carta 2\n");
    printf("Densidade populacional: %.2f\n", densidade_2);
    printf("PIB per Capita: %.2f\n\n", pib_per_capita2);

    // Escolha do primeiro atributo para comparação das cartas
    printf("*** Agora escolha o primeiro atributo para comparar  ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &escolhaAtributo1);

    switch (escolhaAtributo1)
    {
    // Atributo população
    case 1:
        valor1Atributo1 = habitantes1;
        valor2Atributo1 = habitantes2;
        break;

    // Atributo área
    case 2:
        valor1Atributo1 = area1;
        valor2Atributo1 = area2;
        break;

    // Atributo PIB
    case 3:
        valor1Atributo1 = pib1;
        valor2Atributo1 = pib2;
        break;

    // Atributo pontos turísticos
    case 4:
        valor1Atributo1 = pontos_tur1;
        valor2Atributo1 = pontos_tur2;
        break;

    // Atributo densidade demográfica
    case 5:
        valor1Atributo1 = 1.0f / densidade_1;
        valor2Atributo1 = 1.0f / densidade_2;
        break;

    // Escolha inválida
    default:
        printf("Escolha inválida, Tente outro número!\n\n");
        break;
    }

    // Escolha do segundo atributo para comparação das cartas
    printf("\n\n*** Agora escolha o segundo atributo para comparar  ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    scanf("%d", &escolhaAtributo2);

    //Comparando os números digitados pelo usuário
    if (escolhaAtributo2 == escolhaAtributo1)
    {
        printf("Este atributo já foi escolhido, tente outro!\n");

        // Escolha do segundo atributo para comparação das cartas
        printf("*** Agora escolha um atributo para comparar  ***\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Número de Pontos Turísticos\n");
        printf("5. Densidade Demográfica\n");
        scanf("%d", &escolhaAtributo2);
    }
    else
    {
        switch (escolhaAtributo2)
        {
        // Atributo população
        case 1:
            valor1Atributo2 = habitantes1;
            valor2Atributo2 = habitantes2;
            break;

        // Atributo área
        case 2:
            valor1Atributo2 = area1;
            valor2Atributo2 = area2;
            break;

        // Atributo PIB
        case 3:
            valor1Atributo2 = pib1;
            valor2Atributo2 = pib2;
            break;

        // Atributo pontos turísticos
        case 4:
            valor1Atributo2 = pontos_tur1;
            valor2Atributo2 = pontos_tur2;
            break;

        // Atributo densidade demográfica
        case 5:
            valor1Atributo2 = 1.0f / densidade_1;
            valor2Atributo2 = 1.0f / densidade_2;
            break;
        default:
            printf("Escolha inválida, Tente outro número!\n\n");
            break;
        }
    }

    //Somando os valores do atributo 1
    somaCarta1 = valor1Atributo1 + valor2Atributo1;

    //Somando os valores do atributo 2
    somaCarta2 = valor1Atributo2 + valor2Atributo2;

    //Somando as cartas
    printf("***Soma das Cartas***\n");
    printf("Soma dos Atributos da Carta 1: %.2f\n", somaCarta1);
    printf("Soma dos Atributos da Carta 2: %.2f\n\n", somaCarta2);

    //Comparando as duas cartas
    if (somaCarta1 > somaCarta2)
    {
        printf("Cidade: %s", cidade1);
        printf("Carta 1 venceu!");
    }
    else if (somaCarta1 < somaCarta2)
    {
        printf("Cidade: %s", cidade2);
        printf("Carta 2 venceu!");
    }
    else
    {
        printf("Empate!");
    }

    return 0;
}
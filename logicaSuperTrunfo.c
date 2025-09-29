#include <stdio.h>
int main(){
    //Declarando as variáveis
    char estado1, estado2;
    char codigo1[3], codigo2[3], cidade1[50], cidade2[50];
    int habitantes1, habitantes2; 
    int pontos_tur1, pontos_tur2, escolhaAtributo;
    float area1, area2, pib1, pib2,densidade_1, densidade_2;
    float pib_per_capita1, pib_per_capita2, super_poder1, super_poder2;


    //Entrada de dados Carta 1
    printf("Cadastre os dados da carta número 1\n\n");
    
    //Estado da carta
    printf("Digite a letra do estado:\n");
    scanf(" %c" , &estado1);
    
    //Código da carta
    printf("Digite o código da carta:\n");
    scanf("%s" , codigo1);
    getchar();

    //Cidade da carta
    printf("Digite o nome da cidade:\n");
    fgets(cidade1 , 50 , stdin);

    //População da carta    
    printf("Digite a quantidade de habitantes:\n");
    scanf("%d" , &habitantes1);

    //Área da carta
    printf("Digite a área em km²:\n");
    scanf("%f" , &area1);

    //PIB da carta
    printf("Digite o PIB:\n");
    scanf("%f" , &pib1);

    //Pontos Turísticos da carta
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d" , &pontos_tur1);
    



    //Entrada de dados Carta 2
    printf("\n\nAgora cadastre os dados da carta número 2\n\n");
    
    //Estado da carta
    printf("Digite a letra do estado:\n");
    scanf(" %c" , &estado2);
    
    //Código da carta
    printf("Digite o código da carta:\n");
    scanf("%s" , codigo2);
    getchar();

    //Cidade da carta
    printf("Digite o nome da cidade:\n");
    fgets(cidade2 , 50 , stdin);

    //População da carta
    printf("Digite a quantidade de habitantes:\n");
    scanf("%d" , &habitantes2);

    //Área da carta
    printf("Digite a área em km²:\n");
    scanf("%f" , &area2);

    //PIB da carta
    printf("Digite o PIB:\n");
    scanf("%f" , &pib2);

    //Pontos Turísticos da carta
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d" , &pontos_tur2);

    //Calculando o PIB per capita
    pib_per_capita1 =(float) (pib1 * 1000000000.0) / habitantes1;
    pib_per_capita2 =(float) (pib2 * 1000000000.0) / habitantes2;

    //Calculando a densidade populacional
    densidade_1 = (float) habitantes1 / area1;
    densidade_2 = (float) habitantes2 / area2;
    
    //Calculando o super poder
    super_poder1 =(float) habitantes1 + area1 + pib1 + pontos_tur1 + pib_per_capita1 + (1.0f / densidade_1);
    super_poder2 =(float) habitantes2 + area2 + pib2 + pontos_tur2 + pib_per_capita2 + (1.0f / densidade_2);



    //Exibindo densidade populacional e pib per capita da carta 1
    printf("Dados cadastrados da carta 1\n");
    printf("Densidade populacional: %.2f\n", densidade_1);
    printf("PIB per Capita: %.2f\n\n", pib_per_capita1);


    //Exibindo densidade populacional e pib per capita da carta 2
    printf("Dados cadastrados da carta 2\n");
    printf("Densidade populacional: %.2f\n", densidade_2);
    printf("PIB per Capita: %.2f\n\n", pib_per_capita2);



//Escolha do atributo para comparação das cartas
printf("*** Agora escolha um atributo para comparar  ***\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de Pontos Turísticos\n");
printf("5. Densidade Demográfica\n");
scanf("%d", &escolhaAtributo);


switch (escolhaAtributo)
{
//Atributo população
case 1:
    printf("***Atributo escolhido: População***\n\n");
    break;

//Atributo área
case 2:
    printf("***Atributo escolhido: Área***\n\n");
    break;

//Atributo PIB
case 3:
    printf("***Atributo escolhido: PIB***\n\n");
    break;

//Atributo pontos turísticos
case 4:
    printf("***Atributo escolhido: Pontos Turísticos***\n\n");
    break;

//Atributo densidade demográfica
case 5:
    printf("***Atributo escolhido: Densidade Demográfica***\n\n");
    break;

//Escolha inválida
default:
printf("Escolha inválida, Tente outro número!\n\n");
    break;
}


//Comparando todas as cartas
//Comparando atributo população
if (escolhaAtributo == 1)
{
    if (habitantes1 > habitantes2)
    {
        printf("%s", cidade1);
        printf("%d habitantes\n\n", habitantes1);
        printf("%s", cidade2);
        printf("%d habitantes\n\n", habitantes2);
        printf("Carta 1 venceu!\n");
    }
    else if (habitantes1 < habitantes2)
    {
        printf("%s", cidade1);
        printf("%d habitantes\n\n", habitantes1);
        printf("%s", cidade2);
        printf("%d habitantes\n\n", habitantes2);
        printf("Carta 2 venceu!\n");
    }
    else{
        printf("Empate!\n");
    }    
}


//Comparando atributo área
else if (escolhaAtributo == 2)
{
    if (area1 > area2)
    {
        printf("%s", cidade1);
        printf("Área: %.2f\n\n", area1);
        printf("%s", cidade2);
        printf("Área: %.2f\n\n", area2);
        printf("Carta 1 venceu!\n");
    }
    else if (area1 < area2)
    {
        printf("%s", cidade1);
        printf("Área: %.2f\n\n", area1);
        printf("%s", cidade2);
        printf("Área: %.2f\n\n", area2);
        printf("Carta 2 venceu!\n");
    }
    else{
        printf("Empate!\n");
    }    
}


//Comparando atributo PIB
else if (escolhaAtributo == 3)
{
    if (pib1 > pib2)
    {
        printf("%s", cidade1);
        printf("PIB:: %.2f\n\n", pib1);
        printf("%s", cidade2);
        printf("PIB: %.2f\n\n", pib2);
        printf("Carta 1 venceu!\n");
    }
    else if (pib1 < pib2)
    {
        printf("%s", cidade1);
        printf("PIB: %.2f\n\n", pib1);
        printf("%s", cidade2);
        printf("PIB: %.2f\n\n", pib2);
        printf("Carta 2 venceu!\n");
    }
    else{
        printf("Empate!\n");
    }    
}

//Comparando atributo pontos turísticos
else if (escolhaAtributo == 4)
{
    if (pontos_tur1 > pontos_tur2)
    {
        printf("%s", cidade1);
        printf("Pontos Turísticos: %d\n\n", pontos_tur1);
        printf("%s", cidade2);
        printf("Pontos Turísticos: %d\n\n", pontos_tur2);
        printf("Carta 1 venceu!\n");
    }
    else if (pontos_tur1 < pontos_tur2)
    {
        printf("%s", cidade1);
        printf("Pontos Turísticos: %d\n\n", pontos_tur1);
        printf("%s", cidade2);
        printf("Pontos Turísticos: %d\n\n", pontos_tur2);
        printf("Carta 2 venceu!\n");
    }
    else{
        printf("Empate!\n");
    }    
}


//Em densidade, ganha quem tem o menor número
//Comparando atributo densidade
else if (escolhaAtributo == 5)
{
    if (densidade_1 < densidade_2)
    {
        printf("%s", cidade1);
        printf("Densidade Demográfica: %.2f\n\n", densidade_1);
        printf("%s", cidade2);
        printf("Densidade Demográfica: %.2f\n\n", densidade_2);
        printf("Carta 1 venceu!\n");
    }
    else if (densidade_1 > densidade_2)
    {
        printf("%s", cidade1);
        printf("Densidade Demográfica: %.2f\n\n", densidade_1);
        printf("%s", cidade2);
        printf("Densidade Demográfica: %.2f\n\n", densidade_2);
        printf("Carta 2 venceu!\n");
    }
    else{
        printf("Empate!\n");
    }    
}
return 0;
}

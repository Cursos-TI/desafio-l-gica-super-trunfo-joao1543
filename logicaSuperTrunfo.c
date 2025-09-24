#include <stdio.h>
int main(){
    //Declarando as variáveis
    char estado1, estado2;
    char codigo1[3], codigo2[3], cidade1[50], cidade2[50];
    int habitantes1, habitantes2; 
    int pontos_tur1, pontos_tur2;
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




    printf("******FIM******\n\n");



    //Comparando todas as cartas
    //Em densidade, ganha quem tem o menor número
    
    //Comparando a população
    if(habitantes1 > habitantes2){
        printf("Cidade 1 tem maior população\n");
    } else{
        printf("Cidade 2 tem maior população\n");
    }

    //Comparando a área
    if(area1 > area2){
        printf("Cidade 1 tem maior área\n");
    }else{
        printf("Cidade 2 tem maior área\n");
    }

    //Comparando o PIB
    if(pib1 > pib2){
        printf("Cidade 1 tem maior pib\n");
    }else{
        printf("Cidade 2 tem maior pib\n");
    }

    //Comparando os pontos turísticos
    if(pontos_tur1 > pontos_tur2){
        printf("Cidade 1 tem mais pontos turísticos\n");
    }else{
        printf("Cidade 2 tem mais pontos turísticos\n");
    }

    //Comparando a densidade
    if(densidade_1 > densidade_2){
        printf("Cidade 2 tem maior densidade\n");
    }else{
        printf("Cidade 1 tem maior densidade\n");
    }

    //Comparando o PIB per Capita
    if(pib_per_capita1 > pib_per_capita2){
        printf("Cidade 1 tem maior pib per capita\n\n");
    }else{
        printf("Cidade 2 tem maior pib per capita\n\n");
    }


    //Definição do Atributo
    printf("Atributo: População\n");

    //Comparando as cartas baseado no atributo escolhido
    printf("Carta 1: %d\n", habitantes1);
    printf("Carta 2: %d\n\n", habitantes2);

    if (habitantes1 > habitantes2){
        printf("Carta 1 venceu!");
    }else{
        printf("Carta 2 venceu!");
    }
    
    
    return 0;
}

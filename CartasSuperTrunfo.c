#include<stdio.h>

int main() {
  

//exemplos de cidades (INFORMAÇÕES APROXIMADAS)


//Nome da Cidade: Maceió
//População: 1.025.360 
//Área: 511,00km²
//PIB: R$ 16.036 milhões
//Número de Pontos Turísticos: acima de 4 pontos

//Nome: Gramado
//População: 35.000
//Área: 343,02 km²
//PIB: R$ 1.200 milhões
//Número de Pontos Turísticos: acima de 4 pontos


    // Carta01
    char estado1;
    char Codigo1[3];
    char Nome_cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int Pontos_Turisticos1;
    float Densidade_Populacional1;
    float PIB_per_Capita1;
    float Super_Poder1;

    // Carta02
    char estado2;
    char Codigo2[3];
    char Nome_cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos_Turisticos2;
    float Densidade_Populacional2;
    float PIB_per_Capita2;
    float Super_Poder2;

    // Código carta 01
    printf("Digite a letra inicial para o primeiro estado de A a H:\n");
    scanf(" %c", &estado1);

    printf("Digite um numero entre 01 e 04:\n");
    scanf("%s", Codigo1);
    
    printf("Digite o nome da Cidade:\n");
    scanf(" %[^\n]", Nome_cidade1);

    printf("Digite o numero de habitantes:\n");
    scanf("%d", &Populacao1);

    printf("Digite a área em km²:\n");
    scanf("%f", &Area1);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB1);

    printf("Digite o numero de Pontos Turisticos:\n");
    scanf("%d", &Pontos_Turisticos1);

    // Densidade e PIB per Capita
    if (Area1 != 0 && Populacao1 != 0) {
        Densidade_Populacional1 = (float)Populacao1 / Area1;
        PIB_per_Capita1 = PIB1 / (float)Populacao1;
    }
    

    // Código carta 02
    printf("Digite a letra inicial para o segundo estado de A a H:\n");
    scanf(" %c", &estado2);

    printf("Digite um numero entre 01 e 04:\n");
    scanf("%s", Codigo2);

    printf("Digite o nome da Cidade:\n");
    scanf(" %[^\n]", Nome_cidade2);

    printf("Digite o numero de habitantes:\n");
    scanf("%d", &Populacao2);

    printf("Digite a área em km²:\n");
    scanf("%f", &Area2);

    printf("Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("Digite o numero de Pontos Turisticos:\n");
    scanf("%d", &Pontos_Turisticos2);

        //IMPRESSÃO COM OS RESULTADOS (TIRAR // )

    // Carta 01
    //printf("\nCarta01:\n");
    //printf("Estado: %c\n", estado1);
    //printf("Codigo da Carta: %c%s\n", estado1, Codigo1);
    //printf("Nome da Cidade: %s\n", Nome_cidade1);
    //printf("Populacao: %d\n", Populacao1);
    //printf("Area: %.2f km²\n", Area1);
    //printf("PIB: %.2f\n", PIB1);
    //printf("Números de Pontos Turísticos: %d\n", Pontos_Turisticos1);
    //printf("Densidade Populacional: %.2f km²\n", Densidade_Populacional1);
    //printf("PIB per Capita: %.2f reais\n", PIB_per_Capita1);
    //printf("Super Poder: %.2f\n", Super_Poder1);

    // Carta 02
    //printf("\nCarta02:\n");
    //printf("Estado: %c\n", estado2);
    //printf("Codigo da Carta: %c%s\n", estado2, Codigo2);
    //printf("Nome da Cidade: %s\n", Nome_cidade2);
    //printf("Populacao: %d\n", Populacao2);
    //printf("Area: %.2f km²\n", Area2);
    //printf("PIB: %.2f\n", PIB2);
    //printf("Números de Pontos Turísticos: %d\n", Pontos_Turisticos2);
    //printf("Densidade Populacional: %.2f km²\n", Densidade_Populacional2);
    //printf("PIB per Capita: %.2f reais\n", PIB_per_Capita2);
    //printf("Super Poder: %.2f\n", Super_Poder2);
    
    // Densidade e PIB per Capita para a carta 2
    if (Area2 != 0 && Populacao2 != 0) {
        Densidade_Populacional2 = (float)Populacao2 / Area2;
        PIB_per_Capita2 = PIB2 / (float)Populacao2;
    }

    // SUPER PODER CARTA1 E CARTA2
    Super_Poder1 = Populacao1 + Area1 + PIB1 + Pontos_Turisticos1 + PIB_per_Capita1 + (1.0 / Densidade_Populacional1);
    Super_Poder2 = Populacao2 + Area2 + PIB2 + Pontos_Turisticos2 + PIB_per_Capita2 + (1.0 / Densidade_Populacional2);

    // Resultado das Cartas

    // Comparação de População
    if (Populacao1 > Populacao2)
         printf("POPULAÇÃO: Carta 1 venceu\n");
    else if (Populacao2 > Populacao1)
         printf("POPULAÇÃO: Carta 2 venceu\n");
    else
         printf("POPULAÇÃO: Empate!\n");

    // Comparação de Área
    if (Area1 > Area2)
        printf("AREA: Carta 1 venceu\n");
    else if (Area2 > Area1)
        printf("AREA: Carta 2 venceu\n");
    else
        printf("AREA: Empate!\n");

    // Comparação de PIB
    if (PIB1 > PIB2)
        printf("PIB: Carta 1 venceu\n");
    else if (PIB2 > PIB1)
        printf("PIB: Carta 2 venceu\n");
    else
        printf("PIB: Empate!\n");

 // Comparação de Pontos Turísticos
    if (Pontos_Turisticos1 > Pontos_Turisticos2)
        printf("PONTOS TURISTICOS: Carta 1 venceu\n");
    else if (Pontos_Turisticos2 > Pontos_Turisticos1)
        printf("PONTOS TURISTICOS: Carta 2 venceu\n");
    else
        printf("PONTOS TURISTICOS: Empate!\n");

    // Comparação de Densidade Populacional
    if (Densidade_Populacional1 > Densidade_Populacional2)
        printf("DENSIDADE POPULACIONAL: Carta 1 venceu\n");
    else if (Densidade_Populacional2 > Densidade_Populacional1)
        printf("DENSIDADE POPULACIONAL: Carta 2 venceu\n");
    else
        printf("DENSIDADE POPULACIONAL: Empate!\n");

    // Comparação de Densidade Populacional
    if (PIB_per_Capita1 > PIB_per_Capita2)
        printf("PIB PER CAPITA: Carta 1 venceu\n");
    else if (PIB_per_Capita1 > PIB_per_Capita2)
        printf("PIB PER CAPITA: Carta 2 venceu\n");
    else
        printf("PIBI PER CAPITA: Empate!\n");

    // Comparação de Super Poder
    if (Super_Poder1 > Super_Poder2)
        printf("Super Poder: Carta 1 venceu\n");
    else if (Super_Poder2 > Super_Poder1)
        printf("Super Poder: Carta 2 venceu\n");
    else
        printf("Super Poder: Empate!\n");

    return 0;
}

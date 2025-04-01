#include <stdio.h>

int main() {

    unsigned long int populacao1_1, populacao2_1;
    int turistico1_1, turistico2_1;
    char codigo1 [20], codigo2 [20];
    char estado1_1 [20], estado2_1 [20];
    char cidade1_1 [20], cidade2_1 [20];
    float pib1_1, pib2_1;
    float area1_1, area2_1;
    float dp1_1, dp2_1;
    float capita1_1, capita2_1;
    int escolhadojogador;


    printf("\n### Bem-vindo ao Super Trunfo! ###\n");
    printf("\nHora de começar a jogar!\n");

    printf("\nEscolha o seu ESTADO: ");
    scanf("%s", &estado1_1);
    printf("Seu estado: %s\n", estado1_1);

    printf("\nDigite o código da sua carta 1: ");
    scanf("%s", &codigo1);
    printf("Seu código: %s\n", codigo1);

    printf("\nEscolha a sua CIDADE preferida: ");
    scanf("%s", &cidade1_1);

    printf("\nInforme os seguintes dados da CIDADE escolhida: POPULAÇÃO, ÁREA, PIB e o NÚMERO DE PONTOS TURÍSTICOS!\n");

    printf("\n- POPULAÇÃO: ");
    scanf("%lu", &populacao1_1);

    printf("\n- ÁREA: ");
    scanf("%.3f", &area1_1);

    printf("\n- PIB: ");
    scanf("%f", &pib1_1);

    printf("\n- PONTOS TURÍSTICOS: ");
    scanf("%d", &turistico1_1);
    
     /* INSERÇÃO DE NOVOS DADOS ATRAVÉS DE 
    OPERAÇÕES MATEMÁTICAS CARTA 1 */  

    dp1_1 = populacao1_1 / area1_1;
    capita1_1 = pib1_1 / populacao1_1;    


    // Aqui começa a carta 2

    printf("\n**CARTA 2**\n");

    printf("\nEscolha o seu ESTADO: ");
    scanf("%s", &estado2_1);
    printf("\nSeu estado: %s\n", estado2_1);

    printf("\nDigite o código da sua carta 2: ");
    scanf("%s", &codigo2);
    printf("Seu código: %s\n", codigo2);

    printf("\nEscolha a sua CIDADE preferida: ");
    scanf("%s", &cidade2_1);

    printf("\nInforme os seguintes dados da CIDADE (B02): POPULAÇÃO, ÁREA, PIB e o NÚMERO DE PONTOS TURÍSTICOS!\n");

    printf("\n- POPULAÇÃO: ");
    scanf("%lu", &populacao2_1);

    printf("\n- ÁREA: ");
    scanf("%.3f", &area2_1);

    printf("\n- PIB: ");
    scanf("%f", &pib2_1);

    printf("\n- PONTOS TURÍSTICOS: ");
    scanf("%d", &turistico2_1);

    /* INSERÇÃO DE NOVOS DADOS ATRAVÉS DE 
    OPERAÇÕES MATEMÁTICAS CARTA 2 */  

    dp2_1 = populacao2_1 / area2_1;
    capita2_1 = pib2_1 / populacao2_1;  

    /*Opçao de escolha de atributos para compração*/

    printf("\n*** VAMOS BATALHAR ***\n");
    printf("Escolha o atributo a ser comparado:\n");

    printf("1. População(1) vs População(2)\n");
    printf("2. Área(1) vs Área(2)\n");
    printf("3. PIB(1) vs PIB(2)\n");
    printf("4. Número de Pontos turísticos(1) vs Numero de Pontos turísticos(2)\n");
    printf("5. Densidade Demográfica(1) vs Densidade demográfica(2)\n");
    printf("6. Exibir informações da cidade");
    scanf("%d", &escolhadojogador);

    /*Criação do SWITCH*/

    switch(escolhadojogador)
    {
        case 1:
        if(populacao1_1 > populacao2_1){
            printf("Carta 1 - %s: %d habitantes\n", cidade1_1, populacao1_1);
            printf("Carta 2 - %s: %d habitantes\n", cidade2_1, populacao2_1);
            printf("\n***Resultado: Carta 1 (%s) VENCEU!!!***\n", cidade1_1);
        } else if(populacao1_1 < populacao2_1){
            printf("Carta 1 - %s: %d habitantes\n", cidade1_1, populacao1_1);
            printf("Carta 2 - %s: %d habitantes\n", cidade2_1, populacao2_1);
            printf("\n***Resultado: Carta 2 (%s) VENCEU!!!***\n", cidade2_1);
        } else{
            printf("Carta 1 - %s: %d habitantes\n", cidade1_1, populacao1_1);
            printf("Carta 2 - %s: %d habitantes\n", cidade2_1, populacao2_1);
            prinft("\n### Resultado: EMPATE ###\n");
            }
            break;
        case 2:
        if(area1_1 > area2_1){
            printf("Carta 1 - %s: %.3f Km²\n", cidade1_1, area1_1);
            printf("Carta 2 - %s: %.3f km²\n", cidade2_1, area2_1);
            printf("\n***Resultado: Carta 1 (%s) VENCEU!!!***\n", cidade1_1);
        } else if(area1_1 < area2_1){
            printf("Carta 1 - %s: %.3f Km²\n", cidade1_1, area1_1);
            printf("Carta 2 - %s: %.3f km²\n", cidade2_1, area2_1);
            printf("\n***Resultado: Carta 2 (%s) VENCEU!!!***\n", cidade2_1);
        } else{
            printf("Carta 1 - %s: %.3f Km²\n", cidade1_1, area1_1);
            printf("Carta 2 - %s: %.3f km²\n", cidade2_1, area2_1);
            prinft("\n### Resultado: EMPATE ###\n");
            }
            break;
        case 3:
        if(pib1_1 > pib2_1){
            printf("Carta 1 - %s: %.2f \n", cidade1_1, pib1_1);
            printf("Carta 2 - %s: %.2f \n", cidade2_1, pib2_1);
            printf("\n***Resultado: Carta 1 (%s) VENCEU!!!***\n", cidade1_1);
        } else if(pib1_1 < pib2_1){
            printf("Carta 1 - %s: %.2f \n", cidade1_1, pib1_1);
            printf("Carta 2 - %s: %.2f \n", cidade2_1, pib2_1);
            printf("\n***Resultado: Carta 2 (%s) VENCEU!!!***\n", cidade2_1);
        } else{
            printf("Carta 1 - %s: %.2f \n", cidade1_1, pib1_1);
            printf("Carta 2 - %s: %.2f \n", cidade2_1, pib2_1);
            prinft("\n### Resultado: EMPATE ###\n");
            }
            break;
        case 4:
        if(turistico1_1 > turistico2_1){
            printf("Carta 1 - %s: %d \n", cidade1_1, turistico1_1);
            printf("Carta 2 - %s: %d \n", cidade2_1, turistico2_1);
            printf("\n***Resultado: Carta 1 (%s) VENCEU!!!***\n", cidade1_1);
        } else if(turistico1_1 < turistico2_1){
            printf("Carta 1 - %s: %d \n", cidade1_1, turistico1_1);
            printf("Carta 2 - %s: %d \n", cidade2_1, turistico2_1);
            printf("\n***Resultado: Carta 2 (%s) VENCEU!!!***\n", cidade1_1);
        } else{
            printf("Carta 1 - %s: %d \n", cidade1_1, turistico1_1);
            printf("Carta 2 - %s: %d \n", cidade2_1, turistico2_1);
            prinft("\n### Resultado: EMPATE ###\n");
            }
            break;
        case 5:
        if(dp1_1 < dp2_1){
            printf("Carta 1 - %s: %.2f \n", cidade1_1, dp1_1);
            printf("Carta 2 - %s: %.2f \n", cidade2_1, dp2_1);
            printf("\n***Resultado: Carta 1 (%s) VENCEU!!!***\n", cidade1_1);
        } else if(dp1_1 > dp2_1){
            printf("Carta 1 - %s: %.2f \n", cidade1_1, dp1_1);
            printf("Carta 2 - %s: %.2f \n", cidade2_1, dp2_1);
            printf("\n***Resultado: Carta 2 (%s) VENCEU!!!***\n", cidade1_1);
        } else{
            printf("Carta 1 - %s: %.2f \n", cidade1_1, dp1_1);
            printf("Carta 2 - %s: %.2f \n", cidade2_1, dp2_1);
            prinft("\n### Resultado: EMPATE ###\n");
            }
            break;
        default:
        prntf("!!!! OPÇÃO INVÁLIDA !!!");
    }

    }
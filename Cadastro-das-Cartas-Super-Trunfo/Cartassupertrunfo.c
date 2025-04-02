#include <stdio.h>

    int main (){
        
         // Declaração das variáveis - CARTA 01
        int pontosturisticos;
        unsigned long int populacao;
        char estado;
        char codigo[5];
        char cidade[26];
        float area;
        float pib;
        float densidadepopulacional;
        float pibpercapita;
        float Super_Poder;

       // Entrada das informações fornecidas pelo usuário DA CARTA 1 
        printf("CARTA 1\n");
        printf("Digite o nome do estado: \n");
        scanf("%c", &estado);
        
        printf("Digite o código da carta: \n");
        scanf("%s", codigo);
        
        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade);
        
        printf("Digite a População: \n");
        scanf("%d", &populacao);
        
        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &pontosturisticos);
        
        printf("Digite a área: \n");
        scanf("%f", &area);
        
        printf("Digite o PIB: \n");
        scanf("%f", &pib);

        // Cálculo da Densidade Populacional e do PIB per Capita CARTA 1
        densidadepopulacional = populacao / area;
        pibpercapita =  pib / populacao;
        Super_Poder = pib + pibpercapita + pontosturisticos + populacao + densidadepopulacional + area;
        
        // Declaração das variáveis - CARTA 02
        int pontosturisticos2;
        unsigned long int populacao2;
        char estado2;
        char codigo2[5];
        char cidade2[26];
        float area2;
        float pib2;
        float densidadepopulacional2;
        float pibpercapita2;
        float Super_Poder2;
        
        // Entrada das informações fornecidas pelo usuário DA CARTA 2
        printf("\n - CARTA 2 - \n");
        printf("Estado: B \n");
            
        printf("Digite o código da carta: \n");
        scanf("%s", codigo2);
            
        printf("Digite o nome da cidade: \n");
        scanf("%s", cidade2);
            
        printf("Digite a População: \n");
        scanf("%d", &populacao2);
            
        printf("Digite o Número de Pontos Turísticos: \n");
        scanf("%d", &pontosturisticos2);
            
        printf("Digite a área: \n");
        scanf("%f", &area2);
            
        printf("Digite o PIB: \n");
        scanf("%f", &pib2);
    
        // Cálculo do Super Poder, Densidade Populacional e do PIB per Capita CARTA 2
        densidadepopulacional2 = populacao2 / area2;
        pibpercapita2 = pib2 / populacao2;
        Super_Poder2 = pib2 + pibpercapita2 + pontosturisticos2 + populacao2 + densidadepopulacional2 + area2;
        
        
        // Saída das informações fornecidas pelo usuário DA CARTA 1 e CARTA 2
        printf("\n --CARTA 1-- \n - Estado: %c\n - Código da Carta: %s\n - Nome da cidade: %s\n", estado, codigo, cidade);
        printf(" - População: %.2d\n - Número de Pontos Turísticos: %d\n - área: %.2f KM²\n - PIB: %.2f Bilhões de Reais\n", populacao, pontosturisticos, area, pib);
        printf(" - Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
        printf(" - PIB per Capita: %f REAIS\n", pibpercapita);
        
        printf("\n --CARTA 2-- \n - Estado: B%c\n - Código da Carta: %s\n - Nome da cidade: %s\n", estado2, codigo2, cidade2);
        printf(" - População: %.2d\n - Número de Pontos Turísticos: %d\n - área: %.2f KM²\n - PIB: %.2f Bilhões de Reais\n", populacao2, pontosturisticos2, area2, pib2);
        printf(" - Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
        printf(" - PIB per Capita: %f REAIS\n", pibpercapita2);
            
        // Comparação do resultado entre a Carta1 e a Carta2
        
        printf("\n=====QUEM GANHA? CARTA 1 OU CARTA 2?=====\n");
        if (pontosturisticos > pontosturisticos2)
        {
            printf("\n - Comparação de Pontos Turisticos, Resultado: Carta 1 venceu\n");
        }
        else{
            printf(" - Comparação de Pontos Turisticos, Resultado: Carta 2 venceu\n");
        }
        if (pib > pib2)
        {
            printf(" - Comparação do PIB, Resultado: Carta 1 venceu\n");
        }
        else{
            printf(" - Comparação do PIB, Resultado: Carta 2 venceu\n");
        }
        if (populacao > populacao2)
        {
            printf(" - Comparação da População, Resultado: Carta 1 venceu\n");
        }
        else{
            printf(" - Comparação da População, Resultado: Carta 2 venceu\n");
        }
        if (area > area2)
       {
            printf(" - Comparação em Área, Resultado: Carta 1 venceu\n");
       }
       else{
            printf(" - Comparação em Área, Resultado: Carta 2 venceu\n");
       }
       if (pibpercapita > pibpercapita2)
       {
            printf(" - Comparação em PIB Per Capita, Resultado: Carta 1 venceu\n");
       }
       else{
            printf(" - Comparação em PIB Per Capita, Resultado: Carta 2 venceu\n");
       }
       if (densidadepopulacional < densidadepopulacional2)
       {
            printf(" - Comparação em Densidade Populacional, Resultado: Carta 1 venceu\n");
       }
       else{
            printf(" - Comparação em Densidade Populacional, Resultado: Carta 2 venceu\n");
       }
       
       if (Super_Poder > Super_Poder2)
       {
        printf("\n A Cidade vencedora é %s\n", cidade);
       }
       else{
        printf("\n A Cidade vencedora é %s\n", cidade2);
       }
        
       
       
       return 0;
        }
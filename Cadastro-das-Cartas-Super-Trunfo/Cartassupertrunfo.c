#include <stdio.h>

    int main (){
        
        // Declaração das variáveis - CARTA 1
        int populacao, pontosturisticos;
        char estado;
        char codigo[5];
        char cidade[26];
        float area;
        float pib;
        
        // Entrada das informações fornecidas pelo usuário- Carta 1
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
        
        // Saída das informações fornecidas pelo usuário- Carta 1
        printf(" - A CARTA 1- \n - Estado: %c\n - Código da Carta: %s\n - Nome da cidade: %s\n", estado, codigo, cidade);
        printf(" - População: %d\n - Número de Pontos Turísticos: %d\n - área: %.2f KM²\n - PIB: %.2f Bilhões de Reais\n", populacao, pontosturisticos, area, pib);

        // Declaração das variáveis - CARTA 2
        int populacao2, pontosturisticos2;
        char estado2;
        char codigo2[5];
        char cidade2[26];
        float area2;
        float pib2;
        
        // Entrada das informações fornecidas pelo usuário- Carta 2
        printf("CARTA 2\n");
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
        
        // Saída das informações fornecidas pelo usuário- Carta 2
        printf(" --A CARTA 2-- \n - Estado: B%c\n - Código da Carta: %s\n - Nome da cidade: %s\n", estado2, codigo2, cidade2);
        printf(" - População: %d\n - Número de Pontos Turísticos: %d\n - área: %.2f KM²\n - PIB: %.2f Bilhões de Reais\n", populacao2, pontosturisticos2, area2, pib2);

            return 0;
        }
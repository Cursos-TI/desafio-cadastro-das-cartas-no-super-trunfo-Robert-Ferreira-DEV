#include <stdio.h>

int main(){
    
    char inicial1 = 'A';
    
    char cartao_1[10] = "A";
    char codigo1[40] = "01";
    
    char estado1[20] = "MG";
    char cidade1[60] = "BH";

    float area1 = 331.354;
    float pib1 = 112.0;
    
    int populacao1 = 2416339;
    int pontos_turisticos1 = 5;
    
    printf("Cartão: %s\n", cartao_1);
    printf("Código: %s\n", codigo1);
    
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    
    printf("População: %d\n", populacao1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    
    printf("Área: %.1f km²\n", area1);
    printf("PIB: %.1f bilhões\n\n", pib1);

    char inicial2 = 'B';
    
    char cartao_2[15] = "B";
    char codigo2[20] = "02";
   
    char estado2[30] = "SP";
    char cidade2[70] = "Campos do Jordão";
    
    int populacao2 = 740000;
    int pontos_turisticos2 = 13;
    
    float area2 = 109941;
    float pib2 = 372.5;

    printf("Cartão: %s\n", cartao_2);  
    printf("Código: %s\n", codigo2);
    
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    
    printf("População: %d\n", populacao2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    
    printf("Área: %.1f km²\n", area2);
    printf("PIB: %.1f bilhões\n", pib2);

    return 0;

}
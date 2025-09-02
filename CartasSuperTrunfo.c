#include <stdio.h>

int main() {
    char letra1 = '1';
    char codigo1[10];
    char pais1[20];
    char estado1[20];
    char cidade1[20];

    int populacao1;
    int pontosturisticos1;

    float area1;
    float pib1;

    char letra2 = '2';
    char codigo2[10];
    char pais2[20];
    char estado2[20];
    char cidade2[20];

    int populacao2;
    int pontosturisticos2;

    float area2;
    float pib2;

    printf("Informações da primeira carta: \n\n");

    printf("Carta: 1 \n");
    
    printf("digite o código da 1° carta: ");
    scanf(" %s", &letra1);  

    printf("País: ");
    scanf("%19s", pais1);  

    printf("Estado: ");
    scanf("%19s", estado1);

    printf("Cidade: ");
    scanf("%19s", cidade1);

    printf("População (Bilhões): ");
    scanf("%d", &populacao1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("Pib (Reais): ");
    scanf("%f", &pib1);

    printf("\nInformações da segunda carta: \n\n");

    printf("Carta: 2\n");
    
    printf("digite o código da 2° carta: ");
    scanf(" %s", &letra2);  

    printf("País: ");
    scanf("%9s", pais2);

    printf("Estado: ");
    scanf("%19s", estado2);

    printf("Cidade: ");
    scanf("%19s", cidade2);

    printf("População (Bilhões): ");
    scanf("%d", &populacao2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("Pib (Reais): ");
    scanf("%f", &pib2);

    return 0;
}

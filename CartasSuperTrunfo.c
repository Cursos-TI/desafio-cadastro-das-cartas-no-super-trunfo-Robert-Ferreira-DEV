#include<stdio.h>

int main (){
    char letra1 = '1';
    char codigo1[10];
    char pais1[10];
    char estado1[20];
    char cidade1[20];

    int populacao1;
    int pontosturisticos1;

    float area1;
    float pib1;

    char letra2 = '2';
    char codigo2[10];
    char pais2[10];
    char estado2[20];
    char cidade2[20];

    int populacao2;
    int pontosturisticos2;

    float area2;
    float pib2;

    printf("Informações da primeira carta: \n\n");

    printf("Carta: 1 \n");
    scanf("%c",&letra1");

    printf("País: ");
    scanf("%s",&pais1);

    printf("Estado: ");
    scanf("%s",&estado1);

    printf("Cidade: ");
    scanf("%s",&cidade1);

    printf("População (Bilhões): ");
    scanf("%d",&populacao1");

    printf("Pontos Turísticos: ");
    scanf("%d",&pontosturisticos1);

    printf("Área (km²): ");
    scanf("%f",&area1);

    printf("Pib (Reais): ");
    scanf("%f",&pib1);

    printf("Informações da segunda carta: \n\n");

    printf("Carta: 2\n");
    scanf("%c",&letra2");

    printf("País: ");
    scanf("%s",&pais2);

    printf("Estado: ");
    scanf("%s",&estado2);

    printf("Cidade: ");
    scanf("%s",&cidade2);

    printf("População (Bilhões): ");
    scanf("%d",&populacao2");

    printf("Pontos Turísticos: ");
    scanf("%d",&pontosturisticos2);

    printf("Área (km²): ");
    scanf("%f",&area2);

    printf("Pib (Reais): ");
    scanf("%f",&pib2);

    return 0;

}

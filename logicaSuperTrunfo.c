#include <stdio.h>
#include <string.h>

int main() {
    
// VARIAVEIS DA PRIMEIRA CARTA
int numPontosTuristicos1, populacao1 = 0;
float area1, pib1 = 0.00;
char estado1[10];
char codcarta1[8];
char nomeCidade1[45];

float calcDensidadePop1; // variavel densidade
float calcPIB1; // variavei de calculo pib

float Power1 = 0.0; //Super da carta 1
float Power2 = 0.0; // Super da carta 2

//Carta numero 1
printf("Escolha sua primeira carta \n");

//tipo char
printf("Digite um estado: \n");
scanf("%s", estado1);

//tipo char
printf("Código da carta: \n");
scanf("%s", codcarta1);

//tipo char permitindo espaços
printf("Digite uma cidade: \n");
getchar(); // Limpa o buffer antes de fgets
fgets(nomeCidade1, 45, stdin);
nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

//tipo int
printf("Digite a população: \n");
scanf("%d", &populacao1);

//tipo float
printf("Digite a área: \n");
scanf("%f", &area1);

//tipo float
printf("Digite o PIB: \n");
scanf("%f", &pib1);

//tipo int
printf("Número de pontos turisticos: \n");
scanf("%d", &numPontosTuristicos1);


//--------------------------------------------------------------

// VARIAVEIS DA SEGUNDA CARTA
int numPontosTuristicos2, populacao2 = 0;
float area2, pib2 = 0.00;
char estado2[10];
char codcarta2[8];
char nomeCidade2[45];

float calcDensidadePop2;// variavel densidade
float calcPIB2;// variavei de calculo pib


//Carta numero 2
printf("\n\nEscolha sua segunda carta \n");

//tipo char
printf("Digite um estado: \n");
scanf("%s", estado2);

//tipo char
printf("Código da carta: \n");
scanf("%s", codcarta2);

//tipo char permitindo espaços
printf("Digite uma cidade: \n");
getchar(); // Limpa o buffer antes de fgets
fgets(nomeCidade2, 45, stdin);
nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

//tipo int
printf("Digite a população: \n");
scanf("%d", &populacao2);

//tipo float
printf("Digite a área: \n");
scanf("%f", &area2);

//tipo float
printf("Digite o PIB: \n");
scanf("%f", &pib2);

//tipo int
printf("Número de pontos turisticos: \n");
scanf("%d", &numPontosTuristicos2);

//Calculo densidade populacional
calcDensidadePop1 = (float) populacao1 / area1;
//printf("Densidade Populacional: %.2f hab/km²\n", calcDensidadePop1);

//Pib / população
calcPIB1 = (float) pib1 / populacao1;
//printf("PIB per Capita: %.2f reais\n", calcPIB1);

//Calculo super poder primeira carta
Power1 = (float)populacao1 + area1 + pib1 + numPontosTuristicos1 + calcPIB1;

//Calculo densidade populacional
calcDensidadePop2 = (float) populacao2 / area2;
//printf("Densidade Populacional: %.2f hab/km²\n", calcDensidadePop2);

//Pib / população
calcPIB2 = (float) pib2 / populacao2;
//printf("PIB per Capita: %.2f reais\n", calcPIB2);

//Calculo super poder segunda carta
Power2 = (float)populacao2 + area2 + pib2 + numPontosTuristicos2 + calcPIB2;

//Comparação de cartas variaveis
int 
compPop = populacao1 > populacao2, 
compArea = area1 > area2, 
compPIB = pib1 > pib2, 
compPontosTuristicos = numPontosTuristicos1 > numPontosTuristicos2,
compDensidade = calcDensidadePop1 < calcDensidadePop2,//densidade: carta com menor valor vence
compPibPer = calcPIB1 > calcPIB2,
compPower = Power1 > Power2;

//Mostrando o vencedor comparado, mostrando a saida como carta 1 ou 2
int 
cartaVencedoraPop = 2 - compPop,
cartaVencedoraArea = 2 - compArea,
cartaVencedoraPIB = 2 - compPIB,
cartaVencendoraPT = 2 - compPontosTuristicos,
cartaVencedoraDensidade = 2 - compDensidade,
cartaVencedoraPibPer = 2 - compPibPer,
cartaVencedoraPower = 2 - compPower;

//Menu escolha primeira carta
int opcao = 0;

printf("\n*** -> Escolha o atributo de comparação <- ***\n");
printf("1- População \n");
printf("2- Área \n");
printf("3- PIB \n");
printf("4- Numero de pontos turísticos \n");
printf("5- Densidade demográfica \n");
scanf("%d", &opcao);

switch (opcao) {
        case 1:
            printf("\nAtributo: População\n");
            printf("%s: %d X %s: %d\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("\nAtributo: Área\n");
            printf("%s: %.2f X %s: %.2f\n", nomeCidade1, area1, nomeCidade2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("\nAtributo: PIB\n");
            printf("%s: %.2f X %s: %.2f\n", nomeCidade1, pib1, nomeCidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("\nAtributo: Pontos Turísticos\n");
            printf("%s: %d X %s: %d\n", nomeCidade1, numPontosTuristicos1, nomeCidade2, numPontosTuristicos2);
            if (numPontosTuristicos1 > numPontosTuristicos2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (numPontosTuristicos2 > numPontosTuristicos1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("\nAtributo: Densidade Demográfica (menor vence)\n");
            printf("%s: %.2f X %s: %.2f\n", nomeCidade1, calcDensidadePop1, nomeCidade2, calcDensidadePop2);
            if (calcDensidadePop1 < calcDensidadePop2) {
                printf("Resultado: Carta 1 venceu!\n");
            } else if (calcDensidadePop2 < calcDensidadePop1) {
                printf("Resultado: Carta 2 venceu!\n");
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
        
        }
    return 0;
}
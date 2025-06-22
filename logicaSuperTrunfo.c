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
printf("Número de pontos turisticos:");
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

printf("Comparação de cartas (Atributo: População):\n\n");

printf("Carta 1 - %s (%s): %d\n",nomeCidade1,estado1, populacao1);
printf("Carta 2 - %s (%s): %d\n",nomeCidade2,estado2, populacao2);

if(cartaVencedoraPop == 1){
    printf("Resultado: Carta %d (%s) venceu!\n", 1, nomeCidade1);    
}else{
    printf("Resultado: Carta %d (%s) venceu!\n", 2, nomeCidade2);
}


//finalizado
return 0;

}
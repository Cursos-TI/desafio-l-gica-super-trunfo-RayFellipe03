#include <stdio.h>
int main() {
    // Variaveis dos atributos da cidade.
    char StateName1[15], StateName2[15];
    char CityName1[20], CityName2[20];
    char CityCode1[3], CityCode2[3];
    int TouristPoints1, TouristPoints2;
    float Area1, Populacao1, Pib1, Area2, Populacao2, Pib2;

    // Cadastro das Cartas:
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Ola! Seja bem-vindo ao SuperTrunfo da MateCheck!\n");
    printf("Para comecar, nos informe os valores das suas cartas!\n");

    // Cadastro da carta cidade 1:
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Sua primeira carta pertence a que estado? ");
    scanf("%s", StateName1);
    printf("Qual e a cidade que deseja cadastrar? E qual e o seu codigo?\n");
    printf("Cidade: ");
    scanf("%s", CityName1);
    printf("Codigo: ");
    scanf("%s", CityCode1);
    printf("Qual a area da sua cidade? (Km²) ");
    scanf("%f", &Area1);
    printf("Quantos pontos turisticos possui a sua cidade? ");
    scanf("%d", &TouristPoints1);
    printf("Qual a populacao da cidade? ");
    scanf("%f", &Populacao1);
    printf("Qual o PIB da cidade? ");
    scanf("%f", &Pib1);

    // Cadastro da carta cidade 2:
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Sua segunda carta pertence a que estado? ");
    scanf("%s", StateName2);
    printf("Qual e a cidade que deseja cadastrar? E qual e o seu codigo?\n");
    printf("Cidade: ");
    scanf("%s", CityName2);
    printf("Codigo: ");
    scanf("%s", CityCode2);
    printf("Qual a area da sua cidade? (Km²) ");
    scanf("%f", &Area2);
    printf("Quantos pontos turisticos possui a sua cidade? ");
    scanf("%d", &TouristPoints2);
    printf("Qual a populacao da cidade? ");
    scanf("%f", &Populacao2);
    printf("Qual o PIB da cidade? ");
    scanf("%f", &Pib2);

    // Calculo de densidade e PIB
    // Variaveis de calculo
    float DensityCalc1, PibCalc1, DensityCalc2, PibCalc2;

    // Calculo
    DensityCalc1 = Populacao1 / Area1;
    PibCalc1 = Pib1 / Populacao1;
    DensityCalc2 = Populacao2 / Area2;
    PibCalc2 = Pib2 / Populacao2;

    // Exibicao dos Dados das Cartas:
    // Carta 1
    printf("\n--------------------------------------------------\n");
    printf("Certo, vamos conferir os dados das suas cartas:\n");
    printf("Carta 1:\n");
    printf("CODIGO: %s", CityCode1);
    printf("\nCIDADE: %s", CityName1);
    printf("\nESTADO: %s", StateName1);
    printf("\nPOPULACAO: %.2f", Populacao1);
    printf("\nAREA: %.2f", Area1);
    printf("\nPONTOS TURISTICOS: %d", TouristPoints1);
    printf("\nPIB: %.2f", Pib1);
    printf("\nDENSIDADE DEMOGRAFICA: %.2f", DensityCalc1);
    printf("\nPIB PER CAPTA: %.2f", PibCalc1);

    // Carta 2
    printf("\n--------------------------------------------------\n");
    printf("Carta 2:\n");
    printf("CODIGO: %s", CityCode2);
    printf("\nCIDADE: %s", CityName2);
    printf("\nESTADO: %s", StateName2);
    printf("\nPOPULACAO: %.2f", Populacao2);
    printf("\nAREA: %.2f", Area2);
    printf("\nPONTOS TURISTICOS: %d", TouristPoints2);
    printf("\nPIB: %.2f", Pib2);
    printf("\nDENSIDADE DEMOGRAFICA: %.2f", DensityCalc2);
    printf("\nPIB PER CAPTA: %.2f\n", PibCalc2);

    // Comparacao das cartas 1 e 2:
    // Variavel de pontuacao
    int PontosCard1 = 0, PontosCard2 = 0;

    printf("\n--------------------------------------------------\n");
    printf("Hora do duelo!\n");
    if (PibCalc1 > PibCalc2) {
        printf("A carta 1 possui um PIB per capita maior (+1 ponto)\n");
        PontosCard1++;
    } else if (PibCalc1 == PibCalc2) {
        printf("Tivemos um empate e ambas as cartas ganharam +1 ponto\n");
        PontosCard1++;
        PontosCard2++;
    } else {
        printf("A carta 2 possui um PIB per capita maior (+1 ponto)\n");
        PontosCard2++;
    }

    if (DensityCalc1 > DensityCalc2) {
        printf("A carta 1 possui uma densidade populacional maior (+1 ponto)\n");
        PontosCard1++;
    } else if (DensityCalc1 == DensityCalc2) {
        printf("Tivemos um empate e ambas as cartas ganharam +1 ponto\n");
        PontosCard1++;
        PontosCard2++;
    } else {
        printf("A carta 2 possui uma densidade populacional maior (+1 ponto)\n");
        PontosCard2++;
    }

    if (TouristPoints1 > TouristPoints2) {
        printf("A carta 1 possui mais pontos turisticos (+1 ponto)\n");
        PontosCard1++;
    } else if (TouristPoints1 == TouristPoints2) {
        printf("Tivemos um empate e ambas as cartas ganharam +1 ponto\n");
        PontosCard1++;
        PontosCard2++;
    } else {
        printf("A carta 2 possui mais pontos turisticos (+1 ponto)\n");
        PontosCard2++;
    }

    // Exibicao de vencedor + pontuacao final:
    printf("\n--------------------------------------------------\n");
    if (PontosCard1 > PontosCard2) {
        printf("\nA carta 1 venceu com %d pontos!", PontosCard1);
    } else if (PontosCard1 == PontosCard2) {
        printf("\nUAU! Tivemos um empate inesperado e ambas as cartas ganharam!");
    } else {
        printf("\nA carta 2 venceu com %d pontos!", PontosCard2);
    }

    printf("\nFim\n");
    printf("--------------------------------------------------\n");

    return 0;
}
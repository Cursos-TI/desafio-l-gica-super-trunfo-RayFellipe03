#include <stdio.h>

int main() {
    // Variaveis dos atributos da cidade.
    char StateName1[15], StateName2[15];
    char CityName1[20], CityName2[20];
    char CityCode1[3], CityCode2[3];
    int TouristPoints1, TouristPoints2;
    float Area1, Populacao1, Pib1, Area2, Populacao2, Pib2;

    // Variavel de pontuacao
    int PontosCard1 = 0, PontosCard2 = 0;

    //variavel de escolha
    int escolhaA;   //modo de jogo
    int escolhaB;   //comparacao individual
    int escolhaC1, escolhaC2;   //comparacao multipla

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
    printf("Qual a area da sua cidade? ");
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
    printf("Qual a area da sua cidade? ");
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
    printf("\n### Certo, vamos conferir os dados das suas cartas:###\n");
    printf("\n--------------------------------------------------\n");
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

    // Comparacao das cartas 1 e 2
    printf("\n--------------------------------------------------\n");
    printf("Hora do duelo!\n");
    printf("Digite o numero referente ao modo de jogo desejado:\n");

    printf("\n1: comparacao individual\n");
    printf("2: comparacao de 2 dados\n");
    printf("3: comparacao geral\n");

    printf("\nopcao desejada:");
    scanf("%d", &escolhaA);
    printf("\n");
    if (escolhaA >3 || escolhaA <1)
        {
        printf("entrada invalida \nfinalizando programa!\n");
        return 0;
        }

    //menu de escolhas
    switch (escolhaA)
        {
    case 1: //comparacao unica
        printf("escolha o atributo que deseja comparar:\n");
        
        printf("1: area\n");
        printf("2: densidade\n");
        printf("3: pib per capta\n");
        printf("4: populacao\n");
        printf("5: turistas\n");

        printf("\nopcao desejada:");
        scanf("%d", &escolhaB);
        printf("\n");

        if (escolhaB >5 || escolhaB <1)
        {
        printf("entrada invalida \nfinalizando programa!\n");
        return 0;
        }    

            switch (escolhaB)
            {
            case 1:
                //area
                if (Area1 > Area2) {
                    printf("A carta 1 possui uma area maior (+1 ponto)\n");
                    PontosCard1++;
                    } else if (TouristPoints1 == TouristPoints2) {
                    printf("Tivemos um empate de tamanho e ambas as cartas ganharam +1 ponto\n");
                    PontosCard1++;
                    PontosCard2++;
                    } else {
                    printf("A carta 2 possui uma area maior (+1 ponto)\n");
                    PontosCard2++;
                    }
                break;
            
            case 2:
                //DENSIDADE
                if (DensityCalc1 < DensityCalc2) {
                    printf("A carta 1 possui uma densidade populacional menor (+1 ponto)\n");
                    PontosCard1++;
                } else if (DensityCalc1 == DensityCalc2) {
                    printf("Tivemos um empate de densidade populacional e ambas as cartas ganharam +1 ponto\n");
                    PontosCard1++;
                    PontosCard2++;
                } else {
                    printf("A carta 2 possui uma densidade populacional menor (+1 ponto)\n");
                    PontosCard2++;
                }
                break;

            case 3:
                //PIB
                if (PibCalc1 > PibCalc2) {
                    printf("A carta 1 possui um PIB per capita maior (+1 ponto)\n");
                    PontosCard1++;
                } else if (PibCalc1 == PibCalc2) {
                    printf("Tivemos um empate de PIB per capita e ambas as cartas ganharam +1 ponto\n");
                    PontosCard1++;
                    PontosCard2++;
                } else {
                    printf("A carta 2 possui um PIB per capita maior (+1 ponto)\n");
                    PontosCard2++;
                }
                break;

            case 4:
                //populacao
                if (Populacao1 > Populacao2) {
                    printf("A carta 1 possui uma populacao maior (+1 ponto)\n");
                    PontosCard1++;
                } else if (TouristPoints1 == TouristPoints2) {
                    printf("Tivemos um empate na populacao e ambas as cartas ganharam +1 ponto\n");
                    PontosCard1++;
                    PontosCard2++;
                } else {
                    printf("A carta 2 possui mais pontos turisticos (+1 ponto)\n");
                    PontosCard2++;
                }
                break;

            case 5:
                //turistaS
                if (TouristPoints1 > TouristPoints2) {
                    printf("A carta 1 possui mais pontos turisticos (+1 ponto)\n");
                    PontosCard1++;
                } else if (TouristPoints1 == TouristPoints2) {
                    printf("Tivemos um empate de pontos turisticos e ambas as cartas ganharam +1 ponto\n");
                    PontosCard1++;
                    PontosCard2++;
                } else {
                    printf("A carta 2 possui mais pontos turisticos (+1 ponto)\n");
                    PontosCard2++;
                }
                break;





            }
        
        break;
    
    case 2: //comparacao dupla
        printf("escolha o primeiro atributo que deseja comparar:\n");
            
        printf("1: area\n");
        printf("2: densidade\n");
        printf("3: pib per capta\n");
        printf("4: populacao\n");
        printf("5: turistas\n");
        
        printf("\nopcao desejada:");
        scanf("%d", &escolhaC1);
        printf("\n");

        if (escolhaC1 >5 || escolhaC1 <1)
        {
        printf("entrada invalida \nfinalizando programa!\n");
        return 0;
        }  

        printf("agora escolha o segundo atributo que deseja comparar:");
            
        printf("1: area\n");
        printf("2: densidade\n");
        printf("3: pib per capta\n");
        printf("4: populacao\n");
        printf("5: turistas\n");

        printf("\nopcao desejada:");
        scanf("%d", &escolhaC2);
        printf("\n");

        if (escolhaC2 >5 || escolhaC2 <1)
        {
        printf("entrada invalida \nfinalizando programa!\n");
        return 0;
        }  

        switch (escolhaC1)
        {
        case 1:
            //area
            if (Area1 > Area2) {
                printf("A carta 1 possui uma area maior (+1 ponto)\n");
                PontosCard1++;
                } else if (TouristPoints1 == TouristPoints2) {
                printf("Tivemos um empate de tamanho e ambas as cartas ganharam +1 ponto\n");
                PontosCard1++;
                PontosCard2++;
                } else {
                printf("A carta 2 possui uma area maior (+1 ponto)\n");
                PontosCard2++;
                }
            break;
        
        case 2:
            //DENSIDADE
            if (DensityCalc1 < DensityCalc2) {
                printf("A carta 1 possui uma densidade populacional menor (+1 ponto)\n");
                PontosCard1++;
            } else if (DensityCalc1 == DensityCalc2) {
                printf("Tivemos um empate de densidade populacional e ambas as cartas ganharam +1 ponto\n");
                PontosCard1++;
                PontosCard2++;
            } else {
                printf("A carta 2 possui uma densidade populacional menor (+1 ponto)\n");
                PontosCard2++;
            }
            break;

        case 3:
            //PIB
            if (PibCalc1 > PibCalc2) {
                printf("A carta 1 possui um PIB per capita maior (+1 ponto)\n");
                PontosCard1++;
            } else if (PibCalc1 == PibCalc2) {
                printf("Tivemos um empate de PIB per capita e ambas as cartas ganharam +1 ponto\n");
                PontosCard1++;
                PontosCard2++;
            } else {
                printf("A carta 2 possui um PIB per capita maior (+1 ponto)\n");
                PontosCard2++;
            }
            break;

        case 4:
            //populacao
            if (Populacao1 > Populacao2) {
                printf("A carta 1 possui uma populacao maior (+1 ponto)\n");
                PontosCard1++;
            } else if (TouristPoints1 == TouristPoints2) {
                printf("Tivemos um empate na populacao e ambas as cartas ganharam +1 ponto\n");
                PontosCard1++;
                PontosCard2++;
            } else {
                printf("A carta 2 possui mais pontos turisticos (+1 ponto)\n");
                PontosCard2++;
            }
            break;

        case 5:
            //turistaS
            if (TouristPoints1 > TouristPoints2) {
                printf("A carta 1 possui mais pontos turisticos (+1 ponto)\n");
                PontosCard1++;
            } else if (TouristPoints1 == TouristPoints2) {
                printf("Tivemos um empate de pontos turisticos e ambas as cartas ganharam +1 ponto\n");
                PontosCard1++;
                PontosCard2++;
            } else {
                printf("A carta 2 possui mais pontos turisticos (+1 ponto)\n");
                PontosCard2++;
            }
            break;
        }
        
        switch (escolhaC2)
        {
        case 1:
            //area
            if (Area1 > Area2) {
                printf("A carta 1 possui uma area maior (+1 ponto)\n");
                PontosCard1++;
                } else if (TouristPoints1 == TouristPoints2) {
                printf("Tivemos um empate de tamanho e ambas as cartas ganharam +1 ponto\n");
                PontosCard1++;
                PontosCard2++;
                } else {
                printf("A carta 2 possui uma area maior (+1 ponto)\n");
                PontosCard2++;
                }
            break;
        
        case 2:
            //DENSIDADE
            if (DensityCalc1 < DensityCalc2) {
                printf("A carta 1 possui uma densidade populacional menor (+1 ponto)\n");
                PontosCard1++;
            } else if (DensityCalc1 == DensityCalc2) {
                printf("Tivemos um empate de densidade populacional e ambas as cartas ganharam +1 ponto\n");
                PontosCard1++;
                PontosCard2++;
            } else {
                printf("A carta 2 possui uma densidade populacional menor (+1 ponto)\n");
                PontosCard2++;
            }
            break;

        case 3:
            //PIB
            if (PibCalc1 > PibCalc2) {
                printf("A carta 1 possui um PIB per capita maior (+1 ponto)\n");
                PontosCard1++;
            } else if (PibCalc1 == PibCalc2) {
                printf("Tivemos um empate de PIB per capita e ambas as cartas ganharam +1 ponto\n");
                PontosCard1++;
                PontosCard2++;
            } else {
                printf("A carta 2 possui um PIB per capita maior (+1 ponto)\n");
                PontosCard2++;
            }
            break;

        case 4:
            //populacao
            if (Populacao1 > Populacao2) {
                printf("A carta 1 possui uma populacao maior (+1 ponto)\n");
                PontosCard1++;
            } else if (TouristPoints1 == TouristPoints2) {
                printf("Tivemos um empate na populacao e ambas as cartas ganharam +1 ponto\n");
                PontosCard1++;
                PontosCard2++;
            } else {
                printf("A carta 2 possui mais pontos turisticos (+1 ponto)\n");
                PontosCard2++;
            }
            break;

        case 5:
            //turistaS
            if (TouristPoints1 > TouristPoints2) {
                printf("A carta 1 possui mais pontos turisticos (+1 ponto)\n");
                PontosCard1++;
            } else if (TouristPoints1 == TouristPoints2) {
                printf("Tivemos um empate de pontos turisticos e ambas as cartas ganharam +1 ponto\n");
                PontosCard1++;
                PontosCard2++;
            } else {
                printf("A carta 2 possui mais pontos turisticos (+1 ponto)\n");
                PontosCard2++;
            }
            break;

        }


        break;

    case 3: //comparacao de todos os dados
        //PIB
        if (PibCalc1 > PibCalc2) {
        printf("A carta 1 possui um PIB per capita maior (+1 ponto)\n");
        PontosCard1++;
        } else if (PibCalc1 == PibCalc2) {
        printf("Tivemos um empate de PIB per capita e ambas as cartas ganharam +1 ponto\n");
        PontosCard1++;
        PontosCard2++;
        } else {
        printf("A carta 2 possui um PIB per capita maior (+1 ponto)\n");
        PontosCard2++;
        }

        //DENSIDADE
        if (DensityCalc1 < DensityCalc2) {
        printf("A carta 1 possui uma densidade populacional menor (+1 ponto)\n");
        PontosCard1++;
        } else if (DensityCalc1 == DensityCalc2) {
        printf("Tivemos um empate de densidade populacional e ambas as cartas ganharam +1 ponto\n");
        PontosCard1++;
        PontosCard2++;
        } else {
        printf("A carta 2 possui uma densidade populacional menor (+1 ponto)\n");
        PontosCard2++;
        }

        //turistaS
        if (TouristPoints1 > TouristPoints2) {
        printf("A carta 1 possui mais pontos turisticos (+1 ponto)\n");
        PontosCard1++;
        } else if (TouristPoints1 == TouristPoints2) {
        printf("Tivemos um empate de pontos turisticos e ambas as cartas ganharam +1 ponto\n");
        PontosCard1++;
        PontosCard2++;
        } else {
        printf("A carta 2 possui mais pontos turisticos (+1 ponto)\n");
        PontosCard2++;
        }

        //area
        if (Area1 > Area2) {
        printf("A carta 1 possui uma area maior (+1 ponto)\n");
        PontosCard1++;
        } else if (TouristPoints1 == TouristPoints2) {
        printf("Tivemos um empate de tamanho e ambas as cartas ganharam +1 ponto\n");
        PontosCard1++;
        PontosCard2++;
        } else {
        printf("A carta 2 possui uma area maior (+1 ponto)\n");
        PontosCard2++;
        }

        //populacao
        if (Populacao1 > Populacao2) {
        printf("A carta 1 possui uma populacao maior (+1 ponto)\n");
        PontosCard1++;
        } else if (TouristPoints1 == TouristPoints2) {
        printf("Tivemos um empate na populacao e ambas as cartas ganharam +1 ponto\n");
        PontosCard1++;
        PontosCard2++;
        } else {
        printf("A carta 2 possui mais pontos turisticos (+1 ponto)\n");
        PontosCard2++;
        }
        break;
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

    printf("\n### Fim ###\n");
    printf("--------------------------------------------------\n");

    return 0;
}
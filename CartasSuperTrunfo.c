#include <stdio.h>

int main() {
    int resul_popu, resul_popu_2;
    int resul_area, resul_area_2;
    int resul_pib, resul_pib_2;
    int resul_n_pon_turis, resul_n_pon_turis_2;
    int resul_dens_popu, resul_dens_popu_2;
    int resul_cal_pib, resul, resul_cal_pib_2;
    int resul_poder, resul_poder_2;
    float super_poder;
    float super_poder_2;
    float cal_dens_popu;
    float cal_pib;
    float cal_dens_popu_2;
    float cal_pib_2;
    int numero_1 = 01;
    int numero_2 = 02;
    char codigo_a;
    char codigo_b;
    char nome_cidade[50];
    unsigned int popula;
    float area;
    float pib;
    int n_depon_turis;
    char nome_cidade_2[50];
    unsigned int popula_2;
    float area_2;
    float pib_2;
    int n_depon_turis_2;

    printf("A segir digite as informações da carta 1:\n");
   
    // Coleta de informaçoes da carta 1 
    printf("Informa uma letra de ""A"" à ""Z"":\n");
    scanf("%c", &codigo_a);
    
    printf("Informa o nome da cidade:\n");
    scanf("%s", &nome_cidade);

    printf("Quantidade de habitantes: \n");
    scanf("%u", &popula);

    printf("Informa área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area);

    printf("Informa o Produto Interno Bruto da cidade : \n");
    scanf("%f", &pib);

    printf("Informa o número de pontos turisticos: \n");
    scanf("%d", &n_depon_turis);
    
    //calculo da densidade populacional e PIB por per capita
    
    cal_dens_popu = (float) popula/area;
    cal_pib = pib/(float) popula;
    
    // Apresentação dos dados digitados pelo usuario da carta 1
   
    printf("CARTA 1:\n");
    printf("Estado:%c\n",codigo_a );
    printf("Codigo:%c0%d\n", codigo_a, numero_1 );
    printf("Nome da cidade:%s\n", nome_cidade);
    printf("Popoulação:%u\n", popula);
    printf("Area:%f km\n", area);
    printf("PIB:%f\n", pib);
    printf("Número de Pontos Turísticos:%d\n", n_depon_turis);
    printf("Densidade Populacional:%.2f hab/km\n", cal_dens_popu);
    printf("PIB per Capita:R$%.2f reais\n", cal_pib);
    
   
    printf("A segir informe a carta 2:\n");
   
    // Coleta de informaçoes da carta 2
   
    printf("Informa uma letra de ""A"" à ""H"" da:\n");
    scanf("%s", &codigo_b);

    printf("Informa o nome da cidade: \n");
    scanf("%s", &nome_cidade_2);

    printf("Quantidade de habitantes: \n");
    scanf("%u", &popula_2);

    printf("Informa área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area_2);

    printf("Informa o Produto Interno Bruto da cidade : \n");
    scanf("%f", &pib_2);

    printf("Informa o número de pontos turisticos: \n");
    scanf("%d", &n_depon_turis_2);
   
    //calculo da densidade populacional e PIB por per capita da carta 2
   
    cal_dens_popu_2 =(float) popula_2/area_2;
    cal_pib_2 = pib_2/(float) popula_2;
   
    // Apresentação dos dados digitados pelo usuario da carta 2 

    printf("CARTA 2:\n");
    printf("Estado:%c\n", codigo_b );
    printf("Codigo:%c0%d\n", codigo_b, numero_2 );
    printf("Nome da cidade:%s\n", nome_cidade_2);
    printf("Popoulação:%u\n", popula_2);
    printf("Area:%f\n", area_2);
    printf("PIB:%f\n", pib_2);
    printf("Número de Pontos Turísticos:%d\n", n_depon_turis_2);
    printf("Densidade Populacional:%.2f hab/km\n", cal_dens_popu);
     printf("PIB per Capita:$ %.2f\n", cal_pib);
     
     // Calculo do poder das cartas 
     
    super_poder = cal_dens_popu + cal_pib +(float) popula + area + pib + n_depon_turis;
    super_poder_2 = cal_dens_popu_2 + cal_pib_2 + (float) popula_2 + area_2 + pib_2 + n_depon_turis_2;
    
    // Mostrando poder das cartas para o usuario;
    printf ("Poder da carta 1: %f\n", super_poder);
    printf ("Poder da carta 2: %f\n", super_poder_2);

    // Comparação dos dados das cartas 

    resul_popu = popula > popula_2;
    resul_popu_2 = popula < popula_2;
    
    resul_area = area > area_2;
    resul_area_2 = area < area_2;

    resul_pib = pib > pib_2;
    resul_pib_2 = pib < pib_2;
    
    resul_n_pon_turis =  n_depon_turis > n_depon_turis_2;
    resul_n_pon_turis_2 =  n_depon_turis < n_depon_turis_2;
    
    resul_dens_popu = cal_dens_popu < cal_dens_popu_2;
    resul_dens_popu_2 = cal_dens_popu > cal_dens_popu_2;
    
    resul_cal_pib =  cal_pib > cal_dens_popu_2;
    resul_cal_pib_2 =  cal_pib < cal_dens_popu_2;
    
    resul_poder = super_poder > super_poder_2;
    resul_poder_2 = super_poder < super_poder_2;

    //Mostrando o resultado da comparação das cartas
    printf ("Comparação das cartas:\n");
    printf ("População - Carta 1: %d e Carta 2: %d\n", resul_popu, resul_popu_2 );
    printf ("Área - Carta 1: %d e Carta 2: %d\n", resul_area, resul_area_2 );
    printf ("PIB - Carta 1: %d e Carta 2: %d\n", resul_pib, resul_pib_2 );
    printf ("Pontos Turisticos - Carta 1: %d e Carta 2: %d\n", resul_n_pon_turis, resul_n_pon_turis_2 );
    printf ("Densidade Populacional - Carta 1: %d e Carta 2: %d\n", resul_dens_popu, resul_dens_popu_2 );
    printf ("PIB per Capita - Carta 1: %d e Carta 2: %d\n", resul_cal_pib, resul_cal_pib_2);
    printf ("Super Poder - Carta 1: %d e Carta 2: %d\n", resul_poder, resul_poder_2 );


    
    return 0;
}
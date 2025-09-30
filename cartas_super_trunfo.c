#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int populacao1, pontosturisticos1;
    double pib1, area1, densidadedemografica1;
    char codigodacarta1[60];
    char nomedopais1[60];
    int cartajogador1;
  

    //    CARTA 1

    printf ("---- CARTA 1 ---- \n");
    
    printf("Digite o nome do País:\n");
    scanf("%s", nomedopais1);  

    printf("Digite os Pontos Turísticos do País:\n");
    scanf("%d", &pontosturisticos1);

    printf("Digite o número de população do pais:\n");
    scanf("%d", &populacao1);

    printf("Digite o PIB do pais:\n");
    scanf("%lf", &pib1);  

    printf("Digite a Área do Pais:\n");
    scanf("%lf", &area1); 

    printf("Digite o Código da Carta:\n");
    scanf("%s", codigodacarta1);


    printf("Nome do pais: %s\n", nomedopais1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("População: %d\n", populacao1);
    printf("PIB: %.2f\n", pib1);        
    printf("Área: %.2f km²\n", area1);  
    printf("Código da Carta: %s\n", codigodacarta1);

   densidadedemografica1 = populacao1 / area1;

    //                CARTA 2

    int populacao2, pontosturisticos2;
    double pib2, area2, densidadedemografica2;
    char codigodacarta2[60];
    char nomedopais2[60];
    int cartajogador2;

     printf ("---- CARTA 2 ----\n");
    
    printf("Digite o nome do pais:\n");
    scanf("%s", nomedopais2);  

    printf("Digite os Pontos Turísticos do Pais:\n");
    scanf("%d", &pontosturisticos2);

    printf("Digite o número de população do País:\n");
    scanf("%d", &populacao2);

    printf("Digite o PIB do pais:\n");
    scanf("%lf", &pib2);  

    printf("Digite a Área do País:\n");
    scanf("%lf", &area2); 

    printf("Digite o Código da Carta:\n");
    scanf("%s", codigodacarta2);


    printf("Nome do País: %s\n", nomedopais2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("População: %d\n", populacao2);
    printf("PIB: %.2f\n", pib2);        
    printf("Área: %.2f km²\n", area2);  
    printf("Código da Carta: %s\n", codigodacarta2);

     densidadedemografica2 = populacao2 / area2;

// Parte jogavel 

    printf ("### Jogo de Super Cartas Trunfos ### \n");
    printf ("### Quer jogar: ###\n");
    printf("### Escolha as Opções de Batalha: ###\n");
    printf("1. Pib\n");
    printf ("2. Populaçao \n");
    printf ("3. area\n ");
    scanf("%d", &cartajogador2);

     cartajogador1 = rand () % 3 + 1;
    
switch (cartajogador1)
{
case 1:
  printf ("Carta1: Pib - \n");
  break;
case 2:
printf ("Carta1: Populaçao - \n");
  break;
  case 3:
  printf ("Carta1 area - \n");
  break;

  default:
  printf ("Opçao Invalida \n");
  break;
}

switch (cartajogador2)
{
case 1:
  printf ("Carta2: Pib - \n");
  break;
  
case 2:
printf ("Carta2: Populaçao - \n");
  break;
  case 3:
  printf ("Carta2: area - \n");
  break;

  default:
  printf ("Opçao Invalida \n");
  break;
}

if (cartajogador1 == cartajogador2)
{
  printf ("Os Paises empataram \n");
}else if ((pib1 > pib2) ||
          (populacao1 > populacao2) ||
          (area1 > area2))

          {
printf("O  pais: %s Ganhou \n", &nomedopais1 );
}else{ 
    printf("O País: %s Ganhou \n", &nomedopais2 );
   } 
 
    return 0;
}

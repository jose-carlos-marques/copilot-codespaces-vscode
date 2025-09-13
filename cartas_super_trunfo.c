#include<stdio.h>

int main(){
// Carta 1
    int populacao1, pontosturisticos1;
    double pib1,area1;
    char estado1 [60];
    char codigodacarta1[60];
    char nomedacidade1[60];
    float densidadepopulacional1, pibpercapita1;
    float super_poder1;

    // Carta 2
     int populacao2, pontosturisticos2;
    double pib2,area2;
    char estado2 [60];
    char codigodacarta2[60];
    char nomedacidade2[60];
    float densidadepopulacional2, pibpercapita2;
    float super_poder2;
    

    printf ("Carta Numero 1 \n");

    printf("Digite o nome da cidade: \n ");
    scanf ("%s",  nomedacidade1);

    printf ("Digite os Pontos Turisticos da Cidade: \n ");
    scanf ("%d", &pontosturisticos1);
    
    printf ("Digite o Estado: \n ");
    scanf("%s", estado1);

    printf("Digite o numero de populacao da cidade: \n ");
    scanf ("%d", &populacao1);

    printf ("Digite o Pib da cidade: \n ");
    scanf("%e", &pib1);

    printf("Digite a Area da cidade: \n ");
    scanf("%e", &area1);
 
   printf("Digite o Codigo da Carta: \n ");
   scanf("%s", &codigodacarta1);

   densidadepopulacional1 = populacao1 / area1;
   pibpercapita1 = pib1 / populacao1;
   super_poder1 = populacao1 + area1 + pib1 + pibpercapita1 + densidadepopulacional1;

 printf (" Nome da cidade: %s",  nomedacidade2);
   printf(" Pontos turisticos: %d", pontosturisticos2);
   printf(" estado: %s", estado2);
   printf(" populacao: %d", populacao2);
   printf(" pib:", &pib2);
   printf(" area:", &area2);
   printf(" o codigo da carta:", codigodacarta2);
     printf (" ensidade populacional: %f", densidadepopulacional2);
  printf(" O Pib Per Capita: %f", pibpercapita2);


   printf (" Carta Numero Dois \n");

    printf(" Digite o nome da cidade: \n ");
    scanf ("%s",  nomedacidade2);

    printf (" Digite os Pontos Turisticos da Cidade: \n ");
    scanf ("%d", &pontosturisticos2);
    
    printf (" Digite o Estado: \n ");
    scanf("%s", estado2);

    printf(" Digite o numero de populacao da cidade: \n ");
    scanf ("%d", &populacao2);

    printf (" Digite o Pib da cidade: \n ");
    scanf("%e", &pib2);

    printf(" Digite a Area da cidade: \n ");
    scanf("%e", &area2);
 
   printf(" Digite o Codigo da Carta: \n ");
   scanf("%59s", &codigodacarta2);

   printf (" Nome da cidade: %s ",  nomedacidade2);
   printf(" Pontos turisticos: %d ", pontosturisticos2);
   printf(" estado: %s ", estado2);
   printf(" populacao: %d ", populacao2);
   printf(" pib: ", &pib2);
   printf(" area: ", &area2);
   printf(" o codigo da carta: ", codigodacarta2);
   printf (" ensidade populacional: %f ", densidadepopulacional2);
  printf(" O Pib Per Capita: %f ", pibpercapita2);

   densidadepopulacional2 = populacao2 / area2;
   pibpercapita2 = pib2 / populacao2;

   super_poder2 = populacao2 + area2 + pib2 + pibpercapita2 + densidadepopulacional2;  

   printf ("----- Resultado -----");

   if (super_poder1> super_poder2)
   { printf ("                CARTA 1 VENCEU \n              ");
    
   } else if (super_poder2>super_poder1)
   {printf ("                CARTA 2 VENCEU \n              ");
    
   } else printf (" EMPATE \n ");
   
   
  return 0;
}

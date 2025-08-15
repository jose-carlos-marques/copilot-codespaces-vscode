#include<stdio.h>

int main(){

    int populacao, pontosturisticos;
    double pib,area;
    char estado [60];
    char codigodacarta[60];
    char nomedacidade[60];

    printf("Digite o nome da cidade: \n ");
    scanf ("%59s",  nomedacidade);

    printf ("Digite os Pontos Turisticos da Cidade: \n ");
    scanf ("%d", &pontosturisticos);
    
    printf ("Digite o Estado: ");
    scanf("%59s", estado);

    printf("Digite o numero de populacao da cidade: \n ");
    scanf ("%d", &populacao);

    printf ("Digite o Pib da cidade: \n ");
    scanf("%e", &pib);

    printf("Digite a Area da cidade: \n ");
    scanf("%e", &area);
 
   printf("Digite o Codigo da Carta: \n ");
   scanf("%59s", &codigodacarta);

   printf ("Nome da cidade: %59s",  nomedacidade);
   printf("Pontos turisticos: %d", pontosturisticos);
   printf("estado: %59s", estado);
   printf("populacao: %d", populacao);
   printf("pib:", &pib);
   printf("area:", &area);
   printf("o codigo da carta:", codigodacarta);

return 0;

}
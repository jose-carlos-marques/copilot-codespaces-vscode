#include <stdio.h>

void movercavalo (int casas)
{ 
if (casas > 0)
{
  printf ("Bispo se Mexeu na Diagonal \n");
  movercavalo(casas - 1);
}
}
  int main (){
    movercavalo (3);
for (int i = 0; i < 5; i++)
{
  printf("Torre se Mexeu Para a Direita\n");
}
int movimentocompleto = 1;
while (movimentocompleto -- )
{
  for (int i = 0; i < 2; i++)
  {
    printf ("Cavalo foi para Cima\n");
  }
  printf ("Cavalo foi para a Direita\n");
}




                                                    
return 0;
}

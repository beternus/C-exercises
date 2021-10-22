#include <stdio.h>
#include <stdlib.h>

//********Corpo de Programa********
int main()
{
    int matriz [3][3];
    int linha, coluna;

for(linha=0; linha<3; linha++)
{
    for(coluna=0; coluna<3; coluna++)
    { 
        printf("Digite um numero");
        scanf("%d", &matriz[linha][coluna]);
    }
}
   printf ("\n\n"); 
for(linha=0; linha<3; linha++)
{
    for(coluna=0; coluna<3; coluna++)
        { 
        printf("%3d", matriz[linha][coluna]);
        }
   printf ("\n");     
} 
   printf ("\n\n\n");    
system("pause");
}

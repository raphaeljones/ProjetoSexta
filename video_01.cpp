// NOME: LUCAS DA SILVA DECARLI MIRANDA
// RA: 2216110541
// NOME: GUILHERME GONÇALVES
// RA: 2216110797
// NOME: RAPHAEL AMAJONES
// RA: 2216109391

#include <stdio.h>
#include <stdlib.h>
    
    int main(void){
    int a, b, aux;
    printf("Digite o valor A\n");
    scanf("%d", &a);
    printf("Digite o valor B\n");
    scanf("%d", &b);
    printf("A = %d B = %d\n", a, b);
    aux = a;
    a = b;
    b = aux;
    
    /* Para fazer a troca de valores entre variaveis, precisariamos de mais uma variavel, essa variavel será a responsavel por fazer o serviço armazenando
    valores temporarios*/
    
    // 1 - Valor da variavel A seria armazenado na variavel AUX.
    // 2 - Valor da variavel B seria armazenado na variavel A.
    // 3 - Valor da variavel AUX seria armazenado na variavel B.
    
    printf("\nRESULTADO\n\n");
    printf("A = %d B = %d\n", a, b);
    return 0;
   }

// NOME: LUCAS DA SILVA DECARLI MIRANDA
// RA: 2216110541
// NOME: GUILHERME GONÇALVES
// RA: 2216110797
// NOME: RAPHAEL AMAJONES
// RA: 2216109391

#include <stdio.h>
#include <stdlib.h>

void SOMA (float a, float b) { // FUNÇÃO QUE EFETUA A SOMA DOS VALORES INSERIDOS
   float resultado;
   resultado = a + b;
   printf("A soma de %f com %f eh %f\n", a, b, resultado); 
}

int main(){
    float a, b;
    
    printf("Digite o primeiro valor para soma\n");
    scanf("%f", &a);
    printf("Digite o segundo valor para soma\n");
    scanf("%f", &b);
    
    SOMA(a,b);

    return 0;
}

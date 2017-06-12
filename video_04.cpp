// NOME: LUCAS DA SILVA DECARLI MIRANDA
// RA: 2216110541
// NOME: GUILHERME GONÇALVES
// RA: 2216110797
// NOME: RAPHAEL AMAJONES
// RA: 2216109391

#include <stdio.h>
#include <stdlib.h>
#define TAM 7

int main(void){
  int vetor[TAM],
      x = 0,
      y = 0,
      aux = 0;      
  
  for( x = 0; x < TAM; x++ ) {
    printf("Entre com um inteiro para vetor[%d]: ",x);
    scanf("%d",&aux);
    vetor[x] = aux;
  }
  
  // coloca em ordem crescente (1,2,3,4,5...)  
  for( x = 0; x < TAM; x++ ){
    for( y = x + 1; y < TAM; y++ ){ // sempre 1 elemento à frente
      // se o (x > (x+1)) então o x passa pra frente (ordem crescente)
      if ( vetor[x] > vetor[y] ){
         aux = vetor[x];
         vetor[x] = vetor[y];
         vetor[y] = aux;
      }
    }
  } // fim da ordenação
  
  // exibe elementos ordenados   
  printf("Elementos ordenados (Crescente):\n");
  
  for( x = 0; x < TAM; x++ ){
    printf("vetor[%d] = %d\n",x,vetor[x]); // exibe o vetor ordenado
  }  
  
  // coloca em ordem decrescente (10,9,8,7...)
  for( x = 0; x < TAM; x++ ){
    for( y = x + 1; y < TAM; y++ ){ // sempre 1 elemento à frente
      if ( vetor[y] > vetor[x]){
         aux = vetor[y];
         vetor[y] = vetor[x];
         vetor[x] = aux;
      }
    }
  } // fim da ordenação
  
  // exibe elementos ordenados
  printf("Elementos ordenados (Decrescente):\n");
  
  for( x = 0; x < TAM; x++ ){
    printf("vetor[%d] = %d\n",x,vetor[x]); // exibe o vetor ordenado
  }
 
  system("pause");
  return 0;
}

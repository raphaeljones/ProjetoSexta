// NOME: LUCAS DA SILVA DECARLI MIRANDA
// RA: 2216110541
// NOME: GUILHERME GONÇALVES
// RA: 2216110797
// NOME: RAPHAEL AMAJONES
// RA: 2216109391

#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int x, y;
	
	printf("Informe quantas atividades voce faz no seu dia:\n");
	scanf("%d", &x);
	printf("Informe o total do tempo gasto das atividade informadas acima\n");
	printf("Informar tempo em MINUTOS:\n");
	scanf("%d", &y);
	
	if(x <= 3 && y <= 75){
		printf("Faca cada atividade com o tempo de 25 minutos e descanco de 5 minutos para iniciar proxima atividade\n");
	}
	else
		printf("Faca cada atividade com o tempo de 25 minutos e descanco de 15 a 30 minutos para iniciar proxima atividade\n");

	return 0;
}

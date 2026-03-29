#include <string.h>
#include <stdlib.h>
#include <stdio.h>

struct jogador{
int vida;
float dinheiro;
char nome[35];
char habilidade[50];


};
int main(){
	int menu;
 
	printf("crie seu personagem\n");
	printf("digite a vida\n");
	struct jogador j1 = {0, 200, "null", "null"};
	scanf("%d", &j1.vida);
	printf("digite seu nome\n");
	scanf("%s", &j1.nome);
	system("clear");
	printf("Escolha uma habilidade(digite um numero)\n");
	

	printf("1- Furtividade\n");
	printf("2- Habilidade com armas\n");
	printf("3- Mecanico\n");
	printf("4- Cozinheiro\n");
scanf("%d", &menu);
	switch(menu){
	case 1:
            strcpy(j1.habilidade, "Furtivo");
            break;
        case 2:
            strcpy(j1.habilidade, "Mecanico");
            break;
        case 3:
            strcpy(j1.habilidade, "Habilidade com armas");
            break;
        case 4:
            strcpy(j1.habilidade, "Cozinheiro");
            break;

	default:
printf("invalido.\n");
	}
	system("clear");
printf("Vida: %d\n", j1.vida);
printf("Dinheiro: %f\n", j1.dinheiro);
printf("Nome: %s\n", j1.nome);
printf("Habilidade: %s\n", j1.habilidade);

char tecla;
printf("Continuar? (sim)\n");
scanf(" %c", &tecla);
printf("a");
return 0;
}


#include <stdio.h>

int main(void) {
	int menu, menu2;
	printf("---------------\n");
	printf("QUAL VOCE PREFERE??\n");
	printf("---------------\n");
	
	printf("1- BELINHA\n");

	printf("2- PIROCOTO\n");

	printf("3- JOAO\n");

	scanf_s("%d", &menu);
	switch (menu) {
	case 1:
		
		printf("Porque belinha?\n\n");
		printf("1 Pq ela e safada\n");
		printf("2 n sei\n");
		scanf_s("%d", &menu2);

		switch (menu2) {
		case 1:
			printf("JACK DO CARALHO");
			break;

		case 2:
			printf("ok fodase");
			break;
		}
		break;





	case 2:
		printf("PORQUE PIROCOTO?\n\n");
		printf("1 Pq ele e nazista\n");
		printf("2 PQ ELE E HOT\n");
		scanf_s("%d", &menu2);

		switch (menu2) {
		case 1:
			printf("ta certo mano");
			break;

		case 2:
			printf("tu e racista ze?");
			break;
		}
		break;



//c é top demais
	case 3:
		printf("PQ JOAO??\n\n");
		printf("1- ELE E CUTE\n");
		printf("2 - ELE fede a mrd\n");
		scanf_s("%d", &menu2);

		switch (menu2) {
		case 1:
			printf("omg thanks");
			break;

		case 2:
			printf("vc seu mrd");
			break;
		}
		break;
			
	}

	}

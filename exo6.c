#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include <ctype.h>
#define SIZE 100

int main() {

	int Tab[SIZE];
	int nbvalr;
	int valr = 0;
	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) {
		Tab[i] = (int)rand() % 100;
	}

	printf("Entrez la valeur à chercher : ");
	scanf_s("%d", &nbvalr);

	int* curseur = &Tab[0];

	for (int i = 0; i < SIZE; i++) {
		if (*curseur == nbvalr && valr == 0) {
			printf("\nLa valeurs %d trouvee en %d", nbvalr, i);
			valr = 1;
		}
		else if ((*curseur == nbvalr && valr == 1)) {
			printf(", puis en %d", i);
		}
		curseur++;
	}

	if (valr == 0) { printf("\nLa valeur n'est pas dans le tableau.\n"); }
	else { printf("."); }

}
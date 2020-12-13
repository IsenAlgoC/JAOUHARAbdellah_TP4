#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20

void main() {

	int MyTab1[TAILLETAB1];

	for (int i = 0; i < TAILLETAB1; i++) {
		MyTab1[i] = i + 1;
		printf(" %d %c ", MyTab1[i], SEPARATEUR);
	}

	int* MyPtr1 = NULL;
	MyPtr1 = MyTab1 + TAILLETAB1 - 1;
	printf("\n");
	for (int i = 0; i < TAILLETAB1; i++) {
		printf(" %d %c ", *MyPtr1, SEPARATEUR);
		MyPtr1--;

	}
}

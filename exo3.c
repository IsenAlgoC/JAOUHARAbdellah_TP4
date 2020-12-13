#include <stdio.h>
#include <stdlib.h>
#include <conio.h>





int main() {

	char prenom[20];
	char nom[20];

	printf_s("Quel est votre nom ? ");
	scanf_s("%s", nom, _countof(nom));					

	printf_s("Quel est votre prenom : ");
	scanf_s("%s", prenom, _countof(prenom));			


	printf_s("Quel est votre sexe ? (H ou F) : ");

	if (_getch() == 'H') {
		printf_s(" \nMonsieur ");						
	}
	else {
		printf_s(" \nMadame ");							
	}

	printf_s("%s ", nom);
	printf_s("%s", prenom);


}
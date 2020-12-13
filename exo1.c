#include <stdlib.h>
#include <stdio.h>
#include"tp4.h"
#include <conio.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20


int main() {

	HEURE HeureDebut, HeureFin, Duree;
	HeureDebut.heure = 12; HeureDebut.minute = 30;
	Duree.heure = 00; Duree.minute = 45;

	HeureFin.heure = HeureDebut.heure + Duree.heure;
	if (HeureFin.heure >= 24) {
		HeureFin.heure -= 24;
	}

	HeureFin.minute = HeureDebut.minute + Duree.minute;
	while (HeureFin.minute >= 60) {
		HeureFin.minute = HeureFin.minute % 60;
		HeureFin.heure += 1;
	}

	printf("la nouvelle heure est : %d %d", HeureFin.heure, HeureFin.minute);
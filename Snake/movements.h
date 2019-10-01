#pragma once
#include <conio.h>
#include <Windows.h>

char startingmove(int startmove, char currentmove, int* xaxis, int* yaxis, int snakelength, char character) {
	startmove = _getch();
	if (startmove == 224) {
		startmove = _getch();
		if (startmove == RIGHT) {
			for (int l = 0; l < snakelength; l++) {
				printchar(*xaxis - l, *yaxis, character);
			}
			currentmove = 'r';
		}
		else if (startmove == LEFT) {
			for (int l = 0; l < snakelength; l++) {
				printchar(*xaxis + l, *yaxis, character);
			}
			currentmove = 'l';
		}
		else if (startmove == UP) {
			for (int l = 0; l < snakelength; l++) {
				printchar(*xaxis, *yaxis + l, character);
			}
			currentmove = 'u';
		}
		else if (startmove == DOWN) {
			for (int l = 0; l < snakelength; l++) {
				printchar(*xaxis, *yaxis - l, character);
			}
			currentmove = 'd';
		}
	}
	return currentmove;
}
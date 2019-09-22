#pragma once
#include <conio.h>
#include <Windows.h>

char startingmove(int startmove, char currentmove, int *xaxis, int *yaxis, int snakelength) {
	startmove = _getch();
	if (startmove == 224) {
		startmove = _getch();
		if (startmove == RIGHT) {
			printf("right\n");
			int character3 = 0;
			for (int l = 0; l < snakelength; l++) {
				printchar(*xaxis + character3, *yaxis, '*');
				character3++;
			}
			currentmove = 'r';
		}
		else if (startmove == LEFT) {
			printf("left\n");
			int character4 = 0;
			for (int l = 0; l < snakelength; l++) {
				printchar(*xaxis - character4, *yaxis, '*');
				character4++;
			}
			currentmove = 'l';
		}
		else if (startmove == UP) {
			printf("up\n");
			int character1 = 0;
			for (int l = 0; l < snakelength; l++) {
				printchar(*xaxis, *yaxis - character1, '*');
				character1++;
			}
			currentmove = 'u';
		}
		else if (startmove == DOWN) {
			printf("down\n");
			int character2 = 0;
			for (int l = 0; l < snakelength; l++) {
				printchar(*xaxis, *yaxis + character2, '*');
				character2++;
			}
			currentmove = 'd';
		}
	}
	return currentmove;
}


void rightmove(int *xaxis, int *yaxis, int snakelength) {
	printchar(*xaxis, *yaxis, ' ');
	printchar(*xaxis + snakelength, *yaxis, '*');
	(*xaxis)++;
	Sleep(500);
}


void leftmove(int *xaxis, int *yaxis, int snakelength) {
	printchar(*xaxis, *yaxis, ' ');
	printchar(*xaxis - snakelength, *yaxis, '*');
	(*xaxis)--;
	Sleep(500);
}


void upmove(int *xaxis, int *yaxis, int snakelength) {
	printchar(*xaxis, *yaxis, ' ');
	printchar(*xaxis, *yaxis - snakelength, '*');
	(*yaxis)--;
	Sleep(500);
}


void downmove(int *xaxis, int *yaxis, int snakelength) {
	printchar(*xaxis, *yaxis, ' ');
	printchar(*xaxis, *yaxis + snakelength, '*');
	(*yaxis)++;
	Sleep(500);
}
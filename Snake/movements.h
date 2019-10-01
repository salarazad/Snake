#pragma once
#include <conio.h>
#include <Windows.h>
#include <time.h>

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


void fruitlocation(int *fruitxaxis, int *fruityaxis, char fruit) {
	int layoutxaxismin = 23;                        //it is 22
	int layoutxaxismax = 99;                       //it is 100
	int layoutyaxismin = 4;                         //it is 3
	int layoutyaxismax = 25;                        //it is 26
	srand(time(0));
	do {
		*fruitxaxis = rand();
	} while (*fruitxaxis < layoutxaxismin || *fruitxaxis > layoutxaxismax);
	do {
		*fruityaxis = rand();
	} while (*fruityaxis < layoutyaxismin || *fruityaxis > layoutyaxismax);
	//printf("fruitx: %d\n", *fruitxaxis);
	//printf("fruity: %d\n", *fruityaxis);
	printchar(*fruitxaxis, *fruityaxis, fruit);
}


void snakemovement(int xaxis1, int yaxis1, int xaxis2, int yaxis2, int xaxis3, int yaxis3, int xaxis4, int yaxis4, int xaxis5, int yaxis5, int xaxis6, int yaxis6, int xaxis7, int yaxis7, int xaxis8, int yaxis8, int xaxis9, int yaxis9, int xaxis10, int yaxis10, int xaxis11, int yaxis11, int xaxis12, int yaxis12, int xaxis13, int yaxis13, int snakelength, char character) {
	switch (snakelength) {
	case 1: printchar(xaxis1, yaxis1, character); break;
	case 2: printchar(xaxis1, yaxis1, character); printchar(xaxis2, yaxis2, character); break;
	case 3: printchar(xaxis1, yaxis1, character); printchar(xaxis2, yaxis2, character); printchar(xaxis3, yaxis3, character); clear(xaxis4, yaxis4, 1); break;
	case 4: printchar(xaxis1, yaxis1, character); printchar(xaxis2, yaxis2, character); printchar(xaxis3, yaxis3, character); printchar(xaxis4, yaxis4, character); clear(xaxis5, yaxis5, 1); break;
	case 5: printchar(xaxis1, yaxis1, character); printchar(xaxis2, yaxis2, character); printchar(xaxis3, yaxis3, character); printchar(xaxis4, yaxis4, character); printchar(xaxis5, yaxis5, character); clear(xaxis6, yaxis6, 1); break;
	case 6: printchar(xaxis1, yaxis1, character); printchar(xaxis2, yaxis2, character); printchar(xaxis3, yaxis3, character); printchar(xaxis4, yaxis4, character); printchar(xaxis5, yaxis5, character); printchar(xaxis6, yaxis6, character); clear(xaxis7, yaxis7, 1); break;
	case 7: printchar(xaxis1, yaxis1, character); printchar(xaxis2, yaxis2, character); printchar(xaxis3, yaxis3, character); printchar(xaxis4, yaxis4, character); printchar(xaxis5, yaxis5, character); printchar(xaxis6, yaxis6, character); printchar(xaxis7, yaxis7, character); clear(xaxis8, yaxis8, 1); break;
	case 8: printchar(xaxis1, yaxis1, character); printchar(xaxis2, yaxis2, character); printchar(xaxis3, yaxis3, character); printchar(xaxis4, yaxis4, character); printchar(xaxis5, yaxis5, character); printchar(xaxis6, yaxis6, character); printchar(xaxis7, yaxis7, character); printchar(xaxis8, yaxis8, character); clear(xaxis9, yaxis9, 1); break;
	case 9: printchar(xaxis1, yaxis1, character); printchar(xaxis2, yaxis2, character); printchar(xaxis3, yaxis3, character); printchar(xaxis4, yaxis4, character); printchar(xaxis5, yaxis5, character); printchar(xaxis6, yaxis6, character); printchar(xaxis7, yaxis7, character); printchar(xaxis8, yaxis8, character); printchar(xaxis9, yaxis9, character); clear(xaxis10, yaxis10, 1); break;
	case 10: printchar(xaxis1, yaxis1, character); printchar(xaxis2, yaxis2, character); printchar(xaxis3, yaxis3, character); printchar(xaxis4, yaxis4, character); printchar(xaxis5, yaxis5, character); printchar(xaxis6, yaxis6, character); printchar(xaxis7, yaxis7, character); printchar(xaxis8, yaxis8, character); printchar(xaxis9, yaxis9, character); printchar(xaxis10, yaxis10, character); clear(xaxis11, yaxis11, 1); break;
	case 11: printchar(xaxis1, yaxis1, character); printchar(xaxis2, yaxis2, character); printchar(xaxis3, yaxis3, character); printchar(xaxis4, yaxis4, character); printchar(xaxis5, yaxis5, character); printchar(xaxis6, yaxis6, character); printchar(xaxis7, yaxis7, character); printchar(xaxis8, yaxis8, character); printchar(xaxis9, yaxis9, character); printchar(xaxis10, yaxis10, character); printchar(xaxis11, yaxis11, character); clear(xaxis12, yaxis12, 1); break;
	case 12: printchar(xaxis1, yaxis1, character); printchar(xaxis2, yaxis2, character); printchar(xaxis3, yaxis3, character); printchar(xaxis4, yaxis4, character); printchar(xaxis5, yaxis5, character); printchar(xaxis6, yaxis6, character); printchar(xaxis7, yaxis7, character); printchar(xaxis8, yaxis8, character); printchar(xaxis9, yaxis9, character); printchar(xaxis10, yaxis10, character); printchar(xaxis11, yaxis11, character); printchar(xaxis12, yaxis12, character); clear(xaxis13, yaxis13, 1); break;
	default: break;
	}
}

#include <iostream>
#include <stdio.h>
#include "myheader.h"
#include "layout.h"
#include "movements.h"
#include <Windows.h>
#include <conio.h>
#include <time.h>

int main()
{
	printstr(55, 2, "Snake with C++");
	layout();

	int xaxis1, xaxis1old, xaxis2, xaxis2old, xaxis3, xaxis3old, xaxis4, xaxis4old, xaxis5, xaxis5old, xaxis6, xaxis6old, xaxis7, xaxis7old, xaxis8, xaxis8old, xaxis9, xaxis9old, xaxis10, xaxis10old, xaxis11, xaxis11old, xaxis12, xaxis12old;
	int yaxis1, yaxis1old, yaxis2, yaxis2old, yaxis3, yaxis3old, yaxis4, yaxis4old, yaxis5, yaxis5old, yaxis6, yaxis6old, yaxis7, yaxis7old, yaxis8, yaxis8old, yaxis9, yaxis9old, yaxis10, yaxis10old, yaxis11, yaxis11old, yaxis12, yaxis12old;

	xaxis1 = 55;
	yaxis1 = 15;
	char character = '^';
	int snakelength = 3;
	
	


	int startmove = 23;                      //need to be initialized before passing it to a function
	char currentmove = 'c';                  //same as above
	char lastmove;
	int move = 4;

	//first move, which direction
	currentmove = startingmove(startmove, currentmove, &xaxis1, &yaxis1, snakelength, character);
	Sleep(500);

	//specify the snake points locations, point by point
	switch (currentmove)
	{
		case 'r': xaxis1old = xaxis1;  xaxis2 = xaxis1 - 1; xaxis2old = xaxis2; xaxis3 = xaxis2 - 1; xaxis3old = xaxis3; xaxis4 = xaxis3 - 1; yaxis1old = yaxis1; yaxis2 = yaxis1; yaxis2old = yaxis2; yaxis3 = yaxis2; yaxis3old = yaxis3; yaxis4 = yaxis3; break;
		case 'l': xaxis1old = xaxis1;  xaxis2 = xaxis1 + 1; xaxis2old = xaxis2; xaxis3 = xaxis2 + 1; xaxis3old = xaxis3; xaxis4 = xaxis3 + 1; yaxis1old = yaxis1; yaxis2 = yaxis1; yaxis2old = yaxis2; yaxis3 = yaxis2; yaxis3old = yaxis3; yaxis4 = yaxis3; break;
		case 'u': xaxis1old = xaxis1;  xaxis2 = xaxis1; xaxis2old = xaxis2; xaxis3 = xaxis2; xaxis3old = xaxis3; xaxis4 = xaxis3; yaxis1old = yaxis1; yaxis2 = yaxis1 + 1; yaxis2old = yaxis2; yaxis3 = yaxis2 + 1; yaxis3old = yaxis3; yaxis4 = yaxis3 + 1; break;
		case 'd': xaxis1old = xaxis1;  xaxis2 = xaxis1; xaxis2old = xaxis2; xaxis3 = xaxis2; xaxis3old = xaxis3; xaxis4 = xaxis3; yaxis1old = yaxis1; yaxis2 = yaxis1 - 1; yaxis2old = yaxis2; yaxis3 = yaxis2 - 1; yaxis3old = yaxis3; yaxis4 = yaxis3 - 1; break;
		default: break;
	}

	while (1) {
		move = _getch();
		if (move == 224) {
			move = _getch();
			switch (move) {
			case RIGHT: xaxis1++; break;
			case LEFT: xaxis1--; break;
			case UP: yaxis1--; break;
			case DOWN: yaxis1++; break;
			default: break;
			}
			xaxis2 = xaxis1old;
			xaxis3 = xaxis2old;
			xaxis4 = xaxis3old;
			yaxis2 = yaxis1old;
			yaxis3 = yaxis2old;
			yaxis4 = yaxis3old;
			switch (snakelength) {
			case 1: printchar(xaxis1, yaxis1, character); break;
			case 2: printchar(xaxis1, yaxis1, character); printchar(xaxis2, yaxis2, character); break;
			case 3: printchar(xaxis1, yaxis1, character); printchar(xaxis2, yaxis2, character); printchar(xaxis3, yaxis3, character); clear(xaxis4, yaxis4, 1); break;
			default: break;
			}
			Sleep(500);
			xaxis1old = xaxis1;
			xaxis2old = xaxis2;
			xaxis3old = xaxis3;
			yaxis1old = yaxis1;
			yaxis2old = yaxis2;
			yaxis3old = yaxis3;
		}
	}

}
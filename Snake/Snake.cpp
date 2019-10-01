
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

	int xaxis1, xaxis1old, xaxis2, xaxis2old, xaxis3, xaxis3old, xaxis4, xaxis4old, xaxis5, xaxis5old, xaxis6, xaxis6old, xaxis7, xaxis7old, xaxis8, xaxis8old, xaxis9, xaxis9old, xaxis10, xaxis10old, xaxis11, xaxis11old, xaxis12, xaxis12old, xaxis13;
	int yaxis1, yaxis1old, yaxis2, yaxis2old, yaxis3, yaxis3old, yaxis4, yaxis4old, yaxis5, yaxis5old, yaxis6, yaxis6old, yaxis7, yaxis7old, yaxis8, yaxis8old, yaxis9, yaxis9old, yaxis10, yaxis10old, yaxis11, yaxis11old, yaxis12, yaxis12old, yaxis13;

	//basics
	xaxis1 = 55;
	yaxis1 = 15;
	char character = '^';
	int snakelength = 3;
	
	//Food mark replacement
	char fruit = 'F';
	int fruitxaxis;
	int fruityaxis;
	fruitlocation(&fruitxaxis, &fruityaxis, fruit);


	//moves inputs
	int startmove = 23;                      //need to be initialized before passing it to a function
	char currentmove = 'c';                  //same as above
	int move = 4;

	int layoutxaxismin = 22;                        //it is 22
	int layoutxaxismax = 100;                       //it is 100
	int layoutyaxismin = 3;                         //it is 3
	int layoutyaxismax = 26;                        //it is 26

	//first move, which direction
	currentmove = startingmove(startmove, currentmove, &xaxis1, &yaxis1, snakelength, character);
	Sleep(250);

	//specify the snake points locations, point by point
	switch (currentmove)
	{
		case 'r': xaxis1old = xaxis1; xaxis2 = xaxis1 - 1; xaxis2old = xaxis2; xaxis3 = xaxis2 - 1; xaxis3old = xaxis3; xaxis4 = xaxis3 - 1; xaxis4old = xaxis4; xaxis5 = xaxis4 - 1; xaxis5old = xaxis5; xaxis6 = xaxis5 - 1; xaxis6old = xaxis6; xaxis7 = xaxis6 - 1; xaxis7old = xaxis7; xaxis8 = xaxis7 - 1; xaxis8old = xaxis8; xaxis9 = xaxis8 - 1; xaxis9old = xaxis9; xaxis10 = xaxis9 - 1; xaxis10old = xaxis10; xaxis11 = xaxis10 - 1; xaxis11old = xaxis11; xaxis12 = xaxis11 - 1; xaxis12old = xaxis12; xaxis13 = xaxis12 - 1; yaxis1old = yaxis1; yaxis2 = yaxis1; yaxis2old = yaxis2; yaxis3 = yaxis2; yaxis3old = yaxis3; yaxis4 = yaxis3; yaxis4old = yaxis4; yaxis5 = yaxis4; yaxis5old = yaxis5; yaxis6 = yaxis5; yaxis6old = yaxis6; yaxis7 = yaxis6; yaxis7old = yaxis7; yaxis8 = yaxis7; yaxis8old = yaxis8; yaxis9 = yaxis8; yaxis9old = yaxis9; yaxis10 = yaxis9; yaxis10old = yaxis10; yaxis11 = yaxis10; yaxis11old = yaxis11; yaxis12 = yaxis11; yaxis12old = yaxis12; yaxis13 = yaxis12; break;
		case 'l': xaxis1old = xaxis1; xaxis2 = xaxis1 + 1; xaxis2old = xaxis2; xaxis3 = xaxis2 + 1; xaxis3old = xaxis3; xaxis4 = xaxis3 + 1; xaxis4old = xaxis4; xaxis5 = xaxis4 + 1; xaxis5old = xaxis5; xaxis6 = xaxis5 + 1; xaxis6old = xaxis6; xaxis7 = xaxis6 + 1; xaxis7old = xaxis7; xaxis8 = xaxis7 + 1; xaxis8old = xaxis8; xaxis9 = xaxis8 + 1; xaxis9old = xaxis9; xaxis10 = xaxis9 + 1; xaxis10old = xaxis10; xaxis11 = xaxis10 + 1; xaxis11old = xaxis11; xaxis12 = xaxis11 + 1; xaxis12old = xaxis12; xaxis13 = xaxis12 + 1; yaxis1old = yaxis1; yaxis2 = yaxis1; yaxis2old = yaxis2; yaxis3 = yaxis2; yaxis3old = yaxis3; yaxis4 = yaxis3; yaxis4old = yaxis4; yaxis5 = yaxis4; yaxis5old = yaxis5; yaxis6 = yaxis5; yaxis6old = yaxis6; yaxis7 = yaxis6; yaxis7old = yaxis7; yaxis8 = yaxis7; yaxis8old = yaxis8; yaxis9 = yaxis8; yaxis9old = yaxis9; yaxis10 = yaxis9; yaxis10old = yaxis10; yaxis11 = yaxis10; yaxis11old = yaxis11; yaxis12 = yaxis11; yaxis12old = yaxis12; yaxis13 = yaxis12; break;
		case 'u': xaxis1old = xaxis1; xaxis2 = xaxis1; xaxis2old = xaxis2; xaxis3 = xaxis2; xaxis3old = xaxis3; xaxis4 = xaxis3; xaxis4old = xaxis4; xaxis5 = xaxis4; xaxis5old = xaxis5; xaxis6 = xaxis5; xaxis6old = xaxis6; xaxis7 = xaxis6; xaxis7old = xaxis7; xaxis8 = xaxis7; xaxis8old = xaxis8; xaxis9 = xaxis8; xaxis9old = xaxis9; xaxis10 = xaxis9; xaxis10old = xaxis10; xaxis11 = xaxis10; xaxis11old = xaxis11; xaxis12 = xaxis11; xaxis12old = xaxis12; xaxis13 = xaxis12; yaxis1old = yaxis1; yaxis2 = yaxis1 + 1; yaxis2old = yaxis2; yaxis3 = yaxis2 + 1; yaxis3old = yaxis3; yaxis4 = yaxis3 + 1; yaxis4old = yaxis4; yaxis5 = yaxis4 + 1; yaxis5old = yaxis5; yaxis6 = yaxis5 + 1; yaxis6old = yaxis6; yaxis7 = yaxis6 + 1; yaxis7old = yaxis7; yaxis8 = yaxis7 + 1; yaxis8old = yaxis8; yaxis9 = yaxis8 + 1; yaxis9old = yaxis9; yaxis10 = yaxis9 + 1; yaxis10old = yaxis10; yaxis11 = yaxis10 + 1; yaxis11old = yaxis11; yaxis12 = yaxis11 + 1; yaxis12old = yaxis12; yaxis13 = yaxis12 + 1; break;
		case 'd': xaxis1old = xaxis1; xaxis2 = xaxis1; xaxis2old = xaxis2; xaxis3 = xaxis2; xaxis3old = xaxis3; xaxis4 = xaxis3; xaxis4old = xaxis4; xaxis5 = xaxis4; xaxis5old = xaxis5; xaxis6 = xaxis5; xaxis6old = xaxis6; xaxis7 = xaxis6; xaxis7old = xaxis7; xaxis8 = xaxis7; xaxis8old = xaxis8; xaxis9 = xaxis8; xaxis9old = xaxis9; xaxis10 = xaxis9; xaxis10old = xaxis10; xaxis11 = xaxis10; xaxis11old = xaxis11; xaxis12 = xaxis11; xaxis12old = xaxis12; xaxis13 = xaxis12; yaxis1old = yaxis1; yaxis2 = yaxis1 - 1; yaxis2old = yaxis2; yaxis3 = yaxis2 - 1; yaxis3old = yaxis3; yaxis4 = yaxis3 - 1; yaxis4old = yaxis4; yaxis5 = yaxis4 - 1; yaxis5old = yaxis5; yaxis6 = yaxis5 - 1; yaxis6old = yaxis6; yaxis7 = yaxis6 - 1; yaxis7old = yaxis7; yaxis8 = yaxis7 - 1; yaxis8old = yaxis8; yaxis9 = yaxis8 - 1; yaxis9old = yaxis9; yaxis10 = yaxis9 - 1; yaxis10old = yaxis10; yaxis11 = yaxis10 - 1; yaxis11old = yaxis11; yaxis12 = yaxis11 - 1; yaxis12old = yaxis12; yaxis13 = yaxis12 - 1; break;
		default: break;
	}

	while (move != 0x1B) {
		if (!_kbhit()) {
			switch (currentmove) {
				case 'r': xaxis1++; currentmove = 'r'; break;
				case 'l': xaxis1--; currentmove = 'l'; break;
				case 'u': yaxis1--; currentmove = 'u'; break;
				case 'd': yaxis1++; currentmove = 'd'; break;
				default: break;
			}
		}
		if (_kbhit()) {
			move = _getch();
			if (move == 224) {
				move = _getch();
				switch (move) {
					case RIGHT: xaxis1++; currentmove = 'r'; break;
					case LEFT: xaxis1--; currentmove = 'l'; break;
					case UP: yaxis1--; currentmove = 'u'; break;
					case DOWN: yaxis1++; currentmove = 'd'; break;
					default: break;
				}
			}
		}
		
		//the snake movement actions
		xaxis2 = xaxis1old; xaxis3 = xaxis2old; xaxis4 = xaxis3old; xaxis5 = xaxis4old; xaxis6 = xaxis5old; xaxis7 = xaxis6old; xaxis8 = xaxis7old; xaxis9 = xaxis8old; xaxis10 = xaxis9old; xaxis11 = xaxis10old; xaxis12 = xaxis11old; xaxis13 = xaxis12old; yaxis2 = yaxis1old; yaxis3 = yaxis2old; yaxis4 = yaxis3old; yaxis5 = yaxis4old; yaxis6 = yaxis5old; yaxis7 = yaxis6old; yaxis8 = yaxis7old; yaxis9 = yaxis8old; yaxis10 = yaxis9old; yaxis11 = yaxis10old; yaxis12 = yaxis11old; yaxis13 = yaxis12old;
		snakemovement(xaxis1, yaxis1, xaxis2, yaxis2, xaxis3, yaxis3, xaxis4, yaxis4, xaxis5, yaxis5, xaxis6, yaxis6, xaxis7, yaxis7, xaxis8, yaxis8, xaxis9, yaxis9, xaxis10, yaxis10, xaxis11, yaxis11, xaxis12, yaxis12, xaxis13, yaxis13, snakelength, character);
		Sleep(250);	
		xaxis1old = xaxis1; xaxis2old = xaxis2; xaxis3old = xaxis3; xaxis4old = xaxis4; xaxis5old = xaxis5; xaxis6old = xaxis6; xaxis7old = xaxis7; xaxis8old = xaxis8; xaxis9old = xaxis9; xaxis10old = xaxis10; xaxis11old = xaxis11; xaxis12old = xaxis12; yaxis1old = yaxis1; yaxis2old = yaxis2; yaxis3old = yaxis3; yaxis4old = yaxis4; yaxis5old = yaxis5; yaxis6old = yaxis6; yaxis7old = yaxis7; yaxis8old = yaxis8; yaxis9old = yaxis9; yaxis10old = yaxis10; yaxis11old = yaxis11; yaxis12old = yaxis12;

		if (xaxis1 == fruitxaxis && yaxis1 == fruityaxis) {
			snakelength++;
			fruitlocation(&fruitxaxis, &fruityaxis, fruit);
		}
		if (xaxis1 == layoutxaxismin || xaxis1 == layoutxaxismax || yaxis1 == layoutyaxismin || yaxis1 == layoutyaxismax) {
			printf("Sorry you lost! you hit the wall."); break;
		}
	}

}
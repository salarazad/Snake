
#include <iostream>
#include <stdio.h>
#include "myheader.h"
#include "layout.h"
#include "movements.h"
#include <Windows.h>
#include <conio.h>

int main()
{
    //std::cout << "Hello World!\n";

	printstr(55, 2, "Snake with C++");
	layout();

	int xaxis = 55;
	int yaxis = 15;
	int snakelength = 3;

	int startmove = 23;                      //need to be initialized before passing it to a function
	char currentmove = 'c';                  //same as above
	char lastmove;
	int move = 4;

	currentmove = startingmove(startmove, currentmove, &xaxis, &yaxis, snakelength);


	while (move != 0x1B) {
		while (!_kbhit()) {
			switch (currentmove) {
				case 'r': rightmove(&xaxis, &yaxis, snakelength); break;
				case 'l': leftmove(&xaxis, &yaxis, snakelength); break;
				case 'u': upmove(&xaxis, &yaxis, snakelength); break;
				case 'd': downmove(&xaxis, &yaxis, snakelength); break;
			}
		}
		if (_kbhit()) {
			move = _getch();
			if (move == 224) {
				move = _getch();
				switch (move) {
				case RIGHT: rightmove(&xaxis, &yaxis, snakelength); break;
				case LEFT: leftmove(&xaxis, &yaxis, snakelength); break;
				case UP: upmove(&xaxis, &yaxis, snakelength); break;
				case DOWN: downmove(&xaxis, &yaxis, snakelength); break;
				}
			}
		}
	}
	


	printf("\n\n\n\n\n");
	

}
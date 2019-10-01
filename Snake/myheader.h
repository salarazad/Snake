#include <windows.h>

//color definition
#define 	BLACK			0
#define 	BLUE			1
#define 	GREEN			2
#define 	CYAN			3
#define 	RED				4
#define 	MAGENTA			5
#define 	BROWN			6
#define 	LIGHTGRAY		7
#define		DARKGRAY		8
#define 	LIGHTBLUE		9
#define 	LIGHTGREEN		10
#define 	LIGHTCYAN		11
#define 	LIGHTRED		12
#define 	LIGHTMAGENTA	13
#define 	YELLOW			14
#define 	WHITE			15

//keyboard keys definition
#define 	ESC 			27
#define 	F1 				59
#define 	F2 				60
#define 	F3 				61
#define 	F4 				62
#define 	F5 				63
#define 	F6 				64
#define 	F7 				65
#define 	F8 				66
#define 	F9 				67
#define 	F10 			68
#define 	HOME 			71
#define 	PAGE_UP 		73
#define 	LEFT 			75
#define 	RIGHT 			77
#define 	UP 				72
#define 	DOWN 			80
#define 	END 			79

/*
//setting a color to a specific text
void printcolor(char text[], char color[]) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
	printf("%s", text);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
}
*/

/*
//setting a color to a specific text
void setcolor(char color[]) {
	char color2[] = color;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color2);
}
*/

void resetcolor() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
}

//clear
void clear(int x, int y, int length) {
	for (int l = 0; l < length; l++) {
		COORD coord;
		coord.X = x;
		coord.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
		printf("%c",' ');
		x++;
	}
}


//print a string to a coordination
void printstr(int x, int y, const char string[]) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	std::cout << string << std::endl;
}

//print a character to a coordination
void printchar(int x, int y, char character) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	std::cout << character << std::endl;
}

//print an integer to a coordination
void printint(int x, int y, int number) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	std::cout << number << std::endl;
}


//cursor set to coordination
void cursor(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


/*
//flashing banner
void flashing() {
	int f;
	for (f = 0; f <= 2; f++) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
		printstr(50, 3, "Let the battle begin");
		Sleep(400);
		system("cls");
		Sleep(400);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	}
}
*/


/*
// delete a character from a string and return the new string
char* delchar(char* tiles2, char rmvchr) {
	char* tiles;
	tiles = malloc(sizeof(char) * 10);
	//	tiles = malloc(sizeof(tiles)*10);
	strcpy(tiles, tiles2);
	char* m;
	m = strchr(tiles, rmvchr);
	if (m) {
		int position = m - tiles;
		strcpy(&tiles[position], &tiles[position + 1]);
		return tiles;
	}
	else return tiles2;
	return 0;
}
*/
#pragma once

void layout() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	int m1, n1;
	for (m1 = 22; m1 < 100; m1++) {
		for (n1 = 3; n1 < 26; n1++) {
			if (m1 == 22 || m1 == 99) {
				if (n1 > 3) {
					printchar(m1, n1, '|');
				}
			}
			if (n1 == 3 || n1 == 25) {
				if (m1 > 22 && m1 < 99) {
					printchar(m1, n1, '_');
				}
			}
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
}
#include<Windows.h>
#include<conio.h>
#include "Declare.h"

void init() {
	system("mode con cols=148 lines=41 | title 1 �� 1 ���ð���");
    CursorView();
}

void gotoxy(int x, int y) {
    HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(consoleHandle, pos);
}

void CursorView()
{
    CONSOLE_CURSOR_INFO cursorInfo = { 0, };
    cursorInfo.dwSize = 1; //Ŀ�� ���� (1 ~ 100)
    cursorInfo.bVisible = FALSE; //Ŀ�� Visible TRUE(����) FALSE(����)
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}


int KeyControl() {
    int key = _getch();
    switch (key) {
    case 'w':   return UP; break;
    case 's':   return DOWN; break;
    case 'a':   return LEFT; break;
    case 'd':   return RIGHT; break;
    default: return -1;
    }
}
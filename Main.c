#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#include <process.h>
#include<string.h>
#include "Declare.h"
#include<stdlib.h>
#include<time.h.>

#include<string.h>
#include <locale.h>

wchar_t End[Buffer_Height][Buffer_Width] =

{
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                           □■■■■■■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■■■■■■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□                          ",
	L"                           □■■□□■■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■■■□□■■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□                          ",
	L"                           □■■□□□□□□□□□■■■■■■□□□□□■■■■■■□□□□■■■■■■□□□■■■■■■□□□□□□□□■■□□□□□□□□□□■■■■■■□□□□■■■■■■□□□□□■■■■■■                          ",
	L"                           □■■■□□□□□□□□■■□□■■□□□□□■■□□■■□□□□■■□□■■□□□■■□□■■□□□□□□□□■■□□□□□□□□□□■■□□■■□□□□■■□□■■□□□□□■■□□■■                          ",
	L"                           □■■■■■■□□□□□■■□□■■□□□□□□□□□□■□□□□■■□□□□□□□■■□□■■□□□□□□□□■□□■■■■□□□□□□□□□□■□□□□■■□□□■□□□□□■■□□■■                          ",
	L"                           □□□□■■■□□□□□■□□□□■□□□□□■■■■■■□□□□■□□□□□□□□■■■■■■□□□□□□□□■■□□□□■□□□□□■■■■■■□□□□■□□□□■□□□□□■□□□□■                          ",
	L"                           □□□□□□■□□□□□■□□□■■□□□□□■■□□□■□□□□■■□□□□□□□■■□□□□□□□□□□□□■■□□□□■□□□□□■■□□□■□□□□■□□□□■□□□□□■■□□■■                          ",
	L"                           □■■□□■■□□□□□■■□□■■□□□□□■■□□■■□□□□■■□□■■□□□■■□□■■□□□□□□□□■■■□□■■□□□□□■■□□■■□□□□■□□□□■□□□□□■■□□■■                          ",
	L"                           □■■■■■■□□□□□■■■■■■□□□□□■■■■■■□□□□■■■■■■□□□■■■■■■□□□□□□□□□■■■■■■□□□□□■■■■■■□□□□■□□□□■□□□□□■■■■■■                          ",
	L"                           □□□□□□□□□□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■■                          ",
	L"                           □□□□□□□□□□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■■□□■■                          ",
	L"                           □□□□□□□□□□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■■■■■■                          ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                                                                        _    _  _____  _   _                                        ",
	L"                                                                                       | |  | ||_   _|| \\ | |                                       ",
	L"                                                                                       | |  | |  | |  |  \\| |                                       ",
	L"                                                                                       | |/\\| |  | |  | . ` |                                       ",
	L"                                                                                       \\  /\\  / _| |_ | |\\  |                                       ",
	L"                                                                                        \\/  \\/  \\___/ \\_| \\_/                                       ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                 ReGame(Press [R] Key)                                   Exit(Press [E] Key)                                        ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    ",
	L"                                                                                                                                                    "
};

wchar_t red[6][24] =
{
	{L"______  _____  ______ "},
	{L"| ___ \\ | ___| | _   \\"},
	{L"| |_/ / | |__  | | | |"},
	{L"|    /  |  __| | | | |"},
	{L"| |\\ \\  | |___ | |/  /"},
	{L"\\_| \\_| \\____/ |____/ "}
};

wchar_t blue[6][29] =
{
	{L"______  _      _   _  _____ "},
	{L"| ___ \\| |    | | | ||  ___|"},
	{L"| |_/ /| |    | | | || |__  "},
	{L"| ___ \\| |    | | | ||  __| "},
	{L"| |_/ /| |____| |_| || |___ "},
	{L"\\____/ \\_____/ \\___/ \\____/ "}
};


wchar_t start2[Buffer_Height][Buffer_Width + 14] =
{
	L"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////////////~://////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"////////////////////////////////////,!*./////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"////////////////////////////////////~**~/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"///////////////////////////////////,~**~~.///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"///////////////////////////////////.~**:-,/////////////////□■■■■■■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■■■■■■□□□□□□□□□□□□□□□□□□□□□□□////////////////////////////////",
	L"//////////////////////////////////..-!!~-,/////////////////□■■□□■■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■■■□□■■□□□□□□□□□□□□□□□□□□□□□□□////////////////////////////////",
	L"//////////////////////////////////- -!*~-~/////////////////□■■□□□□□□■■■■■■□■■■■■■□■■■■■■□■■■■■■□□□□■■□□□□□□□■■■■■■□■■■■■■□□■■■■■■////////////////////////////////",
	L"//////////////////////////////////-.,**~-~/////////////////□■■■□□□□□■■□□■■□■■□□■■□■■□□■■□■■□□■■□□□□■■□□□□□□□■■□□■■□■■□□■■□□■■□□■■////////////////////////////////",
	L"//////////////////////////////////-.,~~~-~/////////////////□■■■■■■□□■■□□■■□□□□□□■□■■□□□□□■■□□■■□□□□■□□■■■■□□□□□□□■□■■□□□■□□■■□□■■////////////////////////////////",
	L"/////////////////////////////////,,., ,~--,////////////////□□□□■■■□□■□□□□■□■■■■■■□■□□□□□□■■■■■■□□□□■■□□□□■□□■■■■■■□■□□□□■□□■□□□□■////////////////////////////////",
	L"////////////////////////////////.,-,., .-,--,./////////////□□□□□□■□□■□□□■■□■■□□□■□■■□□□□□■■□□□□□□□□■■□□□□■□□■■□□□■□■□□□□■□□■■□□■■////////////////////////////////",
	L"/////////////////////////////,-  -.., ,-..- .,,.///////////□■■□□■■□□■■□□■■□■■□□■■□■■□□■■□■■□□■■□□□□■■■□□■■□□■■□□■■□■□□□□■□□■■□□■■////////////////////////////////",
	L"//////////////////////////.-     ..., ,-. .     -./////////□■■■■■■□□■■■■■■□■■■■■■□■■■■■■□■■■■■■□□□□□■■■■■■□□■■■■■■□■□□□□■□□■■■■■■////////////////////////////////",
	L"//////////////////////// -..- .-.          -.        //////□□□□□□□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■■////////////////////////////////",
	L"///////////////////////           ..- .-.            //////□□□□□□□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■■□□■■////////////////////////////////",
	L"///////////////////////...,        .- -.        .... //////□□□□□□□□□■□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□□■■■■■■////////////////////////////////",
	L"////////////////////////,.,-, ,.  .- -.....,-,.,  ///////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////-,;!*~--  --~!*;,,//////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"////////////////////////////////.=!:-  -~!=//////////////////////////////////////////┌─┐┌┬┐┌─┐┬─┐┌┬┐/////////////////////////////////////////////////////////////",
	L"/////////////////////////////////.-~-. -~-.//////////////////////////////////////////└─┐ │ ├─┤├┬┘ │ /////////////////////////////////////////////////////////////",
	L"////////////////////////////////~~~~~..~~~~-/////////////////////////////////////////└─┘ ┴ ┴ ┴┴└─ ┴ /////////////////////////////////////////////////////////////",
	L"////////////////////////////////-~::!.~;::~-/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"//////////////////////////////,,::~~----~~::.,///////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////*!**,,~    ~,,**!*///////////////////////////////////>>> PRESS SPACEBAR <<</////////////////////////////////////////////////////////",
	L"/////////////////////////////=****=~    ~*****=//////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"//////////////////////////////.,***,    -***,.///////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////////,~      ~,//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
	L"/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////",
};
char Map[Buffer_Height][Buffer_Width] = {
	{"####################################################################################################################################################"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"#                                                                         |                                                                        #"},
	{"####################################################################################################################################################"}
};   // 맵
char _Fighter[2][Fighter_Height][Fighter_Width] = {
	{
		{"I\\   "},
		{"I>>- "},
		{"I>>>-"},
		{"I>>- "},
		{"I/   "}
	},
	{
		{"   /I"},
		{" -<<I"},
		{"-<<<I"},
		{" -<<I"},
		{"   \\I"}
	}
}; // 전투기1

char _Bullet[2][2] = { "->", "<-" }; // 총알

struct Fighter Fighter_info[2] =
{
		{.name = "player1", .team = LEFT, .HP = Default_HP, .pos = {.X = 10, .Y = (Buffer_Height / 2) - (Fighter_Height / 2)}, .color = RED},
		{.name = "player2", .team = RIGHT, .HP = Default_HP, .pos = {.X = 133, .Y = (Buffer_Height / 2) - (Fighter_Height / 2)}, .color = BLUE}
};   // Fighter의 정보

struct Bullet HeadBullet = { .name = "Head", .direction = 0, .pos = {.X = 0, .Y = 0 }, .prev = NULL, .next = NULL };
struct Bullet TailBullet = { .name = "Tail", .direction = 0, .pos = {.X = 0, .Y = 0 }, .prev = NULL, .next = NULL };

int Bullet_Count = 0;

struct Text {
	unsigned short TextColor;
	unsigned short BackgroundColor;
	char c;
};

struct Text PrevBuffer[Buffer_Height][Buffer_Width];	// 출력 버퍼
struct Text CurrentBuffer[Buffer_Height][Buffer_Width];  // 보조 버퍼

float prevTime1 = -1000;
float prevTime2 = -1000;

int Playing = 1;

void DrawMapToBackBuffer(); 		// BackBuffer에 Map을 그림
void DrawFighterToBackButffer(char(*fighter)[Fighter_Width], struct Fighter);	// BackBuffer에 Fighter1 을 그림
void DrawPosToBackBuffer(struct Fighter f, int x, int y);	// BackBuffer에 Fighter1_Pos 을 그림 
void ClearBuffer(struct Text (*arr)[Buffer_Width]);				// BackBuffer를 비움
void DrawBulletToBackBuffter();		// BackBuffer에 총알 그림
void DrawHPToBackBuffer(struct Fighter HP, int x, int y);
void render();						// BackBuffer에 그려진 것들을 FrontBuffer에 그림
void FighterMove(struct Fighter*);	// Fighter 이동
void BulletProduce(struct Fighter);		  // 총알 생성.
void Shooting();						  // 총알 발사.
void Collider(struct Fighter*);
void Fighter_Died(int);

void StartGame(wchar_t (*arr)[Buffer_Width+14]);
void EndGame();

int main(void)
{
	setlocale(LC_ALL, ""); // ?로 출력되는 현상 방지
	init();
	HeadBullet.next = &TailBullet;
	TailBullet.prev = &HeadBullet;
	
	ClearBuffer(CurrentBuffer);

	StartGame(start2);
	while (_getch() != ' ');

	while (Playing)
	{
		for (int i = 0; i < 2; i++)
		{
			Fighter_Died(Fighter_info[i].HP);
		}

		DrawMapToBackBuffer();
		for (int i = 0; i < 2; i++)
		{
			DrawFighterToBackButffer(_Fighter[i], Fighter_info[i]);
		}
		DrawPosToBackBuffer(Fighter_info[0], 2, 2);
		DrawHPToBackBuffer(Fighter_info[0], 13, 2);
		
		DrawPosToBackBuffer(Fighter_info[1], 126, 2);
		DrawHPToBackBuffer(Fighter_info[1], 138, 2);
		
		DrawBulletToBackBuffter();
		
		render();

		for (int i = 0; i < 2; i++)
		{
			FighterMove(Fighter_info + i);
			Collider(Fighter_info + i);
		}
		Shooting();

		for (int i = 0; i < 2; i++)
		{
			if (Fighter_info[i].HP == 0)
			{
				unsigned short color;
				if (i == 0) color = BLUE;
				else color = RED;
				ChangeTextColor(color, GRAY);
				EndGame();
				ChangeTextColor(BLACK, color);
				if (color == BLUE)
				{
					for (int i = 0; i < 6; i++)
					{
						gotoxy(35, 21+i);
						for (int j = 0; j < 29; j++)
						{
							wprintf(L"%c", blue[i][j]);
						}
						printf("\n");
					}
				}
				else
				{
					for (int i = 0; i < 6; i++)
					{
						gotoxy(35, 21 + i);
						for (int j = 0; j < 24; j++)
						{
							wprintf(L"%c", red[i][j]);
						}
						printf("\n");
					}
				}
				char temp = _getch();
				while (temp != 'R' && temp != 'E' && temp != 'r' && temp != 'e')
					temp = _getch();
				if (temp == 'R' || temp == 'r')
				{
					Fighter_info[0].HP = 5;
					Fighter_info[0].pos.X = 10;
					Fighter_info[0].pos.Y = (Buffer_Height / 2) - (Fighter_Height / 2);

					Fighter_info[1].HP = 5;
					Fighter_info[1].pos.X= 133;
					Fighter_info[1].pos.Y = (Buffer_Height / 2) - (Fighter_Height / 2);

					ClearBuffer(PrevBuffer);
					ClearBuffer(CurrentBuffer);
					
					struct Bullet* nowBullet = HeadBullet.next;
					while (nowBullet != &TailBullet)
					{
						struct Bullet* DeleteBullet = nowBullet;
						DeleteBullet->next->prev = DeleteBullet->prev;
						DeleteBullet->prev->next = DeleteBullet->next;
						nowBullet = nowBullet->next;
						free(DeleteBullet);
					}

					break;
				}
				else if (temp == 'E' || temp == 'e')
				{	
					return 0;
				}
			}

		}

		Sleep(45);
	}

	return 0;
}

void StartGame(wchar_t(*arr)[Buffer_Width+14])
{
	for (int i = 0; i < Buffer_Height; i++)
	{
		for (int j = 0; j < Buffer_Width; j++)
		{
			wchar_t temp = arr[i][j];
			if (arr[i][j] == L'/')
			{
				ChangeTextColor(WHITE, DARK_GRAY);
				wprintf(L" ");
				continue;
			}
			else if (arr[i][j] == L'■')
			{
				ChangeTextColor(BLACK, YELLOW);
			}
			else if (arr[i][j] == L'□')
			{
				ChangeTextColor(DARK_GRAY, BLACK);
			}
			else
			{
				ChangeTextColor(BLACK, GRAY);
			}
			wprintf(L"%c", temp);
		}

		if (i != Buffer_Height-1) printf("\n");
	}
}

void EndGame() 
{
	gotoxy(0, 0);
	for (int i = 0; i < Buffer_Height; i++)
	{
		for (int j = 0; j < Buffer_Width; j++)
		{
			if (End[i][j] == ' ')
			{
				ChangeTextColor(DARK_GRAY, DARK_GRAY);
			}
			else if (End[i][j] == L'■')
			{
				ChangeTextColor(BLACK, YELLOW);
			}
			else if (End[i][j] == L'□')
			{
				ChangeTextColor(DARK_GRAY, BLACK);
			}
			else
			{
				ChangeTextColor(BLACK, DARK_GRAY);
			}
			wprintf(L"%c", End[i][j]);
		}
	}
}

void DrawMapToBackBuffer() {	// BackBuffer에 Map을 그림
	for (int i = 0; i < Buffer_Height; i++)
	{
		for (int j = 0; j < Buffer_Width; j++)
		{
			struct Text temp;
			if (Map[i][j] == ' ')
			{
				temp.BackgroundColor = BLACK;
				temp.TextColor = BLACK;
			}
			else if (Map[i][j] == '#')
			{
				temp.BackgroundColor = DARK_GRAY;
				temp.TextColor = DARK_GRAY;
			}
			else if (Map[i][j] == '|')
			{
				temp.BackgroundColor = BLACK;
				temp.TextColor = GRAY;
			}
			temp.c = Map[i][j];

			CurrentBuffer[i][j] = temp;
		}
	}
}

void DrawFighterToBackButffer(char(*fighter)[Fighter_Width], struct Fighter f) // BackBuffer에 Fighter1 을 그림
{
	for (int i = 0; i < Fighter_Height; i++)
	{
		for (int j = 0; j < Fighter_Width; j++)
		{
			struct Text current;
			if (fighter[i][j] != ' ')
			{
				current.TextColor = f.color;
				current.BackgroundColor = BLACK;
			}
			else
			{
				current.TextColor = WHITE;
				current.BackgroundColor = BLACK;
			}
			current.c = fighter[i][j];
			CurrentBuffer[f.pos.Y+i][f.pos.X+j] = current;
		}
	}
}

void DrawPosToBackBuffer(struct Fighter f, int x, int y) {	// BackBuffer에 Fighter1_Pos 을 그림 
	char temp[20];
	sprintf(temp, "Pos(%d, %d)", f.pos.X, f.pos.Y);
	
	for (int i = 0; i < strlen(temp); i++)
	{
		CurrentBuffer[y][x + i].c = temp[i];
		CurrentBuffer[y][x + i].TextColor = f.color;
		CurrentBuffer[y][x + i].BackgroundColor = BLACK;
	}
}

void DrawBulletToBackBuffter()
{
	struct Bullet* nowBullet = HeadBullet.next;
	unsigned short color;
	while (nowBullet != &TailBullet) {
		int BulletNumber = 0;
		if (nowBullet->direction == -1)
		{
			BulletNumber = 1;
		}

		if (BulletNumber == 0)
			color = RED;
		else
			color = BLUE;


		for (int i = 0; i < Bullet_Width; i++)
		{
			struct Text temp;
			temp.c = _Bullet[BulletNumber][i];
			if (temp.c == '-')
				temp.BackgroundColor = color;
			else
				temp.BackgroundColor = BLACK;
			temp.TextColor = color;
			CurrentBuffer[nowBullet->pos.Y][nowBullet->pos.X + i] = temp;
		}
		nowBullet = nowBullet->next;
	}
}

void DrawHPToBackBuffer(struct Fighter f, int x, int y)
{
	char temp[10];
	sprintf(temp, "(HP : %d)", f.HP);

	for (int i = 0; i < strlen(temp); i++)
	{
		CurrentBuffer[y][x + i].c = temp[i];
		CurrentBuffer[y][x + i].TextColor = f.color;
		CurrentBuffer[y][x + i].BackgroundColor = BLACK;
	}
}

void ClearBuffer(struct Text (*arr)[Buffer_Width]) {	// BackBuffer를 비움
	for (int i = 0; i < Buffer_Height; i++)
	{
		for (int j = 0; j < Buffer_Width; j++)
		{
			arr[i][j].c = '\0';
			arr[i][j].TextColor = WHITE;
			arr[i][j].BackgroundColor = BLACK;
		}
	}
}

void render()				// BackBuffer에 그려진 것들을 FrontBuffer에 그림
{
	for (int i = 0; i < Buffer_Height; i++)
	{
		for (int j = 0; j < Buffer_Width; j++)
		{
			if (CurrentBuffer[i][j].c == '\0') CurrentBuffer[i][j].c = ' ';
		}
	}

	for (int i = 0; i < Buffer_Height; i++)
	{
		for (int j = 0; j < Buffer_Width; j++)
		{
			struct Text current = CurrentBuffer[i][j];
			if (current.c != PrevBuffer[i][j].c) {
				gotoxy(j, i);
				ChangeTextColor(current.TextColor, current.BackgroundColor);
				printf("%c", current.c);
			}
		}
	}
	
	for (int i = 0; i < Buffer_Height; i++)
	{
		for (int j = 0; j < Buffer_Width; j++)
		{
			PrevBuffer[i][j] = CurrentBuffer[i][j];
		}
	}

	ClearBuffer(CurrentBuffer);
}

void FighterMove(struct Fighter* fighter)			// Fighter 이동
{
	if (fighter->team == LEFT)
	{
		if (GetAsyncKeyState(VK_A) & 0x8000) { //왼쪽
			if (fighter->pos.X > 1 + (FighterSpeed - 1))
			{
				fighter->pos.X += -1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_D) & 0x8000) { //오른쪽
			if (fighter->pos.X < (Buffer_Width / 2) - Fighter_Width - (FighterSpeed - 1))
			{
				fighter->pos.X += 1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_W) & 0x8000) { //위
			if (fighter->pos.Y > 1 + (FighterSpeed - 1))
			{
				fighter->pos.Y += -1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_S) & 0x8000) { //아래
			if (fighter->pos.Y < (Buffer_Height - 1) - Fighter_Height - (FighterSpeed - 1))
			{
				fighter->pos.Y += 1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_C) & 0x8000) { // 총알 생성
			float Moment = clock();
			if ((Moment - prevTime1) / CLOCKS_PER_SEC >= ShootSpan)
			{
				BulletProduce(*fighter);
				prevTime1 = Moment;
			}
		}
	}
	else if (fighter->team == RIGHT)
	{
		if (GetAsyncKeyState(VK_J) & 0x8000) { //왼쪽
			if (fighter->pos.X > (Buffer_Width / 2) + (FighterSpeed + 1))
			{
				fighter->pos.X += -1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_L) & 0x8000) { //오른쪽
			if (fighter->pos.X < 148 - Fighter_Width - (FighterSpeed + 1))
			{
				fighter->pos.X += 1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_I) & 0x8000) { //위
			if (fighter->pos.Y > 1 + (FighterSpeed - 1))
			{
				fighter->pos.Y += -1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_K) & 0x8000) { //아래
			if (fighter->pos.Y < (Buffer_Height - 1) - Fighter_Height - (FighterSpeed - 1))
			{
				fighter->pos.Y += 1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_N) & 0x8000) { // 총알 생성
			float Moment = clock();
			if ((Moment - prevTime2) / CLOCKS_PER_SEC >= ShootSpan)
			{
				BulletProduce(*fighter);
				prevTime2 = Moment;
			}
		}
	}
}

void BulletProduce(struct Fighter fighter)
{
	struct Bullet* newBullet = (struct Bullet*)malloc(sizeof(struct Bullet));
	strcpy_s(newBullet->name, sizeof(newBullet->name), fighter.name);

	if (fighter.team == LEFT)	// 왼쪽 진영
	{
		newBullet->pos.X = fighter.pos.X + 2;
		newBullet->pos.Y = fighter.pos.Y + 2;
		newBullet->direction = 1;
	}
	else				// 오른쪽 진영
	{
		newBullet->pos.X = fighter.pos.X - 1;
		newBullet->pos.Y = fighter.pos.Y + 2;
		newBullet->direction = -1;
	}
	newBullet->next = &TailBullet;
	newBullet->prev = TailBullet.prev;

	TailBullet.prev = newBullet;
	newBullet->prev->next = newBullet;
}

void Shooting() {
	struct Bullet* nowBullet = HeadBullet.next;
	while (nowBullet != &TailBullet) {
		if (nowBullet->pos.X > 140 || nowBullet->pos.X < 8)
		{
			// DeleteBullet()
			struct Bullet* DeleteBullet = nowBullet;
			DeleteBullet->next->prev = DeleteBullet->prev;
			DeleteBullet->prev->next = DeleteBullet->next;
			nowBullet = nowBullet->prev;
			free(DeleteBullet);
		}
		else
		{
			nowBullet->pos.X += nowBullet->direction * BulletSpeed;
		}
		nowBullet = nowBullet->next;
	}
}

void Collider(struct Fighter* fighter)
{	
	int dir;
	if (fighter->team == LEFT)
	{
		dir = -1;
	}
	else
	{
		dir = 1;
	}

	struct Bullet* nowBullet = HeadBullet.next;
	while (nowBullet != &TailBullet)
	{
		if (nowBullet->direction == dir)
		{
			if (fighter->pos.X - 1 <= nowBullet->pos.X && nowBullet->pos.X <= fighter->pos.X + Fighter_Width + 1 &&
				fighter->pos.Y - 1 <= nowBullet->pos.Y && nowBullet->pos.Y <= fighter->pos.Y + Fighter_Height + 1)
			{
				// DeleteBullet()
				struct Bullet* DeleteBullet = nowBullet;
				DeleteBullet->next->prev = DeleteBullet->prev;
				DeleteBullet->prev->next = DeleteBullet->next;
				nowBullet = nowBullet->prev;
				free(DeleteBullet);
				fighter->HP--;
			}
		}
		nowBullet = nowBullet->next;
	}
}
void Fighter_Died(int HP)
{
	if (HP <= 0)
	{
		Playing = 0;
	}
}

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>	// 표준 입출력 헤더
#include<Windows.h> // 콘솔게임 만들기 위한 해더
#include<conio.h>   // _getch() 사용하기 위한 해더
#include<string.h>  // 문자열을 처리하기 위한  헤더
#include "Declare.h" // Declare.h
#include<stdlib.h>	// 동적할당을 위한 헤더
#include<time.h.>	// sleep()을 위한 헤더

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
};	// 엔딩

wchar_t red[6][24] =
{
	{L"______  _____  ______ "},
	{L"| ___ \\ | ___| | _   \\"},
	{L"| |_/ / | |__  | | | |"},
	{L"|    /  |  __| | | | |"},
	{L"| |\\ \\  | |___ | |/  /"},
	{L"\\_| \\_| \\____/ |____/ "}
}; // red가 이겼을때 이벤트

wchar_t blue[6][29] =
{
	{L"______  _      _   _  _____ "},
	{L"| ___ \\| |    | | | ||  ___|"},
	{L"| |_/ /| |    | | | || |__  "},
	{L"| ___ \\| |    | | | ||  __| "},
	{L"| |_/ /| |____| |_| || |___ "},
	{L"\\____/ \\_____/ \\___/ \\____/ "}
}; // blue가 이겻을때 이벤트


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
}; // 오프닝
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
}; // 전투기 아스키 아트

char _Bullet[2][2] = { "->", "<-" }; // 총알 아스키 아트

struct Fighter Fighter_info[2] =
{
		{.name = "player1", .team = LEFT, .HP = Default_HP, .pos = {.X = 10, .Y = (Buffer_Height / 2) - (Fighter_Height / 2)}, .color = RED},
		{.name = "player2", .team = RIGHT, .HP = Default_HP, .pos = {.X = 133, .Y = (Buffer_Height / 2) - (Fighter_Height / 2)}, .color = BLUE}
};   // 전투기의 정보

struct Bullet HeadBullet = { .name = "Head", .direction = 0, .pos = {.X = 0, .Y = 0 }, .prev = NULL, .next = NULL };	// 연결리스트를 위한 Header Node
struct Bullet TailBullet = { .name = "Tail", .direction = 0, .pos = {.X = 0, .Y = 0 }, .prev = NULL, .next = NULL };	// 연결리스트를 위한 Tail Node

int Bullet_Count = 0;	// 총알의 개수

struct Text {	// Text 정보를 저장할 구조체
	unsigned short TextColor;
	unsigned short BackgroundColor;
	char c;
};

struct Text PrevBuffer[Buffer_Height][Buffer_Width];	 // 보조 버퍼
struct Text CurrentBuffer[Buffer_Height][Buffer_Width];  // 메인 버퍼

float prevTime1 = -1000;	// 전투기1 의 총알 쿨타임
float prevTime2 = -1000;	// 전투기2 의 총알 쿨타임

int Playing = 1;	// 게임 플레이 유무

void DrawMapToBackBuffer(); 		// 메인 버퍼에 맵을 그림
void DrawFighterToBackButffer(char(*fighter)[Fighter_Width], struct Fighter);	// 메인 버퍼에 전투기를 그림
void DrawPosToBackBuffer(struct Fighter f, int x, int y);	// 메인 버퍼에 전투기의 위치를 그림 
void DrawBulletToBackBuffter();		// 메인 버퍼에 총알 그림
void DrawHPToBackBuffer(struct Fighter HP, int x, int y);	// 메인 버퍼에 전투기의 체력을 그림
void ClearBuffer(struct Text (*arr)[Buffer_Width]);				// 메인 버퍼를 비움
void render();						// 메인 버퍼의 값을 콘솔에 출력하고, 보조버퍼에 메인 버퍼의 값을 저장함.
void FighterMove(struct Fighter*);	// 전투기 이동
void BulletProduce(struct Fighter);		  // 총알 생성.
void Shooting();						  // 총알 발사.
void Collider(struct Fighter*);		// 전투기 충돌처리
void Fighter_Died(int);				// 전투기 사망

void StartGame(wchar_t (*arr)[Buffer_Width+14]);	// 오프닝
void EndGame();		// 엔딩

int main(void)
{
	setlocale(LC_ALL, ""); // ?로 출력되는 현상 방지
	init();					// 초기화 설정
	
	// 연결리스트 초기설정.
	HeadBullet.next = &TailBullet;	
	TailBullet.prev = &HeadBullet;
	//

	ClearBuffer(CurrentBuffer); // 메인 버퍼 초기화

	StartGame(start2);	// 게임 오프닝 출력
	while (_getch() != ' ');	// 사용자가 spacebar 입력 대기 

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

void ClearBuffer(struct Text (*arr)[Buffer_Width]) {	// 메인 버퍼.
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

void render()	// 메인 버퍼에 그려진 것들을 출력하고, 보조 버퍼에 메인 버퍼의 데이터를 저장.
{
	for (int i = 0; i < Buffer_Height; i++)
	{
		for (int j = 0; j < Buffer_Width; j++)
		{
			if (CurrentBuffer[i][j].c == '\0') CurrentBuffer[i][j].c = ' ';
		}
	}

	// 메인 버퍼에 있는 데이터를 콘솔에 출력.
	for (int i = 0; i < Buffer_Height; i++)
	{
		for (int j = 0; j < Buffer_Width; j++)
		{
			struct Text current = CurrentBuffer[i][j];
			if (current.c != PrevBuffer[i][j].c) {	
				// 이전 버퍼에 남아 있던 데이터들과 값을 비교하고 값이 다르면 gotoxy를 사용하여 값을 바꿈.
				gotoxy(j, i);
				ChangeTextColor(current.TextColor, current.BackgroundColor);
				printf("%c", current.c);
			}
		}
	}
	
	for (int i = 0; i < Buffer_Height; i++)	// 메인 버퍼에 값을 보조 버퍼에 저장.
	{
		for (int j = 0; j < Buffer_Width; j++)
		{
			PrevBuffer[i][j] = CurrentBuffer[i][j];
		}
	}

	ClearBuffer(CurrentBuffer);	// 메인 버퍼를 초기화함.
}

void FighterMove(struct Fighter* fighter)			// Fighter 이동
{
	if (fighter->team == LEFT)	// 전투기가 왼쪽 진영일 경우.
	{
		if (GetAsyncKeyState(VK_A) & 0x8000) { // A키를 누루면 왼쪽으로 이동
			if (fighter->pos.X > 1 + (FighterSpeed - 1))
			{
				fighter->pos.X += -1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_D) & 0x8000) { // D키를 누루면 왼쪽으로 이동
			if (fighter->pos.X < (Buffer_Width / 2) - Fighter_Width - (FighterSpeed - 1))
			{
				fighter->pos.X += 1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_W) & 0x8000) { // W키를 누루면 위쪽으로 이동
			if (fighter->pos.Y > 1 + (FighterSpeed - 1))
			{
				fighter->pos.Y += -1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_S) & 0x8000) { // S키를 누루면 아래쪽으로 이동
			if (fighter->pos.Y < (Buffer_Height - 1) - Fighter_Height - (FighterSpeed - 1))
			{
				fighter->pos.Y += 1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_C) & 0x8000) { // C키를 누루면 총알 생성
			float Moment = clock();
			if ((Moment - prevTime1) / CLOCKS_PER_SEC >= ShootSpan)
			{
				BulletProduce(*fighter);
				prevTime1 = Moment;
			}
		}
	}
	else if (fighter->team == RIGHT)	// 전투기가 오른쪽 진영일 경우.
	{
		if (GetAsyncKeyState(VK_J) & 0x8000) { // J키를 누루면 왼쪽으로 이동
			if (fighter->pos.X > (Buffer_Width / 2) + (FighterSpeed + 1))
			{
				fighter->pos.X += -1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_L) & 0x8000) { // L키를 누루면 왼쪽으로 이동
			if (fighter->pos.X < 148 - Fighter_Width - (FighterSpeed + 1))
			{
				fighter->pos.X += 1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_I) & 0x8000) { // I키를 누루면 위쪽으로 이동
			if (fighter->pos.Y > 1 + (FighterSpeed - 1))
			{
				fighter->pos.Y += -1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_K) & 0x8000) { // K키를 누루면 아래쪽으로 이동
			if (fighter->pos.Y < (Buffer_Height - 1) - Fighter_Height - (FighterSpeed - 1))
			{
				fighter->pos.Y += 1 * FighterSpeed;
			}
		}
		if (GetAsyncKeyState(VK_N) & 0x8000) { // N키를 누루면 총알 생성
			float Moment = clock();
			if ((Moment - prevTime2) / CLOCKS_PER_SEC >= ShootSpan)
			{
				BulletProduce(*fighter);
				prevTime2 = Moment;
			}
		}
	}
}

void BulletProduce(struct Fighter fighter)	// 총알을 생성함.
{
	// malloc 동적 할당 함수를 사용하여 총알의 메모리를 동적으로 할당한다.
	struct Bullet* newBullet = (struct Bullet*)malloc(sizeof(struct Bullet));

	// 총알에 데이터를 초기화함.
	strcpy_s(newBullet->name, sizeof(newBullet->name), fighter.name);

	if (fighter.team == LEFT)	// 왼쪽 진영 전투기가 총알을 생성한 경우
	{
		newBullet->pos.X = fighter.pos.X + 2;
		newBullet->pos.Y = fighter.pos.Y + 2;
		newBullet->direction = 1;
	}
	else				// 오른쪽 진영의 전투기가 총알을 생성한 경우
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

void Shooting() {	// 총알 발사
	struct Bullet* nowBullet = HeadBullet.next;
	while (nowBullet != &TailBullet) {
		if (nowBullet->pos.X > 140 || nowBullet->pos.X < 8)	// 만약 총알이 벽에 닿으면 총알을 삭제
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
			nowBullet->pos.X += nowBullet->direction * BulletSpeed;	// 총알이 벽에 닿지 않았으면 총알이동.
		}
		nowBullet = nowBullet->next;	// 다음 총알노드로 이동.
	}
}

void Collider(struct Fighter* fighter)	// 총알과 플레이어 충돌 처리.
{	
	int dir;
	if (fighter->team == LEFT)	// 전투기가 왼쪽진형일 경우
	{
		dir = -1;
	}							// 전투기가 오른쪽진형일 경우
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
				// 만약 총알이 전투기와 충돌했을시 총알을 삭제하고 전투기 Hp를 감소시킴.
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
void Fighter_Died(int HP)	// 전투기 사망.
{
	if (HP <= 0)	// 만약 전투기의 체력이 0에 도달하면 Playing 변수의 값을 0으로 바꾸어 게임을 종료시킴.
	{
		Playing = 0;
	}
}

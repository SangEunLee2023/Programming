#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<Windows.h>
#include<conio.h>
#include <process.h>
#include<string.h>
#include "Declare.h"
#include<stdlib.h>
#include<time.h.>

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
		{.name = "player1", .team = LEFT,.pos = {.X = 10, .Y = (Buffer_Height / 2) - (Fighter_Height / 2)}},
		{.name = "player2", .team = RIGHT,.pos = {.X = 133, .Y = (Buffer_Height / 2) - (Fighter_Height / 2)}}
};   // Fighter의 정보

struct Bullet HeadBullet = { .name = "Head", .direction = 0, .pos = {.X = 0, .Y = 0 }, .prev = NULL, .next = NULL };
struct Bullet TailBullet = { .name = "Tail", .direction = 0, .pos = {.X = 0, .Y = 0 }, .prev = NULL, .next = NULL };

int Bullet_Count = 0;

char FrontBuffer[Buffer_Height][Buffer_Width] = { '\0' };	// 출력 버퍼
char BackBuffer[Buffer_Height][Buffer_Width] = { '\0' };  // 보조 버퍼

float prevTime1 = -1000;
float prevTime2 = -1000;

void DrawMapToBackBuffer(); 		// BackBuffer에 Map을 그림
void DrawFighterToBackButffer(char(*fighter)[Fighter_Width], struct Fighter);	// BackBuffer에 Fighter1 을 그림
void DrawPosToBackBuffer(struct Point p, int x, int y);	// BackBuffer에 Fighter1_Pos 을 그림 
void ClearBackBuffer();				// BackBuffer를 비움
void DrawBulletToBackBuffter();		// BackBuffer에 총알 그림
void render();						// BackBuffer에 그려진 것들을 FrontBuffer에 그림
void printFrontBuffer();			// FrontBuffer를 화면에 출력함.
void Fighter1Move(struct Fighter*);	// Fighter 이동
void BulletProduce(struct Fighter);		  // 총알 생성.
void Shooting();						  // 총알 발사.

int main(void)
{
	init();
	HeadBullet.next = &TailBullet;
	TailBullet.prev = &HeadBullet;

	while (1)
	{
		DrawMapToBackBuffer();
		for (int i = 0; i < 2; i++)
		{
			DrawFighterToBackButffer(_Fighter[i], Fighter_info[i]);
		}
		DrawPosToBackBuffer(Fighter_info[0].pos, 2, 2);
		DrawPosToBackBuffer(Fighter_info[1].pos, 137, 2);
		DrawBulletToBackBuffter();
		render();
		printFrontBuffer();

		for (int i = 0; i < 2; i++)
		{
			Fighter1Move(Fighter_info + i);
		}
		Shooting();
	}

	return 0;
}

void DrawMapToBackBuffer() {	// BackBuffer에 Map을 그림
	for (int i = 0; i < Buffer_Height; i++)
	{
		for (int j = 0; j < Buffer_Width; j++)
		{
			BackBuffer[i][j] = Map[i][j];
		}
	}
}

void DrawFighterToBackButffer(char(*fighter)[Fighter_Width], struct Fighter f) // BackBuffer에 Fighter1 을 그림
{
	for (int i = 0; i < Fighter_Height; i++)
	{
		for (int j = 0; j < Fighter_Width; j++)
		{
			BackBuffer[i + f.pos.Y][j + f.pos.X] = fighter[i][j];
		}
	}
}

void DrawPosToBackBuffer(struct Point p, int x, int y) {	// BackBuffer에 Fighter1_Pos 을 그림 
	char temp[10];
	sprintf(temp, "(%d, %d)", p.X, p.Y);
	for (int i = 0; i < strlen(temp); i++)
	{
		BackBuffer[y][x + i] = temp[i];
	}
}

void DrawBulletToBackBuffter()
{
	struct Bullet* nowBullet = HeadBullet.next;
	while (nowBullet != &TailBullet) {
		int BulletNumber = 0;
		if (nowBullet->direction == -1)
		{
			BulletNumber = 1;
		}
		for (int i = 0; i < Bullet_Width; i++)
		{
			BackBuffer[nowBullet->pos.Y][nowBullet->pos.X + i] = _Bullet[BulletNumber][i];
		}
		nowBullet = nowBullet->next;
	}
}


void ClearBackBuffer() {	// BackBuffer를 비움
	for (int i = 0; i < Buffer_Height; i++)
	{
		for (int j = 0; j < Buffer_Width; j++)
		{
			BackBuffer[i][j] = '\0';
		}
	}
}

void render()				// BackBuffer에 그려진 것들을 FrontBuffer에 그림
{
	for (int i = 0; i < Buffer_Height; i++)
	{
		for (int j = 0; j < Buffer_Width; j++)
		{
			if (FrontBuffer[i][j] != BackBuffer[i][j])
			{
				if (BackBuffer[i][j] == '\0')
				{
					FrontBuffer[i][j] = ' ';
				}
				else
				{
					FrontBuffer[i][j] = BackBuffer[i][j];
				}
			}
		}
	}
	ClearBackBuffer();
}

void printFrontBuffer() {		// FrontBuffer를 화면에 출력함.
	gotoxy(0, 0);
	for (int i = 0; i < Buffer_Height; i++)
	{
		for (int j = 0; j < Buffer_Width; j++)
		{
			printf("%c", FrontBuffer[i][j]);
		}
		if (i != Buffer_Height - 1) printf("\n");
	}
}

void Fighter1Move(struct Fighter* fighter)			// Fighter 이동
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

	DrawPosToBackBuffer(newBullet->pos, 5, 2);
}

void Shooting() {
	struct Bullet* nowBullet = HeadBullet.next;
	while (nowBullet != &TailBullet) {
		if (nowBullet->pos.X > 140 || nowBullet->pos.X < 8)
		{
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

#ifndef DECLARE_H_ 
#define DECLARE_H_
void init();					// 초기설정 ( 화면 크기 설정, 커서 숨기기... ) 
void gotoxy(int x, int y);		// 커서 좌표 이동
void CursorView();				// 커서 설정. (커서 숨김)
int KeyControl();

#define Buffer_Width 148		// 화면 가로 길이	
#define Buffer_Height 41		// 화면 세로 길이

#define Fighter_Width 5
#define Fighter_Height 5

#define Bullet_Width 2
#define Bullet_Height 1

#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4

// 사용자 1 키
#define VK_W 0x57
#define VK_S 0x53
#define VK_A 0x41
#define VK_D 0x44
#define VK_C 0x43

// 사용자 2 키
#define VK_I 0x49
#define VK_K 0x4B
#define VK_J 0x4A
#define VK_L 0x4C
#define VK_N 0x4E

#define FighterSpeed 2
#define BulletSpeed 5

#define ShootSpan 0.3

struct Point {
	int X;
	int Y;
};

struct Fighter {
	char name[10];
	int team;
	struct Point pos;
};

struct Bullet {
	char name[10];
	int direction;
	struct Point pos;
	struct Bullet* prev;
	struct Bullet* next;
};

#endif 
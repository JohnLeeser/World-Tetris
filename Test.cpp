#include"Game.h"
#include"Player.h"
#include<ctime>
#include<cstdlib>
#include<Windows.h>
using namespace std;
Game* g;
int main() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);//��ȡ����̨�����Ϣ
	CursorInfo.bVisible = false; //���ؿ���̨���
	SetConsoleCursorInfo(handle, &CursorInfo);//���ÿ���̨���״̬
	//Hide the Cursor.

	srand(time(0));
	g = new Game();
	g->run();
	return 0;
}
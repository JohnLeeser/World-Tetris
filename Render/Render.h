#include<cstdlib>
#include<windows.h>
#include<conio.h>
#ifndef _Render
#define _Render
class Render
{
private:
	int type;				//ģʽ 
public:
	void Welcome();			//�׽���
	void SetColor(int);		//������ɫ
	void DrawMap1(int score);			//��Ϸ����
	void DrawMap2(int score1, int score2);
	void DrawGame1(int Map[32][12], int BrickCol, const int *NextBrick);  //single-player 
	static void HideCursor();
	static void SetTitle();
};

#endif


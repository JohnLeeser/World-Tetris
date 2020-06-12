#include<cstdlib>
#include<windows.h>
#include<conio.h>
#include<string>
#ifndef _Render
#define _Render
class Render
{
private:
	int type;				//ģʽ 
	static const char GameMap1[1000];
	static const char GameMap2[2500];
public:
	void Welcome(int);			//�׽���
	void SetColor(int);		//������ɫ
	void DrawScore1(int score);			//��Ϸ����
	void DrawScore2(int score1, int score2);
	void DrawGame1(int Map[32][12], const int* NowBrick, const int* NextBrick);  //single-player 
	void DrawGame2(	int Map1[32][12], const int* NowBrick1, const int* NextBrick1,
					int Map2[32][12], const int* NowBrick2, const int* NextBrick2);
	/*
		B1[0] is the color
		B2[0] is the color
		Map[i][j] = -1 is meant that the brick can't move
		Map[i][j] = 0 is meant that there is no brick
		Map[i][j] = x (1 <= x <= 10) meant (i,j) have a Brick is moving and color is x
	*/
	static void HideCursor();
	static void SetTitle();
	void Setting(int,bool[],int);//ƫ������
	void GameModeMenu(int);//ģʽ 
	void Explain();//����˵��
	void Participants();//������Ա
	void helpText(int);//˵���ĵ� 
	void End(int Cur, int num,const std::string &player1, int score1,const std::string &player2, int score);//��������
	void PreStart(int);//��ѡ
	int Len(int n);//��������λ��
	void historicRecord(const std::string &,int,int);
	void reName(const std::string&, const std::string&);
	void reName(const std::string&, const std::string&, int);

	void DrawGameMap(int);
};

#endif


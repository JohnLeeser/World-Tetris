#include<iostream>
#include<cstdlib>
#include<windows.h>
#include<conio.h>
using namespace std;

class Render
{
private:
	int type;				//模式 
	int score; 
public:
	void Welcome();			//首界面
	void SetColor(int);		//控制颜色
	void DrawMap1();			//游戏界面
	void DrawMap2(); 
};

void SetPos(int i, int j)			//控制光标位置， 列， 行
{
	COORD pos={i,j};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Render::Welcome()	//游戏刚进去的界面	
{
	SetColor(3);//设置颜色 
	char x;
	while(1)
	{
		system("cls");
		cout <<"		俄罗斯方块		" << endl;
		cout << "操作方式：" << endl;
		cout <<"单人				双人"<<endl; 
		cout << "↑ - 旋转			w - 旋转" << endl;
		cout << "↓ - 加速下移			s - 加速下移"  << endl;
		cout << "← - 左移			a - 左移" << endl;
		cout << "→ - 右移			d - 右移" << endl;
		cout <<"按1选择单人模式-按2选择双人模式" << endl;
		SetPos(20, 10);//控制光标位置， 列， 行
		x = getchar();
		if(x <= '9' && x >= '0')
		{
			type = x - '0';//模式 
			break;
		}
	}
}

void Render::SetColor(int color_num)//设置颜色
{
	int n;
	switch(color_num)
	{
		case 0: n = 0x08; break;
		case 1: n = 0x0C; break;
		case 2: n = 0x0D; break;
		case 3: n = 0x0E; break;
		case 4: n = 0x0A; break;
		case 5: n = 0x0F; break;
		case 6: n = 0x09; break;
		case 7: n = 0x0B; break;
		case 8: n = 0x05; break;
		case 9: n = 0x03; break;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
}
void Render::DrawMap1()				//单人画游戏时界面
{
	int i;
	for(i = 0; i <= 15; i++)	
	{
		SetColor(5);
		SetPos(i * 2, 0);
		cout << "■";
		SetPos(i * 2, 27);
		cout << "■";
	}
	
	for(i = 0; i < 27; i++) 
	{
		SetColor(5);
		SetPos(0, i);
		cout << "■";
		SetPos(15*2, i);
		cout << "■";
	}
	
	for(i = 16; i < 30; i++)		
	{
		SetColor(0);
		SetPos(i * 2, 0);
		cout << "☆";
		SetPos(i * 2, 10);
		cout << "☆";
	}
	
	for(i = 0; i <= 10; i++)	
	{
		SetColor(0);
		SetPos(32, i);
		cout << "☆";
		SetPos(60, i);
		cout << "☆";
	}
	
	SetPos(34, 2);
	cout << "分数: " << score; 
	SetPos(34, 5);
	cout << "下一图形:";
 } 

void Render::DrawMap2()				//双人画游戏时界面
{
	int i;
	SetColor(0);
//第一个计分的人 
	for(i = 0; i < 13; i++)		//宽13格计分 
	{
		SetColor(0);
		SetPos(i * 2, 0);
		cout << "☆";
		SetPos(i * 2, 10);
		cout << "☆";
	}
	
	for(i = 0; i <= 10; i++)		//高10格计分 
	{
		SetPos(0, i);
		cout << "☆";
		SetPos(13*2, i);
		cout << "☆";
	}
//第二个人计分的人 
	for(i = 43; i < 57; i++)		//宽13格计分 
	{
		SetPos(i * 2, 0);
		cout << "☆";
		SetPos(i * 2, 10);
		cout << "☆";
	}
	
	for(i = 0; i <= 10; i++)		//高10格计分 
	{
		SetPos(43*2, i);
		cout << "☆";
		SetPos(57*2, i);
		cout << "☆";
	}
//第一个人的界面 
	for(i = 14; i < 25; i++)		//宽13格计分 
	{
		SetColor(5);
		SetPos(i * 2, 21);
		cout << "■";
	}
	for(i = 0; i <= 21; i++)		//高21格计分 
	{
		SetColor(5);
		SetPos(50, i);
		cout << "■";
		SetPos(28, i);
		cout << "■";
	}
//第二个人的界面 
	for(i = 30; i < 42; i++)		//宽13格计分 
	{
		SetColor(5);
		SetPos(i * 2, 21);
		cout << "■";
	}
	for(i = 0; i <21; i++)		//高21格计分 
	{
		SetColor(5);
		SetPos(60, i);
		cout << "■";
		SetPos(82, i);
		cout << "■";
	}

	SetColor(3);
	//Input_score();
	SetPos(2, 2);
	cout << "分数: " << score; 
	SetPos(2, 5);
	cout << "下一图形:";
	SetPos(88, 2);
	cout << "分数: " << score; 
	SetPos(88, 5);
	cout << "下一图形:";
} 
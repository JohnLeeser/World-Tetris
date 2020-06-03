#include"Render.h"
#include<iostream>
using namespace std;

void Render::SetTitle() {
	string Title = "����˹������^^";
	SetConsoleTitle(Title.c_str());
}
void Render::HideCursor() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);//��ȡ����̨�����Ϣ
	CursorInfo.bVisible = false; //���ؿ���̨���
	SetConsoleCursorInfo(handle, &CursorInfo);//���ÿ���̨���״̬
}
void SetPos(short i, short j)			//���ƹ��λ�� �� ��

{

	COORD pos={i,j};

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}


void Render::Welcome()	//��Ϸ�ս�ȥ�Ľ���	

{

	SetColor(3);//������ɫ 

	char x;

	while(1)

	{

		system("cls");

		cout <<"		����˹����		" << endl;

		cout << "������ʽ��" << endl;

		cout <<"����				˫��"<<endl; 

		cout << "�� - ��ת			w - ��ת" << endl;

		cout << "�� - ��������			s - ��������"  << endl;

		cout << "�� - ����			a - ����" << endl;

		cout << "�� - ����			d - ����" << endl;

		cout <<"��1ѡ����ģʽ-��2ѡ��˫��ģʽ" << endl;

		SetPos(20, 10);//���ƹ��λ�ã� �У� ��

		x = getchar();

		if(x <= '9' && x >= '0')

		{

			type = x - '0';//ģʽ 

			break;

		}

	}

}



void Render::SetColor(int color_num)//������ɫ

{

	int n;

	switch(color_num)

	{

		case 0: n = 0x08; break;//��ɫ

		case 1: n = 0x0C; break;//��ɫ

		case 2: n = 0x0D; break;//��ɫ

		case 3: n = 0x0E; break;//��ɫ

		case 4: n = 0x0A; break;//��ɫ

		case 5: n = 0x0F; break;//��ɫ

		case 6: n = 0x09; break;//��ɫ

		case 7: n = 0x0B; break;//��ǳ��ɫ

		case 8: n = 0x05; break;//����ɫ

		case 9: n = 0x03; break;//ǳ��ɫ���е�����

		case 10:n = 0x00; break;//��ɫ

	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);

}

void Render::DrawMap1(int score)				//���˻���Ϸʱ����

{

	int i;

	for(i = 0; i <= 10; i++)	

	{

		SetColor(5);

		SetPos(i * 2, 0);

		cout << "��";

		SetPos(i * 2, 21);

		cout << "��";

	}

	

	for(i = 0; i <= 21; i++) 

	{

		SetColor(5);

		SetPos(0, i);

		cout << "��";

		SetPos(11*2, i);

		cout << "��";

	}

	

	for(i = 16; i < 30; i++)		

	{

		SetColor(0);

		SetPos(i * 2, 0);

		cout << "��";

		SetPos(i * 2, 10);

		cout << "��";

	}

	

	for(i = 0; i <= 10; i++)	

	{

		SetColor(0);

		SetPos(32, i);

		cout << "��";

		SetPos(60, i);

		cout << "��";

	}

	

	SetPos(34, 2);

	cout << "����: " << score; 

	SetPos(34, 5);

	cout << "��һͼ��:";

 } 

void Render::DrawGame1(int Map[32][12], int BrickCol, const int* NextBrick) {
	for (int i = 11; i <= 30; ++i) {
		for (int j = 1; j <= 10; ++j) {
			if (Map[i][j] == -1) {
				SetColor(0);
				SetPos(2 * j, (i - 10));
				cout << "��";
			}
			else if (Map[i][j] == 1) {
				SetColor(BrickCol);
				SetPos(2 * j, (i - 10));
				cout << "��";
			}
			else {
				SetPos(2 * j, i - 10);
				cout << "  ";
			}
		}
	}
	for (int i = 22; i <= 26; ++i) {
		for (int j = 6; j <= 9; ++j) {
			SetPos(2 * i, j);
			cout << "  ";
		}
	}
	SetColor(NextBrick[0]);
	for (int i = 1; i <= 7; i += 2) {
		int x = NextBrick[i] + 5;
		int y = NextBrick[i + 1] + 21;
		SetPos(2 * y, x);
		cout << "��";
	}

}



//-1�����ƶ��ķ��飬0�գ�1�����ƶ��ķ��飬 
void Render::DrawMap2(int score1, int score2)				//˫�˻���Ϸʱ����

{

	int i;

	SetColor(0);

//��һ���Ʒֵ��� 

	for(i = 0; i < 13; i++)		//��13��Ʒ� 

	{

		SetColor(0);

		SetPos(i * 2, 0);

		cout << "��";

		SetPos(i * 2, 10);

		cout << "��";

	}

	

	for(i = 0; i <= 10; i++)		//��10��Ʒ� 

	{

		SetPos(0, i);

		cout << "��";

		SetPos(13*2, i);

		cout << "��";

	}

//�ڶ����˼Ʒֵ��� 

	for(i = 43; i < 57; i++)		//��13��Ʒ� 

	{

		SetPos(i * 2, 0);

		cout << "��";

		SetPos(i * 2, 10);

		cout << "��";

	}

	

	for(i = 0; i <= 10; i++)		//��10��Ʒ� 

	{

		SetPos(43*2, i);

		cout << "��";

		SetPos(57*2, i);

		cout << "��";

	}

//��һ���˵Ľ��� 

	for(i = 14; i < 25; i++)		//��13��Ʒ� 

	{

		SetColor(5);
		
		SetPos(i * 2, 0);
		
		cout << "��";		

		SetPos(i * 2, 21);

		cout << "��";

	}

	for(i = 0; i <= 21; i++)		//��21��Ʒ� 

	{

		SetColor(5);

		SetPos(50, i);

		cout << "��";

		SetPos(28, i);

		cout << "��";

	}

//�ڶ����˵Ľ��� 

	for(i = 30; i < 42; i++)		//��13��Ʒ� 

	{

		SetColor(5);
		
		SetPos(i * 2, 0);
		
		cout << "��";
		

		SetPos(i * 2, 21);

		cout << "��";

	}

	for(i = 0; i <21; i++)		//��21��Ʒ� 

	{

		SetColor(5);

		SetPos(60, i);

		cout << "��";

		SetPos(82, i);

		cout << "��";

	}



	SetColor(5);

	//Input_score();

	SetPos(2, 2);

	cout << "����: " << score1; 

	SetPos(2, 5);

	cout << "��һͼ��:";

	SetPos(88, 2);

	cout << "����: " << score2; 

	SetPos(88, 5);

	cout << "��һͼ��:";

} 

/*Map1 begin (15, 1)
  Map2 begin (31, 1)
*/
void Render::DrawGame2(int Map1[32][12], const int *B1, int Map2[32][12], const int *B2) {
	//player1's map
	for (int i = 11; i <= 30; ++i) {
		for (int j = 1; j <= 10; ++j) {
			if (Map1[i][j] == -1)
				SetColor(0);
			else if (Map1[i][j] == 0)
				SetColor(10);
			else
				SetColor(Map1[i][j]);
			SetPos(2 * (j + 14), i - 10);
			cout << "��";
		}
	}
	//player2's map
	for (int i = 11; i <= 30; ++i) {
		for (int j = 1; j <= 10; ++j) {
			if (Map2[i][j] == -1)
				SetColor(0);
			else if (Map2[i][j] == 0)
				SetColor(10);
			else
				SetColor(Map2[i][j]);
			SetPos(2 * (j + 30), i - 10);
			cout << "��";
		}
	}
	//player1's next brick
	//7,5
	for (int i = 6; i <= 9; ++i) {
		for (int j = 6; j <= 9; ++j) {
			SetPos(2 * i, j);
			cout << "  ";
		}
	}
	SetColor(B1[0]);
	for (int i = 1; i <= 7; i += 2) {
		int x = B1[i] + 5;
		int y = B1[i + 1] + 5;
		SetPos(2 * y, x);
		cout << "��";
	}
	//player2's next brick 	
	//43,5 
	for (int i = 48; i <= 53; ++i) {
		for (int j = 6; j <= 9; ++j) {
			SetPos(2 * i, j);
			cout << "  ";
		}
	}
	SetColor(B2[0]);
	for (int i = 1; i <= 7; i += 2) {
		int x = B2[i] + 5;
		int y = B2[i + 1] + 48;
		SetPos(2 * y, x);
		cout << "��";
	}
} 



#include"Render.h"
#include<windows.h>
#include<iostream>
#include<cstring>
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

const char Render::GameMap1[1000]= { "������������������������        ����������������\n��                    ��        ��                          ��\n��                    ��        �������                    ��\n��                    ��        ��                          ��\n��                    ��        ��                          ��\n��                    ��        ����һͼ�Σ�                ��\n��                    ��        ��                          ��\n��                    ��        ��                          ��\n��                    ��        ��                          ��\n��                    ��        ��                          ��\n��                    ��        ����������������\n��                    ��\n��                    ��\n��                    ��\n��                    ��\n��                    ��\n��                    ��\n��                    ��\n��                    ��\n��                    ��\n��                    ��\n������������������������\n" };
const char Render::GameMap2[2500] = { "��������������������������������������        ������������������������  ����������������\n��                        ���                    ��        ��                    ��  ��                          ��\n�������                  ���                    ��        ��                    ��  �������                    ��\n��                        ���                    ��        ��                    ��  ��                          ��\n��                        ���                    ��        ��                    ��  ��                          ��\n����һͼ�Σ�              ���                    ��        ��                    ��  ����һͼ�Σ�                ��\n��                        ���                    ��        ��                    ��  ��                          ��\n��                        ���                    ��        ��                    ��  ��                          ��\n��                        ���                    ��        ��                    ��  ��                          ��\n��                        ���                    ��        ��                    ��  ��                          ��\n����������������                    ��        ��                    ��  ����������������\n                            ��                    ��        ��                    ��\n                            ��                    ��        ��                    ��\n                            ��                    ��        ��                    ��\n                            ��                    ��        ��                    ��\n                            ��                    ��        ��                    ��\n                            ��                    ��        ��                    ��\n                            ��                    ��        ��                    ��\n                            ��                    ��        ��                    ��\n                            ��                    ��        ��                    ��\n                            ��                    ��        ��                    ��\n                            ������������������������        ������������������������\n" };

void Render::DrawGameMap(int CountPlayer) {
	system("cls");
	SetColor(5);
	if (0);
	else if (CountPlayer == 1)
		fwrite(GameMap1, 1, sizeof(GameMap1), stdout);
	else if (CountPlayer == 2)
		fwrite(GameMap2, 1, sizeof(GameMap2), stdout);
}

void SetPos(short i, short j)			//���ƹ��λ�� �� ��

{

	COORD pos={i,j};

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

}


void Render::Setting(int Cur, bool SettingProperties[],int CountProperties) {
	static char SettingUI[] = { "����������������������\n��                  ��\n��    ��������    ��\n��                  ��\n��    �������֣�    ��\n��                  ��\n��    ������Ч��    ��\n��                  ��\n��    ������Ч��    ��\n��                  ��\n��    ����          ��\n��                  ��\n����������������������\n" };
	system("cls");
	fwrite(SettingUI, 1, sizeof(SettingUI), stdout);
	for (int i = 0; i < CountProperties; i++) {
		SetPos(16, 2 * i + 2);
		if (SettingProperties[i] == 1) fwrite("��", 1, 2, stdout);
		else fwrite("��", 1, 2, stdout);
	}
	SetPos(4, 2 * Cur + 2);
	fwrite(">>", 1, 2, stdout);
}

void Render::Welcome(int Cur)	//��Ϸ�ս�ȥ�Ľ���	
{
	static char welcomeUI[] = { "������������������\n��              ��\n��  ����˹����  ��\n��              ��\n������������������\n��              ��\n��   ��ʼ��Ϸ   ��\n��              ��\n��   �޸�����   ��\n��              ��\n��   ����˵��   ��\n��              ��\n��   ������Ա   ��\n��              ��\n��   �������   ��\n��              ��\n��   �˳���Ϸ   ��\n��              ��\n������������������\n" };
	system("cls");
	SetColor(3);
	/*if (Cur == 0) {
		welcomeUI[117] = welcomeUI[118] = '>';
	}
	else if (Cur == 1) {
		welcomeUI[155] = welcomeUI[156] = '>';
	}
	else if (Cur == 2) {
		welcomeUI[193] = welcomeUI[194] = '>';
	}
	else if (Cur == 3) {
		welcomeUI[231] = welcomeUI[232] = '>';
	}*/
	fwrite(welcomeUI, 1, sizeof(welcomeUI), stdout);
	SetPos(3, 6+Cur*2);
	fwrite(">>", 1, 2, stdout);
}
void Render::Explain()
{
	system("cls");
	SetColor(3);
	cout << "����������������������������������" << endl;
	cout << "��                              ��" << endl;
	cout << "��                              ��" << endl;
	cout << "��      ����ģʽ                ��" << endl;
	cout << "��                              ��" << endl;
	cout << "��       �� & w - ��ת\t\t��" << endl;
	cout << "��       �� & s - �ٽ�\t\t��" << endl;
	cout << "��      �� & a - ����\t\t��" << endl;
	cout << "��      �� & d - ����\t\t��" << endl;
	cout << "��       pause - ��ͣ\t\t��" << endl;
	cout << "��                              ��" << endl;
	cout << "��                              ��" << endl;
	cout << "����������������������������������" << endl;
	cout << endl;
	cout << "����������������������������������" << endl;
	cout << "��                              ��" << endl;
	cout << "��                              ��" << endl;
	cout << "��   ˫��ģʽ                   ��" << endl;
	cout << "��                              ��" << endl;
	cout << "��    �� - ��ת\tw - ��ת\t��" << endl;
	cout << "��    �� - �ٽ�\ts - �ٽ�\t��" << endl;
	cout << "��   �� - ����\td - ����\t��" << endl;
	cout << "��   �� - ����\ta - ����\t��" << endl;
	cout << "��       pause - ��ͣ\t\t��" << endl;
	cout << "��                              ��" << endl;
	cout << "��                              ��" << endl;
	cout << "����������������������������������" << endl;
	cout << endl;
	cout << ">> ^����^" << endl;
}
void Render::GameModeMenu(int Cur)
{
	system("cls");
	SetColor(3);
	std::cout << "������������������������������" << std::endl;

	std::cout << "��                          ��" << std::endl;

	std::cout << "��      ��ѡ����Ϸģʽ      ��" << std::endl;

	std::cout << "��                          ��" << std::endl;

	std::cout << "�� ( ESC �����˻ؿ�ʼ����)  ��" << std::endl;

	std::cout << "��                          ��" << std::endl;

	std::cout << "��                          ��" << std::endl;

	std::cout << "��    " << char((0 == Cur) * '>') << char((0 == Cur) * '>') << " " << "0.��������" << "         ��" << std::endl;

	std::cout << "��                          ��" << std::endl;

	std::cout << "��    " << char((1 == Cur) * '>') << char((1 == Cur) * '>') << " " << "1.���˼���" << "         ��" << std::endl;

	std::cout << "��                          ��" << std::endl;

	std::cout << "��    " << char((2 == Cur) * '>') << char((2 == Cur) * '>') << " " << "2.���˼���" << "         ��" << std::endl;

	std::cout << "��                          ��" << std::endl;

	std::cout << "��    " << char((3 == Cur) * '>') << char((3 == Cur) * '>') << " " << "3.���˼��м���" << "     ��" << std::endl;

	std::cout << "��                          ��" << std::endl;

	std::cout << "��    " << char((4 == Cur) * '>') << char((4 == Cur) * '>') << " " << "4.˫������" << "         ��" << std::endl;

	std::cout << "��                          ��" << std::endl;

	std::cout << "��    " << char((5 == Cur) * '>') << char((5 == Cur) * '>') << " " << "5.˫�˼���" << "         ��" << std::endl;

	std::cout << "��                          ��" << std::endl;

	std::cout << "��    " << char((6 == Cur) * '>') << char((6 == Cur) * '>') << " " << "6.˫�˼���" << "         ��" << std::endl;

	std::cout << "��                          ��" << std::endl;

	std::cout << "��    " << char((7 == Cur) * '>') << char((7 == Cur) * '>') << " " << "7.˫�˼��м���" << "     ��" << std::endl;

	std::cout << "��                          ��" << std::endl;

	std::cout << "��    " << char((8 == Cur) * '>') << char((8 == Cur) * '>') << " " << "8.˫�˴����˳�" << "     ��" << std::endl;

	std::cout << "��                          ��" << std::endl;

	std::cout << "��    " << char((9 == Cur) * '>') << char((9 == Cur) * '>') << " " << "9.˫�˴����˳�����" << " ��" << std::endl;

	std::cout << "��                          ��" << std::endl;
	std::cout << "��                          ��" << std::endl;
	std::cout << "������������������������������" << std::endl;
}
void Render::Participants()
{
	system("cls");
	SetColor(3);
	cout << "������������������������������" << endl;
	cout << "��                          ��" << endl;
	cout << "��                          ��" << endl;
	cout << "��  ���򿪷�������Ա��      ��" << endl;
	cout << "��                          ��" << endl;
	cout << "��    JustinRochester       ��" << endl;
	cout << "��                          ��" << endl;
	cout << "��    Taj426                ��" << endl;
	cout << "��                          ��" << endl;
	cout << "��    fzuliaoliao           ��" << endl;
	cout << "��                          ��" << endl;
	cout << "��  �ر��л��              ��" << endl;
	cout << "��                          ��" << endl;
	cout << "��    yingluosanqian        ��" << endl;
	cout << "��                          ��" << endl;
	cout << "��                          ��" << endl;
	cout << "������������������������������" << endl;
	cout << endl;
	cout << endl;
	cout << ">> ^����^" << endl;
}
void Render::helpText(int GameMode)
{
	system("cls");
	SetColor(5);
	cout << endl;
	Sleep(1000);
	cout << "  �����ǿ����������ʱ��ʲô����Ҫ�ɣ�����ô��������" << endl << endl;
	Sleep(1500);
	cout << "  ˭�ȶ����컨�壬˭��Ӯ�ˡ�" << endl;
	Sleep(1000);
	cout << endl;

	SetColor(3);
	cout << "  ��������Ҷ����飬��������������������ǻ��¼���ǵķ�����" << endl << endl;
	
	cout << "\t���� 1 �У���¼ 10 ��" << endl << endl;

	cout << "\t���� 2 �У���¼ 30 ��" << endl << endl;

	cout << "\t���� 3 �У���¼ 60 ��" << endl << endl;

	cout << "\t���� 4 �У���¼ 100 ��" << endl << endl;

	cout << endl;

	if (GameMode == 2 || GameMode == 3 || GameMode == 6 || GameMode == 7 || GameMode == 9) {

		cout << "  Ϊ�����������˻��ܶ����컨�壬ÿ�� 10 �֣������������һ�Σ�ֱ������" << endl;

		cout << endl;

	}

	if (GameMode == 8 || GameMode == 9) {

		cout << "  ͬʱ��Ϊ�˷���������Ѷ����컨�塣��ÿ������һ�У�������Ѿͻ�����һ��" << endl;

		cout << endl;

	}

	if (GameMode == 1 || GameMode == 3 || GameMode == 5 || GameMode == 7) {

		cout << "  Ϊ�˷������Ƕ����컨�壬ÿ�η��������� 1% �ĸ��ʴ������� buff :" << endl << endl;
	
		cout << "\t������ 40% �ĸ������� 1 ��" << endl << endl;
	
		cout << "\t������ 30% �ĸ������� 2 ��" << endl << endl;
	
		cout << "\t������ 20% �ĸ������� 3 ��" << endl << endl;

		cout << "\t������ 10% �ĸ������� 4 ��" << endl << endl;

		cout << endl;

	}

	cout << endl;

	cout << ">> ^����^" << endl;

}

void Render::reName(const string& Name1, const string& Name2, int Cur) {
	system("cls");
	SetColor(3);

	cout << "������������������������������" << endl;
	cout << "��                          ��" << endl;
	if (Cur == 0)
		cout << "�� >> ���1��               ��" << endl;
	else
		cout << "��    ���1��               ��" << endl;
	cout << "��                          ��" << endl;

	if (Cur == 1)
		cout << "�� >> ���1��               ��" << endl;
	else
		cout << "��    ���1��               ��" << endl;
	cout << "��                          ��" << endl;

	if (Cur == 2)
		cout << "�� >> ����                  ��" << endl;
	else
		cout << "��    ����                  ��" << endl;
	cout << "��                          ��" << endl;
	cout << "������������������������������" << endl;

	SetPos(13, 2);
	cout << Name1;
	SetPos(13, 4);
	cout << Name2;
}

void Render::reName(const string& Name1, const string& Name2) {
	system("cls");
	SetColor(3);
	cout << "������16�ַ��ڵ����������� ENTER ��ȷ�ϣ�ESC ������" << endl;
	cout << endl;
	cout << "ԭ���ƣ�" << Name1 << endl;
	cout << endl;
	cout << "�����ƣ�" << Name2 << endl;
}

void Render::historicRecord(const string& Name, int Score, int Cur) {
	system("cls");
	cout << "������������������������������" << endl;
	cout << "��                          ��" << endl;
	cout << "��                          ��" << endl;
	cout << "��                          ��" << endl;
	cout << "��                          ��" << endl;
	cout << "��                          ��" << endl;
	cout << "��                          ��" << endl;
	cout << "������������������������������" << endl;
	cout << endl;
	if(Cur==0)
		cout << ">> ����" << endl;
	else
		cout << "   ����" << endl;
	if (Cur == 1)
		cout << ">> �����¼" << endl;
	else
		cout << "   �����¼" << endl;
	int Pos = 30 - Name.size();
	Pos >>= 1;
	if (Pos & 1) Pos ^= 1;
	SetPos(Pos, 3);
	cout << Name << "��";
	SetPos(13, 4);
	cout << Score << "��";
}

void Render::PreStart(int Cur)
{
	system("cls");
	SetColor(3);
	cout << "������������������������������" << endl;
	cout << "��                          ��" << endl;
	cout << "��                          ��" << endl;
	if (Cur == 0)
	cout << "��      >> ��ʼ��Ϸ         ��" << endl;
	else
	cout << "��         ��ʼ��Ϸ         ��" << endl;
	cout << "��                          ��" << endl;
	if (Cur == 1)
		cout << "��      >> �޸�����         ��" << endl;
	else
		cout << "��         �޸�����         ��" << endl;
	cout << "��                          ��" << endl;
	if (Cur == 2)
	cout << "��      >> �鿴����         ��" << endl;
	else
	cout << "��         �鿴����         ��" << endl;
	cout << "��                          ��" << endl;
	if (Cur == 3)
		cout << "��      >> ��ʷ��¼         ��" << endl;
	else
		cout << "��         ��ʷ��¼         ��" << endl;
	cout << "��                          ��" << endl;
	if (Cur == 4)
	cout << "��      >> ����ģʽ         ��" << endl;
	else
	cout << "��         ����ģʽ         ��" << endl;
	cout << "��                          ��" << endl;
	if (Cur == 5)
	cout << "��      >> �˳���Ϸ         ��" << endl;
	else
	cout << "��         �˳���Ϸ         ��" << endl;
	cout << "��                          ��" << endl;
	cout << "��                          ��" << endl;
	cout << "������������������������������" << endl;
}

void Render::End(int Cur, int num, const string& player1, int score1, const string& player2, int score2)
{
	system("cls");
	SetColor(3);
	cout << "������������������������������" << endl;
	cout << "��                          ��" << endl;
	cout << "��                          ��" << endl;
	cout << "��         ��Ϸ������       ��" << endl;
	cout << "��                          ��" << endl;
	cout << "��           �÷�           ��" << endl;
	cout << "��                          ��" << endl;
	for (int i = 1; i <= num; i++)
		for (int j = 1; j <= 3; j++)
			cout << "��                          ��" << endl;
	if (Cur == 0)
	cout << "��      >> ������Ϸ         ��" << endl;
	else
	cout << "��         ������Ϸ         ��" << endl;
	cout << "��                          ��" << endl;
	if (Cur == 1)
	cout << "��      >> ����ģʽ         ��" << endl;
	else
	cout << "��         ����ģʽ         ��" << endl;
	cout << "��                          ��" << endl;
	if (Cur == 2)
	cout << "��      >> ���ز˵�         ��" << endl;
	else
	cout << "��         ���ز˵�         ��" << endl;
	cout << "��                          ��" << endl;
	if (Cur == 3)
	cout << "��      >> �˳���Ϸ         ��" << endl;
	else
	cout << "��         �˳���Ϸ         ��" << endl;
	cout << "��                          ��" << endl;
	cout << "��                          ��" << endl;
	cout << "������������������������������" << endl;

	int Pos = 30 - player1.size();
	Pos >>= 1;
	if (Pos & 1) Pos ^= 1;
	SetPos(Pos, 7);
	cout << player1 << "��";
	SetPos(13, 8);
	cout << score1 << "��";
	SetPos(0, 10);
	if (num == 2) {
		Pos = 30 - player2.size();
		Pos >>= 1;
		if (Pos & 1) Pos ^= 1;
		SetPos(Pos, 10);
		cout << player2 << "��";
		SetPos(13, 11);
		cout << score2 << "��";
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

void Render::DrawScore1(int score)				//���˻���Ϸʱ����

{
	SetPos(40, 2);
	SetColor(5);
	printf("%d", score);

	/*int i;

	for (i = 0; i <= 10; i++)

	{

		SetColor(5);

		SetPos(i * 2, 0);

		fwrite("��", 1, 2, stdout);

		SetPos(i * 2, 21);

		fwrite("��", 1, 2, stdout);

	}



	for (i = 0; i <= 21; i++)

	{

		SetColor(5);

		SetPos(0, i);

		fwrite("��", 1, 2, stdout);

		SetPos(11 * 2, i);

		fwrite("��", 1, 2, stdout);

	}



	for (i = 16; i < 30; i++)

	{

		SetColor(0);

		SetPos(i * 2, 0);

		fwrite("��", 1, 2, stdout);

		SetPos(i * 2, 10);

		fwrite("��", 1, 2, stdout);

	}



	for (i = 0; i <= 10; i++)

	{

		SetColor(0);

		SetPos(32, i);

		fwrite("��", 1, 2, stdout);

		SetPos(60, i);

		fwrite("��", 1, 2, stdout);

	}



	SetPos(34, 2);

	printf("������%d", score);

	SetPos(34, 5);

	printf("��һͼ�Σ�");*/

}

void Render::DrawGame1(int Map[32][12], const int* NowBrick, const int* NextBrick) {
	SetColor(0);
	for (int i = 11; i <= 30; ++i) {
		char LineSqure[32] = { 0 }, * pLine = LineSqure;
		for (int j = 1; j <= 10; j++) {
			if (Map[i][j] == -1)
				strcpy_s(pLine, 3, "��");
			else
				strcpy_s(pLine, 3, "  ");
			pLine += 2;
		}
		SetPos(2, (i - 10));
		fwrite(LineSqure, 1, 20, stdout);
	}
	/*for (int i = 11; i <= 30; ++i) {
		for (int j = 1; j <= 10; ++j) {
			if (Map[i][j] == -1) {
				SetColor(0);
				SetPos(2 * j, (i - 10));
				fwrite("��", 1, 2, stdout);
			}
			else if (Map[i][j] > 0) {
				SetColor(Map[i][j]);
				SetPos(2 * j, (i - 10));
				fwrite("��", 1, 2, stdout);
			}
			else {
				SetPos(2 * j, i - 10);
				fwrite("  ", 1, 2, stdout);
			}
		}
	}*/
	SetColor(NowBrick[0]);
	for (int i = 1; i <= 7; i += 2) {
		int x = NowBrick[i];
		int y = NowBrick[i + 1];
		if (x <= 10) continue;
		SetPos(2 * y, (x - 10));
		fwrite("��", 1, 2, stdout);
	}
	for (int i = 22; i <= 26; ++i) {
		for (int j = 6; j <= 9; ++j) {
			SetPos(2 * i, j);
			fwrite("  ", 1, 2, stdout);
		}
	}
	SetColor(NextBrick[0]);
	for (int i = 1; i <= 7; i += 2) {
		int x = NextBrick[i] + 5;
		int y = NextBrick[i + 1] + 21;
		SetPos(2 * y, x);
		fwrite("��", 1, 2, stdout);
	}

}



//-1�����ƶ��ķ��飬0�գ�1�����ƶ��ķ��飬 
void Render::DrawScore2(int score1, int score2)				//˫�˻���Ϸʱ����

{

	SetColor(5);
	SetPos(8, 2);
	printf("%d", score1);
	SetPos(94, 2);
	printf("%d", score2);

	//int i;

	//SetColor(0);

	////��һ���Ʒֵ��� 

	//for (i = 0; i < 13; i++)		//��13��Ʒ� 

	//{

	//	SetColor(0);

	//	SetPos(i * 2, 0);

	//	fwrite("��", 1, 2, stdout);

	//	SetPos(i * 2, 10);

	//	fwrite("��", 1, 2, stdout);

	//}



	//for (i = 0; i <= 10; i++)		//��10��Ʒ� 

	//{

	//	SetPos(0, i);

	//	fwrite("��", 1, 2, stdout);

	//	SetPos(13 * 2, i);

	//	fwrite("��", 1, 2, stdout);

	//}

	////�ڶ����˼Ʒֵ��� 

	//for (i = 43; i < 57; i++)		//��13��Ʒ� 

	//{

	//	SetPos(i * 2, 0);

	//	fwrite("��", 1, 2, stdout);

	//	SetPos(i * 2, 10);

	//	fwrite("��", 1, 2, stdout);

	//}



	//for (i = 0; i <= 10; i++)		//��10��Ʒ� 

	//{

	//	SetPos(43 * 2, i);

	//	fwrite("��", 1, 2, stdout);

	//	SetPos(57 * 2, i);

	//	fwrite("��", 1, 2, stdout);

	//}

	////��һ���˵Ľ��� 

	//for (i = 14; i < 25; i++)		//��13��Ʒ� 

	//{

	//	SetColor(5);

	//	SetPos(i * 2, 0);

	//	fwrite("��", 1, 2, stdout);

	//	SetPos(i * 2, 21);

	//	fwrite("��", 1, 2, stdout);

	//}

	//for (i = 0; i <= 21; i++)		//��21��Ʒ� 

	//{

	//	SetColor(5);

	//	SetPos(50, i);

	//	fwrite("��", 1, 2, stdout);

	//	SetPos(28, i);

	//	fwrite("��", 1, 2, stdout);

	//}

	////�ڶ����˵Ľ��� 

	//for (i = 30; i < 42; i++)		//��13��Ʒ� 

	//{

	//	SetColor(5);

	//	SetPos(i * 2, 0);

	//	fwrite("��", 1, 2, stdout);


	//	SetPos(i * 2, 21);

	//	fwrite("��", 1, 2, stdout);

	//}

	//for (i = 0; i < 21; i++)		//��21��Ʒ� 

	//{

	//	SetColor(5);

	//	SetPos(60, i);

	//	fwrite("��", 1, 2, stdout);

	//	SetPos(82, i);

	//	fwrite("��", 1, 2, stdout);

	//}



	//SetColor(5);

	////Input_score();

	//SetPos(2, 2);

	//printf("������%d", score1);

	//SetPos(2, 5);

	//printf("��һͼ�Σ�");

	//SetPos(88, 2);

	//printf("������%d", score2);

	//SetPos(88, 5);

	//printf("��һͼ�Σ�");

}

/*Map1 begin (15, 1)
  Map2 begin (31, 1)
*/
void Render::DrawGame2(int Map1[32][12], const int* NowBrick1, const int* NextBrick1,
	int Map2[32][12], const int* NowBrick2, const int* NextBrick2) {
	//player1's map
	SetColor(0);
	for (int i = 11; i <= 30; ++i) {
		char LineSqure1[32] = { 0 }, * pLine1 = LineSqure1;
		char LineSqure2[32] = { 0 }, * pLine2 = LineSqure2;
		for (int j = 1; j <= 10; j++) {
			if (Map1[i][j] == -1)
				strcpy_s(pLine1, 3, "��");
			else
				strcpy_s(pLine1, 3, "  ");
			pLine1 += 2;
		}
		SetPos(30, (i - 10));
		fwrite(LineSqure1, 1, 20, stdout);

		for (int j = 1; j <= 10; j++) {
			if (Map2[i][j] == -1)
				strcpy_s(pLine2, 3, "��");
			else
				strcpy_s(pLine2, 3, "  ");
			pLine2 += 2;
		}
		SetPos(62, (i - 10));
		fwrite(LineSqure2, 1, 20, stdout);
	}
	SetColor(NowBrick1[0]);
	for (int i = 1; i <= 7; i += 2) {
		int x = NowBrick1[i];
		int y = NowBrick1[i + 1];
		if (x <= 10) continue;
		SetPos(2 * (y + 14), (x - 10));
		fwrite("��", 1, 2, stdout);
	}
	SetColor(NowBrick2[0]);
	for (int i = 1; i <= 7; i += 2) {
		int x = NowBrick2[i];
		int y = NowBrick2[i + 1];
		if (x <= 10) continue;
		SetPos(2 * (y + 30), (x - 10));
		fwrite("��", 1, 2, stdout);
	}
	//for (int i = 11; i <= 30; ++i) {
	//	for (int j = 1; j <= 10; ++j) {
	//		if (Map1[i][j] == -1)
	//			SetColor(0);
	//		else if (Map1[i][j] == 0)
	//			SetColor(10);
	//		else
	//			SetColor(Map1[i][j]);
	//		SetPos(2 * (j + 14), i - 10);
	//		fwrite("��", 1, 2, stdout);
	//		if (Map2[i][j] == -1)
	//			SetColor(0);
	//		else if (Map2[i][j] == 0)
	//			SetColor(10);
	//		else
	//			SetColor(Map2[i][j]);
	//		SetPos(2 * (j + 30), i - 10);
	//		fwrite("��", 1, 2, stdout);
	//	}
	//}

	////player1's next brick
	for (int i = 6; i <= 9; ++i) {
		for (int j = 6; j <= 9; ++j) {
			SetPos(2 * i, j);
			fwrite("  ", 1, 2, stdout);
		}
	}
	SetColor(NextBrick1[0]);
	for (int i = 1; i <= 7; i += 2) {
		int x = NextBrick1[i] + 5;
		int y = NextBrick1[i + 1] + 5;
		SetPos(2 * y, x);
		fwrite("��", 1, 2, stdout);
	}
	////7,5
	//for (int i = 6; i <= 9; ++i) {
	//	for (int j = 6; j <= 9; ++j) {
	//		SetPos(2 * i, j);
	//		fwrite("  ", 1, 2, stdout);
	//	}
	//}
	//SetColor(B1[0]);
	//for (int i = 1; i <= 7; i += 2) {
	//	int x = B1[i] + 5;
	//	int y = B1[i + 1] + 5;
	//	SetPos(2 * y, x);
	//	fwrite("��", 1, 2, stdout);
	//}
	////player2's next brick 	
	for (int i = 48; i <= 53; ++i) {
		for (int j = 6; j <= 9; ++j) {
			SetPos(2 * i, j);
			fwrite("  ", 1, 2, stdout);
		}
	}
	SetColor(NextBrick2[0]);
	for (int i = 1; i <= 7; i += 2) {
		int x = NextBrick2[i] + 5;
		int y = NextBrick2[i + 1] + 48;
		SetPos(2 * y, x);
		fwrite("��", 1, 2, stdout);
	}
	////43,5 
	//for (int i = 48; i <= 53; ++i) {
	//	for (int j = 6; j <= 9; ++j) {
	//		SetPos(2 * i, j);
	//		fwrite("  ", 1, 2, stdout);
	//	}
	//}
	//SetColor(B2[0]);
	//for (int i = 1; i <= 7; i += 2) {
	//	int x = B2[i] + 5;
	//	int y = B2[i + 1] + 48;
	//	SetPos(2 * y, x);
	//	fwrite("��", 1, 2, stdout);
	//}
}

int Render::Len(int n) {
	int ret = 0;
	do {
		n /= 10;
		ret++;
	} while (n);
	return ret;
}
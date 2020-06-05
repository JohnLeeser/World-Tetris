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


void Render::Welcome(int Cur)	//��Ϸ�ս�ȥ�Ľ���	
{
	system("cls");
	SetColor(3);//������ɫ 
	cout << endl << "   ����˹����		" << endl;
	cout << endl;
	SetColor(5);
	cout << "________________" << endl;
	cout << "                >" << endl;
	if (Cur == 0) cout << ">> ��ʼ��Ϸ     >" << endl;
	else cout << "   ��ʼ��Ϸ     >" << endl;
	if (Cur == 1) cout << ">> ����˵��     >" << endl;
	else cout << "   ����˵��     >" << endl;
	if (Cur == 2) cout << ">> ������Ա��Ϣ >" << endl;
	else cout << "   ������Ա��Ϣ >" << endl;
	if (Cur == 3) cout << ">> �˳���Ϸ     >" << endl;
	else cout << "   �˳���Ϸ     >" << endl;
	cout << "________________>" << endl;
}
void Render::Explain()
{
	system("cls");
	SetColor(5);
	cout << "_________________________" << endl;
	cout << "\t\t\to" << endl;
	cout << "  ����ģʽ  ��������\to" << endl;
	cout << "  ��& w - ��ת\t\to" << endl;
	cout << "  ��& s - ��������\to" << endl;
	cout << "  ��& a - ����\t\to" << endl;
	cout << "  ��& d - ����\t\to" << endl;
	cout << "________________________o" << endl;
	cout << endl;
	cout << "_________________________________" << endl;
	cout << "\t\t\t\to" << endl;
	cout << "  ˫��ģʽ ��������\t\to" << endl;
	cout << "  �� - ��ת	w - ��ת\to" << endl;
	cout << "  �� - ��������	s - ��������\to" << endl;
	cout << "  �� - ����	d - ����\to" << endl;
	cout << "  �� - ����	a - ����\to" << endl;
	cout << "________________________________o" << endl;
	cout << endl;
	cout << endl;
	cout << ">> ^����^" << endl;
}
void Render::GameModeMenu(int Cur)
{
	system("cls");

	std::cout << "<><><><><><><><><><><><><><><>" << std::endl;

	std::cout << "<>                          <>" << std::endl;

	std::cout << "<>      ��ѡ����Ϸģʽ      <>" << std::endl;

	std::cout << "<>                          <>" << std::endl;

	std::cout << "<> ( ESC �����˻ؿ�ʼ����)  <>" << std::endl;

	std::cout << "<>                          <>" << std::endl;

	std::cout << "<>                          <>" << std::endl;

	std::cout << "<>    " << char((0 == Cur) * '>') << char((0 == Cur) * '>') << " " << "0.��������" << "         <>" << std::endl;

	std::cout << "<>                          <>" << std::endl;

	std::cout << "<>    " << char((1 == Cur) * '>') << char((1 == Cur) * '>') << " " << "1.���˼���" << "         <>" << std::endl;

	std::cout << "<>                          <>" << std::endl;

	std::cout << "<>    " << char((2 == Cur) * '>') << char((2 == Cur) * '>') << " " << "2.���˼���" << "         <>" << std::endl;

	std::cout << "<>                          <>" << std::endl;

	std::cout << "<>    " << char((3 == Cur) * '>') << char((3 == Cur) * '>') << " " << "3.���˼��м���" << "     <>" << std::endl;

	std::cout << "<>                          <>" << std::endl;

	std::cout << "<>    " << char((4 == Cur) * '>') << char((4 == Cur) * '>') << " " << "4.˫������" << "         <>" << std::endl;

	std::cout << "<>                          <>" << std::endl;

	std::cout << "<>    " << char((5 == Cur) * '>') << char((5 == Cur) * '>') << " " << "5.˫�˼���" << "         <>" << std::endl;

	std::cout << "<>                          <>" << std::endl;

	std::cout << "<>    " << char((6 == Cur) * '>') << char((6 == Cur) * '>') << " " << "6.˫�˼���" << "         <>" << std::endl;

	std::cout << "<>                          <>" << std::endl;

	std::cout << "<>    " << char((7 == Cur) * '>') << char((7 == Cur) * '>') << " " << "7.˫�˼��м���" << "     <>" << std::endl;

	std::cout << "<>                          <>" << std::endl;

	std::cout << "<>    " << char((8 == Cur) * '>') << char((8 == Cur) * '>') << " " << "8.˫�˴����˳�" << "     <>" << std::endl;

	std::cout << "<>                          <>" << std::endl;

	std::cout << "<>    " << char((9 == Cur) * '>') << char((9 == Cur) * '>') << " " << "9.˫�˴����˳�����" << " <>" << std::endl;

	std::cout << "<>                          <>" << std::endl;

	std::cout << "<><><><><><><><><><><><><><><>" << std::endl;
}
void Render::Participants()
{
	system("cls");
	SetColor(5);
	cout << "���򿪷�������Ա�� JustinRochester" << endl;
	cout << endl;
	cout << "                   Taj426" << endl;
	cout << endl;
	cout << "                   fzuliaoliao" << endl;
	cout << endl;
	cout << "        �ر��л�� yingluosanqian" << endl;
	cout << endl;
	cout << ">> ^����^" << endl;
}
void Render::helpText(int GameMode)
{
	system("cls");
	SetColor(5);
	cout << endl;
	cout << "  �����ǿ����������ʱ��ʲô����Ҫ�ɣ�����ô��������" << endl;

	cout << "  ˭�ȶ����컨�壬˭��Ӯ�ˡ�" << endl;

	cout << endl;

	cout << "  ��������Ҷ����飬��������������������ǻ��¼���ǵķ�����" << endl;

	cout << "\t���� 1 �У���¼ 10 ��" << endl;

	cout << "\t���� 2 �У���¼ 30 ��" << endl;

	cout << "\t���� 3 �У���¼ 60 ��" << endl;

	cout << "\t���� 4 �У���¼ 100 ��" << endl;

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

		cout << "  Ϊ�˷������Ƕ����컨�壬ÿ�η��������� 1% �ĸ��ʴ������� buff :" << endl;

		cout << "\t������ 40% �ĸ������� 1 ��" << endl;

		cout << "\t������ 30% �ĸ������� 2 ��" << endl;

		cout << "\t������ 20% �ĸ������� 3 ��" << endl;

		cout << "\t������ 10% �ĸ������� 4 ��" << endl;

		cout << endl;

	}

	cout << endl;

	cout << ">> ^����^" << endl;

}

void Render::PreStart(int Cur)
{
	system("cls");
	SetColor(5);
	cout << endl;
	if (Cur == 0) cout << "      >> ��ʼ��Ϸ" << endl;
	else cout << "         ��ʼ��Ϸ" << endl;
	cout << endl;
	if (Cur == 1) cout << "      >> �鿴�����ĵ�" << endl;
	else cout << "         �鿴�����ĵ�" << endl;
	cout << endl;
	if (Cur == 2) cout << "      >> ��ѡģʽ" << endl;
	else cout << "         ��ѡģʽ" << endl;
	cout << endl;
	if (Cur == 3) cout << "      >> �˳���Ϸ" << endl;
	else cout << "         �˳���Ϸ" << endl;
}

void Render::End(int Cur, int num, const string& player1, int score1, const string& player2, int score2)
{
	system("cls");
	cout << endl;
	SetColor(3);
	cout << "   ��Ϸ�Ѿ�����" << endl;
	cout << endl;
	SetColor(5);
	cout << "   " << player1 << ":" << score1 << endl;
	cout << endl;
	if (num > 1) {
		cout << "   " << player2 << ":" << score2 << endl;
		cout << endl;
	}
	cout << endl << endl;
	if (Cur == 0)
		cout << ">> ���¿�ʼ��Ϸ" << endl;
	else
		cout << "   ���¿�ʼ��Ϸ" << endl;
	cout << endl;
	if (Cur == 1)
		cout << ">> ��ѡ��Ϸģʽ" << endl;
	else
		cout << "   ��ѡ��Ϸģʽ" << endl;
	cout << endl;
	if (Cur == 2)
		cout << ">> ���ؿ�ʼ����" << endl;
	else
		cout << "   ���ؿ�ʼ����" << endl;
	cout << endl;
	if (Cur == 3)
		cout << ">> �˳���Ϸ" << endl;
	else
		cout << "   �˳���Ϸ" << endl;
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

	printf("��һͼ�Σ�");

}

void Render::DrawGame1(int Map[32][12], const int* NextBrick) {
	for (int i = 11; i <= 30; ++i) {
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
void Render::DrawMap2(int score1, int score2)				//˫�˻���Ϸʱ����

{

	int i;

	SetColor(0);

	//��һ���Ʒֵ��� 

	for (i = 0; i < 13; i++)		//��13��Ʒ� 

	{

		SetColor(0);

		SetPos(i * 2, 0);

		fwrite("��", 1, 2, stdout);

		SetPos(i * 2, 10);

		fwrite("��", 1, 2, stdout);

	}



	for (i = 0; i <= 10; i++)		//��10��Ʒ� 

	{

		SetPos(0, i);

		fwrite("��", 1, 2, stdout);

		SetPos(13 * 2, i);

		fwrite("��", 1, 2, stdout);

	}

	//�ڶ����˼Ʒֵ��� 

	for (i = 43; i < 57; i++)		//��13��Ʒ� 

	{

		SetPos(i * 2, 0);

		fwrite("��", 1, 2, stdout);

		SetPos(i * 2, 10);

		fwrite("��", 1, 2, stdout);

	}



	for (i = 0; i <= 10; i++)		//��10��Ʒ� 

	{

		SetPos(43 * 2, i);

		fwrite("��", 1, 2, stdout);

		SetPos(57 * 2, i);

		fwrite("��", 1, 2, stdout);

	}

	//��һ���˵Ľ��� 

	for (i = 14; i < 25; i++)		//��13��Ʒ� 

	{

		SetColor(5);

		SetPos(i * 2, 0);

		fwrite("��", 1, 2, stdout);

		SetPos(i * 2, 21);

		fwrite("��", 1, 2, stdout);

	}

	for (i = 0; i <= 21; i++)		//��21��Ʒ� 

	{

		SetColor(5);

		SetPos(50, i);

		fwrite("��", 1, 2, stdout);

		SetPos(28, i);

		fwrite("��", 1, 2, stdout);

	}

	//�ڶ����˵Ľ��� 

	for (i = 30; i < 42; i++)		//��13��Ʒ� 

	{

		SetColor(5);

		SetPos(i * 2, 0);

		fwrite("��", 1, 2, stdout);


		SetPos(i * 2, 21);

		fwrite("��", 1, 2, stdout);

	}

	for (i = 0; i < 21; i++)		//��21��Ʒ� 

	{

		SetColor(5);

		SetPos(60, i);

		fwrite("��", 1, 2, stdout);

		SetPos(82, i);

		fwrite("��", 1, 2, stdout);

	}



	SetColor(5);

	//Input_score();

	SetPos(2, 2);

	printf("������%d", score1);

	SetPos(2, 5);

	printf("��һͼ�Σ�");

	SetPos(88, 2);

	printf("������%d", score2);

	SetPos(88, 5);

	printf("��һͼ�Σ�");

}

/*Map1 begin (15, 1)
  Map2 begin (31, 1)
*/
void Render::DrawGame2(int Map1[32][12], const int* B1, int Map2[32][12], const int* B2) {
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
			fwrite("��", 1, 2, stdout);
			if (Map2[i][j] == -1)
				SetColor(0);
			else if (Map2[i][j] == 0)
				SetColor(10);
			else
				SetColor(Map2[i][j]);
			SetPos(2 * (j + 30), i - 10);
			fwrite("��", 1, 2, stdout);
		}
	}

	//player1's next brick
	//7,5
	for (int i = 6; i <= 9; ++i) {
		for (int j = 6; j <= 9; ++j) {
			SetPos(2 * i, j);
			fwrite("  ", 1, 2, stdout);
		}
	}
	SetColor(B1[0]);
	for (int i = 1; i <= 7; i += 2) {
		int x = B1[i] + 5;
		int y = B1[i + 1] + 5;
		SetPos(2 * y, x);
		fwrite("��", 1, 2, stdout);
	}
	//player2's next brick 	
	//43,5 
	for (int i = 48; i <= 53; ++i) {
		for (int j = 6; j <= 9; ++j) {
			SetPos(2 * i, j);
			fwrite("  ", 1, 2, stdout);
		}
	}
	SetColor(B2[0]);
	for (int i = 1; i <= 7; i += 2) {
		int x = B2[i] + 5;
		int y = B2[i + 1] + 48;
		SetPos(2 * y, x);
		fwrite("��", 1, 2, stdout);
	}
}
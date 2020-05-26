#pragma once
#include <cstdlib>

class Brick {
private:
	int BrickColor;//������ɫ
	int BrickType;//��������
	int BrickPos[9];//���꼯��
	int CenterX, CenterY;//���ĵ�����
	bool IsSym;//�Ƿ�Գƣ�����x�ᷭת��
	void shiftLeft(int pace = 1);//����
	void shiftRight(int pace = 1);//����
	void shiftDown(int pace = 1);//����
	void shiftUp(int pace = 1);//����
	void brickUpdate();//������ɫ������
	void rotateBrick();//˳ʱ����ת
	void Symmetry();//��ת
	static const int TotalBrickType = 7, TotalColorType = 4;
	static int randlyAssign();
public:
	static const int Up = 1, Down = 2,Left = 3, Right = 4, Rotate = 5, Update = 6;
	Brick();//��ʼ�����ͺ���ɫ
	void brickSet(int x, int y);//ͨ��x,y��ʼ������
	void Operation(int _Order);//ʶ��ָ��
	int* getInformation();//������Ϣ
};


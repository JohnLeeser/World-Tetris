#include <Windows.h>
#include <process.h>
#include <string>
#include <conio.h>
#include <iostream>
#include <thread>
#include <io.h> 
#include "PlaySound.h"
#pragma comment(lib,"winmm.lib")
//�����߳�
unsigned int WINAPI PlayMusic::ThreadFunc(LPVOID lpParam)
{
	PlayMusic* _this = (PlayMusic*)lpParam;
	mciSendString(_this->Open.c_str(), NULL, 0, 0);
	int cnt = 0;
	while (true)
	{
		if (_this->Stop == true) {
			mciSendString(_this->Close.c_str(), NULL, 0, 0);
		}
		char message[20];
		mciSendString(_this->Status.c_str(), message, 20, 0);//��ȡ����״̬
		std::string result(message);
		if (result == "stopped") {
			mciSendString(_this->Play.c_str(), NULL, 0, 0); //�������ֹͣ�����²���
			cnt++;
		}
		if (cnt == _this->times) {
			break;
		}
	}
	mciSendString(_this->Close.c_str(), NULL, 0, 0);	//�ر������ļ�
	return 0;
}

void PlayMusic::PlaySoundEffect(std::string path)
{
	Sleep(10);
	Stop = false;
	times = 0x3f3f3f3f;
	filepath = path;
	Open = "OPEN BGM\\" + filepath + " ALIAS MUSIC";
	HANDLE hThread1 = (HANDLE)_beginthreadex(NULL, 0, &ThreadFunc, (LPVOID)this, 0, NULL);
}
void PlayMusic::PlaySoundEffect(std::string path, int t)
{
	Sleep(10);
	Stop = false;
	times = t + 1;
	if (times <= 0) times = 2;
	filepath = path;
	Open = "OPEN BGM\\" + filepath + " ALIAS MUSIC";
	HANDLE hThread2 = (HANDLE)_beginthreadex(NULL, 0, &ThreadFunc, (LPVOID)this, 0, NULL);
}
void PlayMusic::StopSoundEffect() {
	Stop = true;
}
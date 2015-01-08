//This program is for Windows only
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <conio.h>
#pragma comment(lib,"winmm.lib")

void play(char);

int main(int argc, char* argv[])
{
	system("color 3f");
	system("title 音效播放器 493专供版本");
	printf("\n\n\n\n\n\n\n\n\n\n\n                                鸿门宴\n\n\n\n\n\n");
	while(1)
	{
		while(!kbhit());
		play(getch());
	}
	return 0;
}
void play(char state=' ')
{
	switch(state)
	{
	case '1':
		mciSendString("play a.mp3",NULL,0,NULL);
		break;
	case '2':
		mciSendString("play b.mp3",NULL,0,NULL);
		break;
	case '3':
		mciSendString("play c.mp3",NULL,0,NULL);
		break;
	case '4':
		mciSendString("play d.mp3",NULL,0,NULL);
		break;
	case '5':
		mciSendString("play e.mp3",NULL,0,NULL);
		break;
	case '6':
		mciSendString("play f.mp3",NULL,0,NULL);
		break;
	case '7':
		mciSendString("play g.mp3",NULL,0,NULL);
		break;
	case '8':
		mciSendString("play h.mp3",NULL,0,NULL);
		break;
	case '9':
		mciSendString("play i.mp3",NULL,0,NULL);
		break;
	case 'a':
	case 'A':
		mciSendString("play j.mp3",NULL,0,NULL);
		break;
	case 's':
	case 'S':
		mciSendString("close a.mp3",NULL,0,NULL);
		mciSendString("close b.mp3",NULL,0,NULL);
		mciSendString("close c.mp3",NULL,0,NULL);
		mciSendString("close d.mp3",NULL,0,NULL);
		mciSendString("close e.mp3",NULL,0,NULL);
		mciSendString("close f.mp3",NULL,0,NULL);
		mciSendString("close g.mp3",NULL,0,NULL);
		mciSendString("close h.mp3",NULL,0,NULL);
		mciSendString("close i.mp3",NULL,0,NULL);
		mciSendString("close j.mp3",NULL,0,NULL);
		break;
	case 'q':
	case 'Q':
		exit(0);
	default:
		return;
	}
}


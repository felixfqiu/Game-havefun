#pragma once

#include <iostream>
#include <string.h>
#include <vector>
#include <map>

typedef std::vector<int/*��*/> Dice;

struct Call
{
	Call()
	{
		x = 3;
		p = 2;
	}

	int x; // ����
	int p; // ����
};

typedef std::map<int/*����*/, int/*�м���*/> Score;

class Buddy;

typedef std::vector<Buddy> Buddys;

const char kDialogueAlignPlayerA[] = " ";
const char kDialogueAlignPlayerB[] = "      ";
const int  kDiceCount = 5;

const int kMaxFlushLucky = 10;
const int kMaxBigbombLucky = 10;

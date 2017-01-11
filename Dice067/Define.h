#pragma once

#include <iostream>
#include <string.h>
#include <vector>
#include <map>

typedef std::vector<int/*点*/> Dice;

struct Call
{
	Call()
	{
		x = 3;
		p = 2;
	}

	int x; // 几个
	int p; // 几点
};

typedef std::map<int/*几点*/, int/*有几个*/> Score;

class Buddy;

typedef std::vector<Buddy> Buddys;

const char kDialogueAlignPlayerA[] = " ";
const char kDialogueAlignPlayerB[] = "      ";
const int  kDiceCount = 5;

const int kMaxFlushLucky = 10;
const int kMaxBigbombLucky = 10;

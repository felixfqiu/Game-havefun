#include "stdafx.h"

#include "RandomName.h"
#include "Buddy.h"
#include "ShotRound.h"

#include <locale.h>

int main()
{
	setlocale(LC_ALL, "chs");

	//
	// 我
	//
	Buddy me(L"Feng", true, 14);
	me.SetLuckyRank(10, -1);

	//
	// 朋友们
	//
	Buddys buddys;
	int buddy_count = GenerateName::GenerateRandomNumber(10, 5);
	for (int i = 0; i < buddy_count; i++)
	{
		wchar_t name[5] = { 0 };
		GenerateName::GenerateRandomName(name);

		int shot = GenerateName::GenerateRandomNumber(34, 7);

		buddys.push_back(Buddy(name, false, shot));
	}

	do 
	{
		//
		// 开始通关
		//
		clearTheRound(me, buddys);
	}
	while (true);

    return 0;
}
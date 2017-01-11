#include "stdafx.h"
#include "ShotRound.h"
#include "Buddy.h"

bool isFlush(Score& score, bool point_1_universal = true)
{
	// 肯定不是顺子
	if ( score.size() < kDiceCount )
	{
		return false;
	}

	//
	// 5个不一样的骰子
	//
	if (score[1] == 0   // 2 3 4 5 6
	 || score[6] == 0 ) // 1 2 3 4 5
	{
		return true;
	}
	else                // 1 3 4 5 6 // 赖子1作为2
						// 1 2 4 5 6 // 赖子1作为3
						// 1 2 3 5 6 // 赖子1作为4
						// 1 2 3 4 6 // 赖子1作为5
	{
		if (point_1_universal)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

int bigBombPower(Score& score, bool point_1_universal = true)
{
	if (score.size() == 1)
	{
		return 2; // 纯豹子
	}

	if (score.size() == 2)
	{
		if (point_1_universal)
		{
			return 1;
		}
	}

	return 0;
}

bool rule(const Dice& dice1, const Dice& dice2, const Call& call, bool point_1_universal = true)
{
	//
	// 几点分别有几个
	//
	Score score1;
	Score score2;

	for (int i = 0; i < kDiceCount; i++)
	{
		int p1 = dice1[i];
		score1[p1]++;

		int p2 = dice2[i];
		score2[p2]++;
	}

	//
	// 共有几个
	//
	int x = 0;
	int x1 = score1[call.p];
	int x2 = score2[call.p];

	// 1被喊掉了，不再是赖子
	if (point_1_universal == false)
	{
		if (call.p != 1)
		{
			if (isFlush(score1, false))
			{
				x1 = 0;
			}

			if (isFlush(score2, false))
			{
				x2 = 0;
			}
		}

		//
		// 豹子
		//
		x1 += bigBombPower(score1, false);

		x2 += bigBombPower(score2, false);
	}
	// 1是赖子
	else
	{
		//
		// 顺子
		//
		if (isFlush(score1))
		{
			x1 = 0;
		}

		if (isFlush(score2))
		{
			x2 = 0;
		}

		//
		// 豹子
		//
		x1 += bigBombPower(score1);

		x2 += bigBombPower(score2);
	}

	x = x1 + x2;
	return x < call.x; // busted
}

void clearTheRound(Buddy& me, Buddys& buddys)
{
	std::cout << "----打通关，输3把倒退----" << std::endl;

	for (size_t buddy_i = 0; buddy_i < buddys.size(); )
	{
		// 当前ai分隔符
		for (int sep_c = 0; sep_c < 16; sep_c++)
		{
			std::cout << "ai" << buddy_i;
		}
		std::cout << std::endl;
		
		//
		//
		//
		Buddy& ai = buddys[buddy_i];

		bool win  = false;
		int  lose = 0;

		for (int set_i = 0; set_i < 3; set_i++)
		{
			bool point_1_universal = true;
			me.RollDice();
			ai.RollDice();

			std::cout << kDialogueAlignPlayerA << "我的牌" << std::endl << kDialogueAlignPlayerA;
			me.CheckDice();

			bool me_call = false;
			bool ai_call = false;

			for (;;)
			{
				std::cout << kDialogueAlignPlayerA << "我>>" << std::endl;
				if ( me.CallAt(ai) )
				{
					me_call = true;

					bool ai_busted = rule( me.GetDice(), ai.GetDice(), ai.GetCall(), point_1_universal );
					win = ai_busted;

					break;
				}
				else if ( me.GetCall().p == 1)
				{
					point_1_universal = false;
				}

				std::cout << kDialogueAlignPlayerB << "ai" << buddy_i << ">>" << std::endl;
				if ( ai.CallAt(me) )
				{
					ai_call = true;

					bool me_busted = rule( me.GetDice(), ai.GetDice(), me.GetCall(), point_1_universal );
					win = !me_busted;

					break;
				}
				else if (ai.GetCall().p == 1)
				{
					point_1_universal = false;
				}
			}

			if (win)
			{
				std::cout << kDialogueAlignPlayerB, me.CheckDice();
				std::cout << kDialogueAlignPlayerB, ai.CheckDice();
				std::cout << kDialogueAlignPlayerB << "输了，过！" << std::endl;
				ai.ShotTaken();
				std::cout << std::endl;

				buddy_i++;
				break;
			}
			else
			{
				lose++;
				
				std::cout << kDialogueAlignPlayerA, me.CheckDice();
				std::cout << kDialogueAlignPlayerA, ai.CheckDice();
				std::cout << kDialogueAlignPlayerA << "还" << 3-lose << "把..." << std::endl;
				me.ShotTaken();				
				std::cout << std::endl;

				//Sleep(400);
			}
		}

		if (lose == 3)
		{
			buddy_i--;

			if (buddy_i == -1)
			{
				buddy_i = buddys.size() - 1;
			}
		}
	}
}
#pragma once
#include "Define.h"

class Buddy
{

public:
	Buddy(std::wstring name, bool dialog_left, int shot_amount)
	{
		name_ = name;
		dialog_left_ = dialog_left;
		normal_amount_ = shot_amount;		
		taken_amount_ = 0;

		flush_rank_ = -1;
		bigbomb_rank_ = -1;
	}

	void RollDice();
	void CheckDice();
	void ShotTaken();

	bool CallAt(const Buddy& opponent);

	const Dice& GetDice() { return dice_; }
	const Call& GetCall() { return call_;  }

	void SetLuckyRank(int flush_rank, int bigbomb_rank)
	{
		flush_rank_ = flush_rank;
		bigbomb_rank_ = bigbomb_rank;
	}

protected:
	std::wstring name_;
	bool dialog_left_;
	int normal_amount_;
	int taken_amount_;

	Dice dice_;
	Call call_;

	int flush_rank_;
	int bigbomb_rank_;
};
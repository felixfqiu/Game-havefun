#include "stdafx.h"
#include "Buddy.h"
#include "RandomName.h"
#include <algorithm>

void Buddy::RollDice()
{
	dice_.clear();

	if (flush_rank_ == 10)
	{
		if (GenerateName::GenerateRandomNumber(1, 0) % 2 == 0)
		{
			dice_ = { 2,3,4,5,6 };
		}
		else
		{
			dice_ = { 1,2,3,4,5 };
		}
	}
	else if (bigbomb_rank_ == 10)
	{
	}
	else
	{
		for (int i = 0; i < kDiceCount; i++)
		{
			dice_.push_back(GenerateName::GenerateRandomNumber(6, 1));
		}
	}

	std::sort( dice_.begin(), dice_.end() );
}

void Buddy::CheckDice()
{
	for (size_t i = 0; i < dice_.size(); i++)
	{
		std::cout << dice_[i];
	}
	std::cout << std::endl;
}

void Buddy::ShotTaken()
{
	taken_amount_++;

	if ( taken_amount_ > (normal_amount_ - 3) )
	{
		std::cout << "shot amount waning ";
	}
}

//
// 2个1或者3个2起叫
// 开：叫1个*
//
bool Buddy::CallAt(const Buddy& opponent)
{
	const char* dialogue_align_ = 
		dialog_left_ ? kDialogueAlignPlayerA : kDialogueAlignPlayerB;

	//
	// 几个？
	//
	int& x = call_.x;
	std::cout << dialogue_align_;
	std::cin  >> x;
	std::cout << dialogue_align_ << "个" << std::endl;
	if (x == 1)
	{
		call_.p = 0;
		std::cout << dialogue_align_ << 0 << "：开！" << std::endl;
		return true;
	}
	
	//
	// 几？
	//
	int& p = call_.p;
	std::cout << dialogue_align_;
	std::cin  >> p;

	return false;
}
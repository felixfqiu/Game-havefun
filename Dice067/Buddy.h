#pragma once
#include "Define.h"

class Buddy
{
public:
	Buddy(std::string name, int shot_amout)
	{
		name_ = name;
		normal_amout_ = shot_amout;
		taken_amout_ = 0;
	}

	void ShotTaken()
	{
		taken_amout_++;
	}

protected:
	std::string name_;
	int normal_amout_;
	int taken_amout_;
};
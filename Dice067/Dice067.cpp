#include "stdafx.h"

#include "RandomName.h"
#include "Buddy.h"
#include "ShotRound.h"

int main()
{
	std::string choice_str = " 0 - 老婆催了 \n 1 - 搞起 \n 2 - 稍等，我去尿个尿 \n 3 - 差不多了，喝不了了 \n 4 - 再来！ \n 5 - 呃~呕";

	do 
	{
		Buddys buddys;
		buddys.push_back( Buddy(GenerateNamerandName(), randShotAmout()) );

		clearTheRound(buddys);

		/*/
		cout << "通关打完，来单挑吧？";
		cout << "来5杯？";
		cout << "那3杯就好？";
		cout << "来5把？";
		cout << "来3把吧~";
		//*/
	}
	while (true);

    return 0;
}


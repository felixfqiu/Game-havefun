#include "stdafx.h"

#include "RandomName.h"
#include "Buddy.h"
#include "ShotRound.h"

int main()
{
	std::string choice_str = " 0 - ���Ŵ��� \n 1 - ���� \n 2 - �Եȣ���ȥ����� \n 3 - ����ˣ��Ȳ����� \n 4 - ������ \n 5 - ��~Ż";

	do 
	{
		Buddys buddys;
		buddys.push_back( Buddy(GenerateNamerandName(), randShotAmout()) );

		clearTheRound(buddys);

		/*/
		cout << "ͨ�ش��꣬�������ɣ�";
		cout << "��5����";
		cout << "��3���ͺã�";
		cout << "��5�ѣ�";
		cout << "��3�Ѱ�~";
		//*/
	}
	while (true);

    return 0;
}


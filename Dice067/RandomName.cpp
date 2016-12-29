#include "stdafx.h"

#include "RandomName.h"
#include <stdlib.h>
#include <time.h>
#include <string.h>

GenerateName::GenerateName(void)
{
}
GenerateName::~GenerateName(void)
{
}
int GenerateName::GenerateRandomNumber(const int nMax,
	const int nMin /*= 0*/)
{
	static unsigned int seedOld = 0;
	unsigned int seedNew = (unsigned int)time(NULL);
	if (seedNew != seedOld)
	{
		srand(seedNew);
		seedOld = seedNew;
	}
	return rand() % (nMax - nMin + 1) + nMin;
}
wchar_t* GenerateName::GenerateRandomName(wchar_t *nameBuf,
	const int bufSize /*= 5*/)
{
	int nType = GenerateRandomNumber(7);
	switch (nType)
	{
	case 0:
		GenerateRandomName_DanXingDanMingBoy(nameBuf, bufSize);
		break;
	case 1:
		GenerateRandomName_DanXingDanMingGirl(nameBuf, bufSize);
		break;
	case 2:
		GenerateRandomName_DanXingShuangMingBoy(nameBuf, bufSize);
		break;
	case 3:
		GenerateRandomName_DanXingShuangMingGirl(nameBuf, bufSize);
		break;
	case 4:
		GenerateRandomName_FuXingDanMingBoy(nameBuf, bufSize);
		break;
	case 5:
		GenerateRandomName_FuXingDanMingGirl(nameBuf, bufSize);
		break;
	case 6:
		GenerateRandomName_FuXingShuangMingBoy(nameBuf, bufSize);
		break;
	case 7:
		GenerateRandomName_FuXingShuangMingGirl(nameBuf, bufSize);
		break;
	default:
		break;
	}
	return nameBuf;
}
wchar_t* GenerateName::GenerateRandomName_DanXingDanMingBoy(wchar_t *nameBuf,
	const int bufSize /*= 3*/)
{
	memset(nameBuf, 0, sizeof(wchar_t) * bufSize);
	nameBuf[0] = DanXing[GenerateRandomNumber(wcslen(DanXing) - 1)];
	nameBuf[1] = boyMing[GenerateRandomNumber(wcslen(boyMing) - 1)];
	return nameBuf;
}
wchar_t* GenerateName::GenerateRandomName_DanXingDanMingGirl(wchar_t *nameBuf,
	const int bufSize /*= 3*/)
{
	memset(nameBuf, 0, sizeof(wchar_t) * bufSize);
	nameBuf[0] = DanXing[GenerateRandomNumber(wcslen(DanXing) - 1)];
	nameBuf[1] = girlMing[GenerateRandomNumber(wcslen(girlMing) - 1)];
	return nameBuf;
}
wchar_t* GenerateName::GenerateRandomName_DanXingShuangMingBoy(wchar_t *nameBuf,
	const int bufSize /*= 4*/)
{
	memset(nameBuf, 0, sizeof(wchar_t) * bufSize);
	nameBuf[0] = DanXing[GenerateRandomNumber(wcslen(DanXing) - 1)];
	nameBuf[1] = boyMing[GenerateRandomNumber(wcslen(boyMing) - 1)];
	nameBuf[2] = boyMing[GenerateRandomNumber(wcslen(boyMing) - 1)];
	return nameBuf;
}
wchar_t* GenerateName::GenerateRandomName_DanXingShuangMingGirl(wchar_t *nameBuf,
	const int bufSize /*= 4*/)
{
	memset(nameBuf, 0, sizeof(wchar_t) * bufSize);
	nameBuf[0] = DanXing[GenerateRandomNumber(wcslen(DanXing) - 1)];
	nameBuf[1] = girlMing[GenerateRandomNumber(wcslen(girlMing) - 1)];
	nameBuf[2] = girlMing[GenerateRandomNumber(wcslen(girlMing) - 1)];
	return nameBuf;
}
wchar_t* GenerateName::GenerateRandomName_FuXingDanMingBoy(wchar_t *nameBuf,
	const int bufSize /*= 4*/)
{
	memset(nameBuf, 0, sizeof(wchar_t) * bufSize);
	int nCount = sizeof(FuXing) / sizeof(FuXing[0]);
	int nXing = GenerateRandomNumber(nCount - 1);
	nameBuf[0] = FuXing[nXing][0];
	nameBuf[1] = FuXing[nXing][1];
	nameBuf[2] = boyMing[GenerateRandomNumber(wcslen(boyMing) - 1)];
	return nameBuf;
}
wchar_t* GenerateName::GenerateRandomName_FuXingDanMingGirl(wchar_t *nameBuf,
	const int bufSize /*= 4*/)
{
	memset(nameBuf, 0, sizeof(wchar_t) * bufSize);
	int nCount = sizeof(FuXing) / sizeof(FuXing[0]);
	int nXing = GenerateRandomNumber(nCount - 1);
	nameBuf[0] = FuXing[nXing][0];
	nameBuf[1] = FuXing[nXing][1];
	nameBuf[2] = girlMing[GenerateRandomNumber(wcslen(girlMing) - 1)];
	return nameBuf;
}
wchar_t* GenerateName::GenerateRandomName_FuXingShuangMingBoy(wchar_t *nameBuf,
	const int bufSize /*= 5*/)
{
	memset(nameBuf, 0, sizeof(wchar_t) * bufSize);
	int nCount = sizeof(FuXing) / sizeof(FuXing[0]);
	int nXing = GenerateRandomNumber(nCount - 1);
	nameBuf[0] = FuXing[nXing][0];
	nameBuf[1] = FuXing[nXing][1];
	nameBuf[2] = boyMing[GenerateRandomNumber(wcslen(boyMing) - 1)];
	nameBuf[3] = boyMing[GenerateRandomNumber(wcslen(boyMing) - 1)];
	return nameBuf;
}
wchar_t* GenerateName::GenerateRandomName_FuXingShuangMingGirl(wchar_t *nameBuf,
	const int bufSize /*= 5*/)
{
	memset(nameBuf, 0, sizeof(wchar_t) * bufSize);
	int nCount = sizeof(FuXing) / sizeof(FuXing[0]);
	int nXing = GenerateRandomNumber(nCount - 1);
	nameBuf[0] = FuXing[nXing][0];
	nameBuf[1] = FuXing[nXing][1];
	nameBuf[2] = girlMing[GenerateRandomNumber(wcslen(girlMing) - 1)];
	nameBuf[3] = girlMing[GenerateRandomNumber(wcslen(girlMing) - 1)];
	return nameBuf;
}
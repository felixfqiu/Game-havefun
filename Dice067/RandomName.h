#pragma once
#include "Define.h"

// see [��������](http://www.kavenblog.com/?p=1380)

const wchar_t DanXing[] =
L"��Ǯ��������֣��������������������������ʩ�ſײ��ϻ���κ�ս���л������ˮ��������˸��ɷ�����"
L"³Τ������ﻨ������Ԭ��ۺ��ʷ�Ʒ����Ѧ�׺����������ޱϺ�����������ʱ��Ƥ���뿵����Ԫ������ƽ��"
L"��������Ҧ��տ����ë����ױ���갼Ʒ��ɴ�̸��é���ܼ�������ף������������ϯ����ǿ��·¦Σ��ͯ�չ�"
L"÷ʢ�ֵ�����������Ĳ��﷮���������֧���ù�¬Ī�������Ѹɽ�Ӧ�ڶ����ڵ��������������ʯ�޼�ť��"
L"�����ϻ���½��������춻����L�ҷ����ഢ���������ɾ��θ����ڽ��͹�����ɽ�ȳ������ȫۭ������������"
L"�����ﱩ��б�������������ղ����Ҷ��˾��۬�輻��ӡ�ް׻���ۢ�Ӷ����̼���׿�����ɳ����������ܲ�˫"
L"��ݷ����̷�����̼������Ƚ��۪Ӻ�S�ɣ���ţ��ͨ�����༽ۣ����ũ�±�ׯ�̲����ֳ�Ľ����ϰ�°�����"
L"����������������߾Ӻⲽ�����������Ŀܹ�»�ڶ�ŷ�����εԽ��¡ʦ�������˹��������������Ǽ��Ŀ�"
L"����ɳؿ������ᳲ�������󾣺�����Ȩ�ϸ��滸���붽�����ַ���۳Ϳ����˧�ÿ��������ٹ麣ī������"
L"�갮��١��Ĳ��٦����";

const wchar_t boyMing[] =
L"ΰ�����㿡��ǿ��ƽ�����Ļ�������������־��������ɽ�ʲ���������Ԫȫ��ʤѧ��ŷ���������ɱ�˳"
L"���ӽ��β��ɿ��ǹ���ﰲ����ï�����м�ͱ벩���Ⱦ�����׳��˼Ⱥ���İ�����ܹ����ƺ���������ԣ����"
L"����������ǫ�����֮�ֺ��ʲ����������������ά�������������󳿳�ʿ�Խ��������׵���ʱ̩ʢ��衾���"
L"������ŷ纽��";

const wchar_t girlMing[] =
L"���Ӣ���������Ⱦ���������֥��Ƽ�����ҷ���ʴ��������÷���������滷ѩ�ٰ���ϼ����ݺ������"
L"�Ѽ�������������Ҷ�������������ɺɯ������ٻ�������ӱ¶������������Ǻɵ���ü������ޱݼ��"
L"�Է�ܰ�������԰��ӽ�������ع���ѱ�ˬ������ϣ����Ʈ�����������������������ܿ�ƺ������˿ɼ���"
L"Ӱ��֦˼��";

const wchar_t * const FuXing[] =
{
	L"ŷ��", L"̫ʷ", L"��ľ", L"�Ϲ�", L"˾��", L"����", L"����", L"�Ϲ�", L"��ٹ", L"����",
	L"�ĺ�", L"���", L"ξ��", L"����", L"����", L"�̨", L"�ʸ�", L"����", L"���", L"��ұ",
	L"̫��", L"����", L"����", L"Ľ��", L"����", L"����", L"����", L"����", L"˾ͽ", L"����",
	L"˾��", L"����", L"�ӳ�", L"����", L"˾��", L"����", L"����", L"���", L"����", L"����",
	L"���", L"����", L"�׸�", L"����", L"�ذ�", L"�й�", L"��ԯ", L"���", L"�θ�", L"����",
	L"����", L"����", L"����", L"����", L"΢��", L"����", L"����", L"����", L"����", L"����",
	L"����", L"����", L"��ɽ", L"����", L"����", L"����", L"����", L"����", L"����", L"����",
	L"����", L"���", L"����", L"����", L"����", L"�ٳ�", L"����", L"��ɣ", L"��ī", L"����",
	L"��ʦ"
};

class GenerateName
{
public:
	GenerateName(void);
	~GenerateName(void);
public:
	static int GenerateRandomNumber(const int nMax, const int nMin = 0);
	static wchar_t* GenerateRandomName(wchar_t *nameBuf, const int bufSize = 5);

	// ���� ����
	static wchar_t* GenerateRandomName_DanXingDanMingBoy(wchar_t *nameBuf,
		const int bufSize = 3);
	static wchar_t* GenerateRandomName_DanXingDanMingGirl(wchar_t *nameBuf,
		const int bufSize = 3);
	// ���� ˫��
	static wchar_t* GenerateRandomName_DanXingShuangMingBoy(wchar_t *nameBuf,
		const int bufSize = 4);
	static wchar_t* GenerateRandomName_DanXingShuangMingGirl(wchar_t *nameBuf,
		const int bufSize = 4);
	// ���� ����
	static wchar_t* GenerateRandomName_FuXingDanMingBoy(wchar_t *nameBuf,
		const int bufSize = 4);
	static wchar_t* GenerateRandomName_FuXingDanMingGirl(wchar_t *nameBuf,
		const int bufSize = 4);
	// ���� ˫��
	static wchar_t* GenerateRandomName_FuXingShuangMingBoy(wchar_t *nameBuf,
		const int bufSize = 5);
	static wchar_t* GenerateRandomName_FuXingShuangMingGirl(wchar_t *nameBuf,
		const int bufSize = 5);
};
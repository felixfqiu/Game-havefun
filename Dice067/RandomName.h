#pragma once
#include "Define.h"

// see [姓名生成](http://www.kavenblog.com/?p=1380)

const wchar_t DanXing[] =
L"赵钱孙李周吴郑王冯陈楮卫蒋沈韩杨朱秦尤许何吕施张孔曹严华金魏陶姜戚谢邹喻柏水窦章云苏潘葛奚范彭郎"
L"鲁韦昌马苗凤花方俞任袁柳酆鲍史唐费廉岑薛雷贺倪汤滕殷罗毕郝邬安常乐于时傅皮卞齐康伍余元卜顾孟平黄"
L"和穆萧尹姚邵湛汪祁毛禹狄米贝明臧计伏成戴谈宋茅庞熊纪舒屈项祝董梁杜阮蓝闽席季麻强贾路娄危江童颜郭"
L"梅盛林刁锺徐丘骆高夏蔡田樊胡凌霍虞万支柯昝管卢莫经房裘缪干解应宗丁宣贲邓郁单杭洪包诸左石崔吉钮龚"
L"程嵇邢滑裴陆荣翁荀羊於惠甄麹家封芮羿储靳汲邴糜松井段富巫乌焦巴弓牧隗山谷车侯宓蓬全郗班仰秋仲伊宫"
L"宁仇栾暴甘斜厉戎祖武符刘景詹束龙叶幸司韶郜黎蓟薄印宿白怀蒲邰从鄂索咸籍赖卓蔺屠蒙池乔阴郁胥能苍双"
L"闻莘党翟谭贡劳逄姬申扶堵冉宰郦雍郤璩桑桂濮牛寿通边扈燕冀郏浦尚农温别庄晏柴瞿阎充慕连茹习宦艾鱼容"
L"向古易慎戈廖庾终暨居衡步都耿满弘匡国文寇广禄阙东欧殳沃利蔚越夔隆师巩厍聂晁勾敖融冷訾辛阚那简饶空"
L"曾毋沙乜养鞠须丰巢关蒯相查后荆红游竺权逑盖益桓公仉督晋楚阎法汝鄢涂钦岳帅缑亢况后有琴归海墨哈谯笪"
L"年爱阳佟商牟佘佴伯赏";

const wchar_t boyMing[] =
L"伟刚勇毅俊峰强军平保东文辉力明永健世广志义兴良海山仁波宁贵福生龙元全国胜学祥才发武新利清飞彬富顺"
L"信子杰涛昌成康星光天达安岩中茂进林有坚和彪博诚先敬震振壮会思群豪心邦承乐绍功松善厚庆磊民友裕河哲"
L"江超浩亮政谦亨奇固之轮翰朗伯宏言若鸣朋斌梁栋维启克伦翔旭鹏泽晨辰士以建家致树炎德行时泰盛雄琛钧冠"
L"策腾楠榕风航弘";

const wchar_t girlMing[] =
L"秀娟英华慧巧美娜静淑惠珠翠雅芝玉萍红娥玲芬芳燕彩春菊兰凤洁梅琳素云莲真环雪荣爱妹霞香月莺媛艳瑞凡"
L"佳嘉琼勤珍贞莉桂娣叶璧璐娅琦晶妍茜秋珊莎锦黛青倩婷姣婉娴瑾颖露瑶怡婵雁蓓纨仪荷丹蓉眉君琴蕊薇菁梦"
L"岚苑婕馨瑗琰韵融园艺咏卿聪澜纯毓悦昭冰爽琬茗羽希宁欣飘育滢馥筠柔竹霭凝晓欢霄枫芸菲寒伊亚宜可姬舒"
L"影荔枝思丽";

const wchar_t * const FuXing[] =
{
	L"欧阳", L"太史", L"端木", L"上官", L"司马", L"东方", L"独孤", L"南宫", L"万俟", L"闻人",
	L"夏侯", L"诸葛", L"尉迟", L"公羊", L"赫连", L"澹台", L"皇甫", L"宗政", L"濮阳", L"公冶",
	L"太叔", L"申屠", L"公孙", L"慕容", L"仲孙", L"钟离", L"长孙", L"宇文", L"司徒", L"鲜于",
	L"司空", L"闾丘", L"子车", L"亓官", L"司寇", L"巫马", L"公西", L"颛孙", L"壤驷", L"公良",
	L"漆雕", L"乐正", L"宰父", L"谷梁", L"拓跋", L"夹谷", L"轩辕", L"令狐", L"段干", L"百里",
	L"呼延", L"东郭", L"南门", L"羊舌", L"微生", L"公户", L"公玉", L"公仪", L"梁丘", L"公仲",
	L"公上", L"公门", L"公山", L"公坚", L"左丘", L"公伯", L"西门", L"公祖", L"第五", L"公乘",
	L"贯丘", L"公皙", L"南荣", L"东里", L"东宫", L"仲长", L"子书", L"子桑", L"即墨", L"达奚",
	L"褚师"
};

class GenerateName
{
public:
	GenerateName(void);
	~GenerateName(void);
public:
	static int GenerateRandomNumber(const int nMax, const int nMin = 0);
	static wchar_t* GenerateRandomName(wchar_t *nameBuf, const int bufSize = 5);

	// 单姓 单名
	static wchar_t* GenerateRandomName_DanXingDanMingBoy(wchar_t *nameBuf,
		const int bufSize = 3);
	static wchar_t* GenerateRandomName_DanXingDanMingGirl(wchar_t *nameBuf,
		const int bufSize = 3);
	// 单姓 双名
	static wchar_t* GenerateRandomName_DanXingShuangMingBoy(wchar_t *nameBuf,
		const int bufSize = 4);
	static wchar_t* GenerateRandomName_DanXingShuangMingGirl(wchar_t *nameBuf,
		const int bufSize = 4);
	// 复姓 单名
	static wchar_t* GenerateRandomName_FuXingDanMingBoy(wchar_t *nameBuf,
		const int bufSize = 4);
	static wchar_t* GenerateRandomName_FuXingDanMingGirl(wchar_t *nameBuf,
		const int bufSize = 4);
	// 复姓 双名
	static wchar_t* GenerateRandomName_FuXingShuangMingBoy(wchar_t *nameBuf,
		const int bufSize = 5);
	static wchar_t* GenerateRandomName_FuXingShuangMingGirl(wchar_t *nameBuf,
		const int bufSize = 5);
};
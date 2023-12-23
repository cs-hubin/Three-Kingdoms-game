#include"stdio.h"
#include"basetype.h"
#include"common.h"
#include"CARD.h"
#include"CARDS.h"
#include <random>
#define uiCardIndex 0

/*
函数功能：初始化牌堆
输入参数；无
返回值；无
负责人；王翌
*/
VOID CARDS::InitCards() {

	
		for (int i = 0; i < 159; i++)
		{
			this->cards[i].uiRand = rand() % 10000;
		}//用于生成随机数 

		cards[0].Set(&cards[0], CARD_FLOWER_DIAMOND, 6, CARD_TYPE_BASIC_KILL, 1);
		cards[1].Set(&cards[1], CARD_FLOWER_DIAMOND, 7, CARD_TYPE_BASIC_KILL, 1);
		cards[2].Set(&cards[2], CARD_FLOWER_DIAMOND, 8, CARD_TYPE_BASIC_KILL, 1);
		cards[3].Set(&cards[3], CARD_FLOWER_DIAMOND, 9, CARD_TYPE_BASIC_KILL, 1);
		cards[4].Set(&cards[4], CARD_FLOWER_DIAMOND, 10, CARD_TYPE_BASIC_KILL, 1);
		cards[5].Set(&cards[5], CARD_FLOWER_DIAMOND, 'K', CARD_TYPE_BASIC_KILL, 1);
		//方块杀

		cards[6].Set(&cards[6], CARD_FLOWER_CLUB, 2, CARD_TYPE_BASIC_KILL, 1);
		cards[7].Set(&cards[7], CARD_FLOWER_CLUB, 3, CARD_TYPE_BASIC_KILL, 1);
		cards[8].Set(&cards[8], CARD_FLOWER_CLUB, 4, CARD_TYPE_BASIC_KILL, 1);
		cards[9].Set(&cards[9], CARD_FLOWER_CLUB, 5, CARD_TYPE_BASIC_KILL, 1);
		cards[10].Set(&cards[10], CARD_FLOWER_CLUB, 6, CARD_TYPE_BASIC_KILL, 1);
		cards[11].Set(&cards[11], CARD_FLOWER_CLUB, 7, CARD_TYPE_BASIC_KILL, 1);
		cards[12].Set(&cards[12], CARD_FLOWER_CLUB, 8, CARD_TYPE_BASIC_KILL, 1);
		cards[13].Set(&cards[13], CARD_FLOWER_CLUB, 8, CARD_TYPE_BASIC_KILL, 1);
		cards[14].Set(&cards[14], CARD_FLOWER_CLUB, 9, CARD_TYPE_BASIC_KILL, 1);
		cards[15].Set(&cards[15], CARD_FLOWER_CLUB, 9, CARD_TYPE_BASIC_KILL, 1);
		cards[16].Set(&cards[16], CARD_FLOWER_CLUB, 10, CARD_TYPE_BASIC_KILL, 1);
		cards[17].Set(&cards[17], CARD_FLOWER_CLUB, 10, CARD_TYPE_BASIC_KILL, 1);
		cards[18].Set(&cards[18], CARD_FLOWER_CLUB, 'J', CARD_TYPE_BASIC_KILL, 1);
		cards[19].Set(&cards[19], CARD_FLOWER_CLUB, 'J', CARD_TYPE_BASIC_KILL, 1);
		//梅花杀 

		cards[20].Set(&cards[20], CARD_FLOWER_HEART, 10, CARD_TYPE_BASIC_KILL, 1);
		cards[21].Set(&cards[21], CARD_FLOWER_HEART, 10, CARD_TYPE_BASIC_KILL, 1);
		cards[22].Set(&cards[22], CARD_FLOWER_HEART, 'J', CARD_TYPE_BASIC_KILL, 1);
		//红星杀 

		cards[23].Set(&cards[23], CARD_FLOWER_SPADE, 7, CARD_TYPE_BASIC_KILL, 1);
		cards[24].Set(&cards[24], CARD_FLOWER_SPADE, 8, CARD_TYPE_BASIC_KILL, 1);
		cards[25].Set(&cards[25], CARD_FLOWER_SPADE, 8, CARD_TYPE_BASIC_KILL, 1);
		cards[26].Set(&cards[26], CARD_FLOWER_SPADE, 9, CARD_TYPE_BASIC_KILL, 1);
		cards[27].Set(&cards[27], CARD_FLOWER_SPADE, 9, CARD_TYPE_BASIC_KILL, 1);
		cards[28].Set(&cards[28], CARD_FLOWER_SPADE, 10, CARD_TYPE_BASIC_KILL, 1);
		cards[29].Set(&cards[29], CARD_FLOWER_SPADE, 10, CARD_TYPE_BASIC_KILL, 1);
		//黑桃杀 

		cards[30].Set(&cards[30], CARD_FLOWER_CLUB, 5, CARD_TYPE_BASIC_THUNERKILL, 1);
		cards[31].Set(&cards[31], CARD_FLOWER_CLUB, 6, CARD_TYPE_BASIC_THUNERKILL, 1);
		cards[32].Set(&cards[32], CARD_FLOWER_CLUB, 7, CARD_TYPE_BASIC_THUNERKILL, 1);
		cards[33].Set(&cards[33], CARD_FLOWER_CLUB, 8, CARD_TYPE_BASIC_THUNERKILL, 1);
		//梅花雷杀 

		cards[34].Set(&cards[34], CARD_FLOWER_SPADE, 4, CARD_TYPE_BASIC_THUNERKILL, 1);
		cards[35].Set(&cards[35], CARD_FLOWER_SPADE, 5, CARD_TYPE_BASIC_THUNERKILL, 1);
		cards[36].Set(&cards[36], CARD_FLOWER_SPADE, 6, CARD_TYPE_BASIC_THUNERKILL, 1);
		cards[37].Set(&cards[37], CARD_FLOWER_SPADE, 7, CARD_TYPE_BASIC_THUNERKILL, 1);
		cards[38].Set(&cards[38], CARD_FLOWER_SPADE, 8, CARD_TYPE_BASIC_THUNERKILL, 1);
		//黑桃雷杀 

		cards[39].Set(&cards[39], CARD_FLOWER_DIAMOND, 4, CARD_TYPE_BASIC_FIREKILL, 1);
		cards[40].Set(&cards[40], CARD_FLOWER_DIAMOND, 5, CARD_TYPE_BASIC_FIREKILL, 1);
		//方块火杀

		cards[41].Set(&cards[41], CARD_FLOWER_HEART, 4, CARD_TYPE_BASIC_FIREKILL, 1);
		cards[42].Set(&cards[42], CARD_FLOWER_HEART, 7, CARD_TYPE_BASIC_FIREKILL, 1);
		cards[43].Set(&cards[43], CARD_FLOWER_HEART, 10, CARD_TYPE_BASIC_FIREKILL, 1);
		//红星火杀

		cards[44].Set(&cards[44], CARD_FLOWER_DIAMOND, 2, CARD_TYPE_BASIC_DODGE, 1);
		cards[45].Set(&cards[45], CARD_FLOWER_DIAMOND, 2, CARD_TYPE_BASIC_DODGE, 1);
		cards[46].Set(&cards[46], CARD_FLOWER_DIAMOND, 3, CARD_TYPE_BASIC_DODGE, 1);
		cards[47].Set(&cards[47], CARD_FLOWER_DIAMOND, 4, CARD_TYPE_BASIC_DODGE, 1);
		cards[48].Set(&cards[48], CARD_FLOWER_DIAMOND, 5, CARD_TYPE_BASIC_DODGE, 1);
		cards[49].Set(&cards[49], CARD_FLOWER_DIAMOND, 6, CARD_TYPE_BASIC_DODGE, 1);
		cards[50].Set(&cards[50], CARD_FLOWER_DIAMOND, 6, CARD_TYPE_BASIC_DODGE, 1);
		cards[51].Set(&cards[51], CARD_FLOWER_DIAMOND, 7, CARD_TYPE_BASIC_DODGE, 1);
		cards[52].Set(&cards[52], CARD_FLOWER_DIAMOND, 7, CARD_TYPE_BASIC_DODGE, 1);
		cards[53].Set(&cards[53], CARD_FLOWER_DIAMOND, 8, CARD_TYPE_BASIC_DODGE, 1);
		cards[54].Set(&cards[54], CARD_FLOWER_DIAMOND, 8, CARD_TYPE_BASIC_DODGE, 1);
		cards[55].Set(&cards[55], CARD_FLOWER_DIAMOND, 9, CARD_TYPE_BASIC_DODGE, 1);
		cards[56].Set(&cards[56], CARD_FLOWER_DIAMOND, 10, CARD_TYPE_BASIC_DODGE, 1);
		cards[57].Set(&cards[57], CARD_FLOWER_DIAMOND, 10, CARD_TYPE_BASIC_DODGE, 1);
		cards[58].Set(&cards[58], CARD_FLOWER_DIAMOND, 'J', CARD_TYPE_BASIC_DODGE, 1);
		cards[59].Set(&cards[59], CARD_FLOWER_DIAMOND, 'J', CARD_TYPE_BASIC_DODGE, 1);
		cards[60].Set(&cards[60], CARD_FLOWER_DIAMOND, 'J', CARD_TYPE_BASIC_DODGE, 1);
		//方块闪 

		cards[61].Set(&cards[61], CARD_FLOWER_HEART, 2, CARD_TYPE_BASIC_DODGE, 1);
		cards[62].Set(&cards[62], CARD_FLOWER_HEART, 2, CARD_TYPE_BASIC_DODGE, 1);
		cards[63].Set(&cards[63], CARD_FLOWER_HEART, 8, CARD_TYPE_BASIC_DODGE, 1);
		cards[64].Set(&cards[64], CARD_FLOWER_HEART, 9, CARD_TYPE_BASIC_DODGE, 1);
		cards[65].Set(&cards[65], CARD_FLOWER_HEART, 'J', CARD_TYPE_BASIC_DODGE, 1);
		cards[66].Set(&cards[66], CARD_FLOWER_HEART, 'Q', CARD_TYPE_BASIC_DODGE, 1);
		cards[67].Set(&cards[67], CARD_FLOWER_HEART, 'K', CARD_TYPE_BASIC_DODGE, 1);
		//红星闪 

		cards[68].Set(&cards[68], CARD_FLOWER_DIAMOND, 2, CARD_TYPE_BASIC_GRAPE, 4);
		cards[69].Set(&cards[69], CARD_FLOWER_DIAMOND, 3, CARD_TYPE_BASIC_GRAPE, 4);
		cards[70].Set(&cards[70], CARD_FLOWER_DIAMOND, 'Q', CARD_TYPE_BASIC_GRAPE, 4);
		//方块桃

		cards[71].Set(&cards[71], CARD_FLOWER_HEART, 3, CARD_TYPE_BASIC_GRAPE, 4);
		cards[72].Set(&cards[72], CARD_FLOWER_HEART, 4, CARD_TYPE_BASIC_GRAPE, 4);
		cards[73].Set(&cards[73], CARD_FLOWER_HEART, 5, CARD_TYPE_BASIC_GRAPE, 4);
		cards[74].Set(&cards[74], CARD_FLOWER_HEART, 6, CARD_TYPE_BASIC_GRAPE, 4);
		cards[75].Set(&cards[75], CARD_FLOWER_HEART, 6, CARD_TYPE_BASIC_GRAPE, 4);
		cards[76].Set(&cards[76], CARD_FLOWER_HEART, 7, CARD_TYPE_BASIC_GRAPE, 4);
		cards[77].Set(&cards[77], CARD_FLOWER_HEART, 8, CARD_TYPE_BASIC_GRAPE, 4);
		cards[78].Set(&cards[78], CARD_FLOWER_HEART, 9, CARD_TYPE_BASIC_GRAPE, 4);
		cards[79].Set(&cards[79], CARD_FLOWER_HEART, 'Q', CARD_TYPE_BASIC_GRAPE, 4);
		//红星桃 

		cards[80].Set(&cards[80], CARD_FLOWER_DIAMOND, 9, CARD_TYPE_BASIC_WINE, 2);
		//方块酒

		cards[81].Set(&cards[81], CARD_FLOWER_CLUB, 3, CARD_TYPE_BASIC_WINE, 2);
		cards[82].Set(&cards[82], CARD_FLOWER_CLUB, 9, CARD_TYPE_BASIC_WINE, 2);
		//梅花酒

		cards[83].Set(&cards[83], CARD_FLOWER_SPADE, 3, CARD_TYPE_BASIC_WINE, 1);
		cards[84].Set(&cards[84], CARD_FLOWER_SPADE, 9, CARD_TYPE_BASIC_WINE, 1);
		//黑桃酒 

		cards[85].Set(&cards[85], CARD_FLOWER_HEART, 'A', CARD_TYPE_TRICK_SWORNBROTHER, 4);
		//桃园结义 

		cards[86].Set(&cards[86], CARD_FLOWER_HEART, 'A', CARD_TYPE_TRICK_ARRORTOALL, 2);
		//万箭齐发 

		cards[87].Set(&cards[87], CARD_FLOWER_CLUB, 'Q', CARD_TYPE_TRICK_BORROWAKNIFTOKILL, 1);
		cards[88].Set(&cards[88], CARD_FLOWER_CLUB, 'K', CARD_TYPE_TRICK_BORROWAKNIFTOKILL, 1);
		//借刀杀人 

		cards[89].Set(&cards[89], CARD_FLOWER_HEART, 3, CARD_TYPE_TRICK_GOLDENHARVEST, 1);
		cards[90].Set(&cards[90], CARD_FLOWER_HEART, 4, CARD_TYPE_TRICK_GOLDENHARVEST, 1);
		//五谷丰登

		cards[91].Set(&cards[91], CARD_FLOWER_CLUB, 7, CARD_TYPE_TRICK_SOTHERNBARBARIANS, 1);
		cards[92].Set(&cards[92], CARD_FLOWER_SPADE, 7, CARD_TYPE_TRICK_SOTHERNBARBARIANS, 1);
		cards[93].Set(&cards[93], CARD_FLOWER_SPADE, 'K', CARD_TYPE_TRICK_SOTHERNBARBARIANS, 1);
		//南蛮入侵 

		cards[94].Set(&cards[94], CARD_FLOWER_DIAMOND, 'A', CARD_TYPE_TRICK_FIGHT, 1);
		cards[95].Set(&cards[95], CARD_FLOWER_CLUB, 'A', CARD_TYPE_TRICK_FIGHT, 1);
		cards[96].Set(&cards[96], CARD_FLOWER_SPADE, 'A', CARD_TYPE_TRICK_FIGHT, 1);
		//决斗 

		cards[97].Set(&cards[97], CARD_FLOWER_DIAMOND, 'Q', CARD_TYPE_TRICK_FIREATTACK, 1);
		cards[98].Set(&cards[98], CARD_FLOWER_HEART, 2, CARD_TYPE_TRICK_FIREATTACK, 1);
		cards[99].Set(&cards[99], CARD_FLOWER_HEART, 3, CARD_TYPE_TRICK_FIREATTACK, 1);
		//火攻 

		cards[100].Set(&cards[100], CARD_FLOWER_HEART, 7, CARD_TYPE_TRICK_COMEOUTOFAIR, 1);
		cards[101].Set(&cards[101], CARD_FLOWER_HEART, 8, CARD_TYPE_TRICK_COMEOUTOFAIR, 1);
		cards[102].Set(&cards[102], CARD_FLOWER_HEART, 9, CARD_TYPE_TRICK_COMEOUTOFAIR, 1);
		cards[103].Set(&cards[103], CARD_FLOWER_HEART, 'J', CARD_TYPE_TRICK_COMEOUTOFAIR, 1);
		//无中生有 

		cards[104].Set(&cards[104], CARD_FLOWER_DIAMOND, 3, CARD_TYPE_TRICK_ROB, 1);
		cards[105].Set(&cards[105], CARD_FLOWER_DIAMOND, 4, CARD_TYPE_TRICK_ROB, 1);
		cards[106].Set(&cards[106], CARD_FLOWER_SPADE, 3, CARD_TYPE_TRICK_ROB, 1);
		cards[107].Set(&cards[107], CARD_FLOWER_SPADE, 4, CARD_TYPE_TRICK_ROB, 1);
		cards[108].Set(&cards[108], CARD_FLOWER_SPADE, 'J', CARD_TYPE_TRICK_ROB, 1);
		//顺手牵羊

		cards[109].Set(&cards[109], CARD_FLOWER_CLUB, 3, CARD_TYPE_TRICK_DISMANTLE, 1);
		cards[110].Set(&cards[110], CARD_FLOWER_CLUB, 4, CARD_TYPE_TRICK_DISMANTLE, 1);
		cards[111].Set(&cards[111], CARD_FLOWER_HEART, 'Q', CARD_TYPE_TRICK_DISMANTLE, 1);
		cards[112].Set(&cards[112], CARD_FLOWER_SPADE, 3, CARD_TYPE_TRICK_DISMANTLE, 1);
		cards[113].Set(&cards[113], CARD_FLOWER_SPADE, 4, CARD_TYPE_TRICK_DISMANTLE, 1);
		cards[114].Set(&cards[114], CARD_FLOWER_SPADE, 'Q', CARD_TYPE_TRICK_DISMANTLE,1);
			//过河拆桥 

			cards[115].Set(&cards[115], CARD_FLOWER_DIAMOND, 'Q', CARD_TYPE_TRICK_UNASSAILABILITY, 4);
		cards[116].Set(&cards[116], CARD_FLOWER_CLUB, 'Q', CARD_TYPE_TRICK_UNASSAILABILITY, 4);
		cards[117].Set(&cards[117], CARD_FLOWER_CLUB, 'K', CARD_TYPE_TRICK_UNASSAILABILITY, 4);
		cards[118].Set(&cards[118], CARD_FLOWER_HEART, 'A', CARD_TYPE_TRICK_UNASSAILABILITY, 4);
		cards[119].Set(&cards[119], CARD_FLOWER_HEART, 'K', CARD_TYPE_TRICK_UNASSAILABILITY, 4);
		cards[120].Set(&cards[120], CARD_FLOWER_SPADE, 'J', CARD_TYPE_TRICK_UNASSAILABILITY, 4);
		cards[121].Set(&cards[121], CARD_FLOWER_SPADE, 'K', CARD_TYPE_TRICK_UNASSAILABILITY, 4);
		//无懈可击

		cards[122].Set(&cards[122], CARD_FLOWER_HEART, 'Q', CARD_TYPE_DELAYEDTRICK_THUNDER, 1);
		cards[123].Set(&cards[123], CARD_FLOWER_SPADE, 'A', CARD_TYPE_DELAYEDTRICK_THUNDER, 1);
		//闪电 

		cards[124].Set(&cards[124], CARD_FLOWER_CLUB, 4, CARD_TYPE_DELAYEDTRICK_FOODLESS, 2);
		cards[125].Set(&cards[125], CARD_FLOWER_SPADE, 10, CARD_TYPE_DELAYEDTRICK_FOODLESS, 2);
		//兵粮寸断 

		cards[126].Set(&cards[126], CARD_FLOWER_CLUB, 6, CARD_TYPE_DELAYEDTRICK_DISABLE, 2);
		cards[127].Set(&cards[127], CARD_FLOWER_HEART, 6, CARD_TYPE_DELAYEDTRICK_DISABLE, 2);
		cards[128].Set(&cards[128], CARD_FLOWER_SPADE, 6, CARD_TYPE_DELAYEDTRICK_DISABLE, 2);
		//乐不思蜀 

		cards[129].Set(&cards[129], CARD_FLOWER_DIAMOND, 'A', CARD_TYPE_ITEM_ZHUGECROSSBOW, 0);
		cards[130].Set(&cards[130], CARD_FLOWER_CLUB, 'A', CARD_TYPE_ITEM_ZHUGECROSSBOW, 0);
		//诸葛连弩 

		cards[131].Set(&cards[131], CARD_FLOWER_CLUB, 6, CARD_TYPE_ITEM_GREENSWORD, 0);
		//青釭剑 

		cards[132].Set(&cards[132], CARD_FLOWER_CLUB, 2, CARD_TYPE_ITEM_ICEBLADE, 0);
		//寒冰剑

		cards[133].Set(&cards[133], CARD_FLOWER_CLUB, 2, CARD_TYPE_ITEM_MANANDFEMALESWORDS, 0);
		//雌雄双股剑

		cards[134].Set(&cards[134], CARD_FLOWER_CLUB, 'A', CARD_TYPE_ITEM_ANCIENTKNIF, 0);
		//古锭刀

		cards[135].Set(&cards[135], CARD_FLOWER_CLUB, 5, CARD_TYPE_ITEM_DRAGONKNIF, 0);
		//青龙偃月刀

		cards[136].Set(&cards[136], CARD_FLOWER_CLUB, 'Q', CARD_TYPE_ITEM_SNAKESPEAR, 0);
		//丈八蛇矛 

		cards[137].Set(&cards[137], CARD_FLOWER_DIAMOND, 5, CARD_TYPE_ITEM_GUANSHIAXE, 0);
		//贯石斧 

		cards[138].Set(&cards[138], CARD_FLOWER_DIAMOND, 'A', CARD_TYPE_ITEM_ROSEFINCHFAN, 0);
		//朱雀羽扇

		cards[139].Set(&cards[139], CARD_FLOWER_DIAMOND, 'Q', CARD_TYPE_ITEM_FANGTIANHALBER, 0);
		//方天画戟 

		cards[140].Set(&cards[140], CARD_FLOWER_HEART, 5, CARD_TYPE_ITEM_KIRINBOW, 0);
		//麒麟弓 

		cards[141].Set(&cards[141], CARD_FLOWER_CLUB, 'A', CARD_TYPE_ITEM_SILVERLION, 0);
		//白银狮子 

		cards[142].Set(&cards[142], CARD_FLOWER_CLUB, 'A', CARD_TYPE_ITEM_RENWANGSHIELD, 0);
		//仁王盾 

		cards[143].Set(&cards[143], CARD_FLOWER_CLUB, 2, CARD_TYPE_ITEM_RATTANNAIL, 0);
		cards[144].Set(&cards[144], CARD_FLOWER_SPADE, 2, CARD_TYPE_ITEM_RATTANNAIL, 0);
		//藤甲 

		cards[145].Set(&cards[145], CARD_FLOWER_CLUB, 2, CARD_TYPE_ITEM_EIGHTDIAGRAMTACTICS, 0);
		cards[146].Set(&cards[146], CARD_FLOWER_SPADE, 2, CARD_TYPE_ITEM_EIGHTDIAGRAMTACTICS, 0);
		//八卦阵 

		cards[147].Set(&cards[147], CARD_FLOWER_CLUB, 10, CARD_TYPE_TRICK_IRONCHAIN, 1);
		cards[148].Set(&cards[148], CARD_FLOWER_CLUB, 'J', CARD_TYPE_TRICK_IRONCHAIN, 1);
		cards[149].Set(&cards[149], CARD_FLOWER_CLUB, 'Q', CARD_TYPE_TRICK_IRONCHAIN, 1);
		cards[150].Set(&cards[150], CARD_FLOWER_CLUB, 'K', CARD_TYPE_TRICK_IRONCHAIN, 1);
		cards[151].Set(&cards[151], CARD_FLOWER_SPADE, 'J', CARD_TYPE_TRICK_IRONCHAIN, 1);
		cards[152].Set(&cards[152], CARD_FLOWER_SPADE, 'Q', CARD_TYPE_TRICK_IRONCHAIN, 1);
		//铁索连环 

		cards[153].Set(&cards[153], CARD_FLOWER_DIAMOND, 'K', CARD_TYPE_ITEM_ZIXIN, 1);
		//紫骍

		cards[154].Set(&cards[154], CARD_FLOWER_HEART, 5, CARD_TYPE_ITEM_CHITU, 1);
		//赤兔 

		cards[155].Set(&cards[155], CARD_FLOWER_SPADE, 'K', CARD_TYPE_ITEM_DAWAN, 1);
		//大宛 

		cards[156].Set(&cards[156], CARD_FLOWER_DIAMOND, 'K', CARD_TYPE_ITEM_HUALIU, 1);
		//骅骝 

		cards[157].Set(&cards[157], CARD_FLOWER_CLUB, 5, CARD_TYPE_ITEM_DILU, 1);
		//的卢 

		cards[158].Set(&cards[158], CARD_FLOWER_HEART, 'K', CARD_TYPE_ITEM_ZHUAHUANGFEIDIAN, 1);
		//爪黄飞电 

		cards[159].Set(&cards[159], CARD_FLOWER_SPADE, 5, CARD_TYPE_ITEM_JUEYING, 1);
		//绝影 
	}

	





/*
函数名：void Print()
功能：打印输出初始化后牌堆中所有的牌信息
输入参数：无
输出参数：输出牌堆所有牌的信息
返回值：无
*/
VOID CARDS::Print() {
	
	INT32 i;
	
	for (i = 0; i < MaxCards; i++)
	{

		printf("第%d的花色为%d\t", i + 1, cards[i].GetFlower(&cards[i]));
		printf("第%d的点数为%d\t", i + 1, cards[i].GetNumber(&cards[i]));
		printf("第%d的类型为%d\t", i + 1, cards[i].GetType(&cards[i]));
		printf("第%d的价值为%d\t", i + 1, cards[i].GetValue(&cards[i]));
		printf("第%d的随机值为%d\n", i + 1, cards[i].uiRand);

	}

}
/*
函数功能：洗牌
输入参数；无
返回值；无
负责人；蔡子健
*/
VOID CARDS::Flush()
{
	int n;
	int m;
	CARD midcard;//交换中间变量
	for (n = 0; n < 159; n++)
	{
		for (m = 0; m < 158 - n; m++)
		{
			if (this->cards[m].uiRand > this->cards[m + 1].uiRand)
			{

				midcard = this->cards[m + 1];
				this->cards[m + 1] = this->cards[m];
				this->cards[m] = midcard;
			}
		}
	}


	/*for(n=0;n<159;n++)//检查
	{
		cout<<card[n].uirand<<"\n"<<endl;
	)*/
}







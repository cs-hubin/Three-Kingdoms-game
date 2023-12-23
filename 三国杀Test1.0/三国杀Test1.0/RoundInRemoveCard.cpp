#include<iostream>
#include"basetype.h"
#include"common.h"
#include"ACTIVEHERO.h"
using namespace std;


/*
函数功能：回合内弃牌
输入参数；无
返回值；无
负责人；胡彬
*/

VOID ACTIVEHERO::RoundInRemoveCard()
{
	UINT32  currentblood = GetCurrentBlood();
	UINT32  handcardcount = GetHandCardCount();
	INT32  count=handcardcount-currentblood;
	UINT32 index = 0;
	if (count>0)
	{
		for (UINT32 i = 0; i < count; i++)
		{
			//因为uiCardIndex是CARDS类的私有成员，所以直接使用uiCardIndex还是有问题
			memcpy(&(CARD cards[++uiCardIndex]),//先把要弃的牌存入牌堆中，默认从手牌第1张牌开始弃牌
				&(this->aclHandCard[index]),
				sizeof(CARD));
			RemoveCardFromHands(index);//再把要弃的牌从手牌中移除
			index++;
		}
	}
}
#include<iostream>
#include"basetype.h"
#include"common.h"
#include"CARD.h"
using namespace std;

/*
  函数功能:获取卡牌花色
  输入参数:无
  输出参数:无
  返回值:uiCardFlower：卡牌花色
  函数负责人:胡彬
 */
CARD_FLOWER_E CARD::GetFlower(CARD * pCard)
{
	return this->uiCardFlower;
}


/*
  函数功能:获取卡牌数字
  输入参数:无
  输出参数:无
  返回值:uiCardNumber：卡牌点数
  函数负责人:胡彬
 */
UINT32 CARD::GetNumber(CARD* pCard)
{
	return this->uiCardNumber;
}

/*
  函数功能:获取卡牌类型
  输入参数:无
  输出参数:无
  返回值:uiCardType：卡牌类型
  函数负责人:胡彬
 */
CARD_TYPE_E CARD::GetType(CARD* pCard)
{
	return this->uiCardType;
}


/*
  函数功能:获取卡牌价值
  输入参数:无
  输出参数:无
  返回值:uiCardValue：卡牌价值
  函数负责人:胡彬
 */
UINT32 CARD::GetValue(CARD* pCard)
{
	return this->uiCardValue;
}



/*
函数功能：卡牌属性赋值
输入参数：a:卡牌花色，b:卡牌数字，c:卡牌类型,d:卡牌价值
返回值：无
负责人：王翌
*/
VOID CARD::Set(CARD* pCard,CARD_FLOWER_E uiCardFlower, UINT32 uiCardNumber,CARD_TYPE_E uiCardType , UINT32 uiCardValue) {
	this->uiCardFlower = uiCardFlower;
	this->uiCardNumber = uiCardNumber;
	this->uiCardType = uiCardType;
	this->uiCardValue = uiCardValue;
}

/*
  函数功能:打印单张卡牌
  输入参数:无
  输出参数:无
  返回值:
  函数负责人:胡彬
 */
 VOID CARD::Print()
 {
 	printf("CARD::PRINT run");
 }

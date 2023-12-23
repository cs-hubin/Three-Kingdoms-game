
using namespace std;

//卡牌类
class CARD {
public:
	INT32 uiRand;            /*随机数用于排序*/
	//打印牌
	VOID Print();

	VOID Set(CARD* pCard,CARD_FLOWER_E uiCardFlower, UINT32 uiCardNumber, CARD_TYPE_E uiCardType, UINT32 uiCardValue);

	//获取属性
	CARD_FLOWER_E GetFlower(CARD* pCard);
	UINT32 GetNumber(CARD* pCard);
	UINT32 GetValue(CARD* pCard);
	CARD_TYPE_E GetType(CARD* pCard);


	//判断牌的类型（基本牌、锦囊牌、装备牌）
	bool IsBasicCard();//判断一张牌是否是基本牌
	bool IsKill();//判断一张牌是否是杀
	bool IsDodge();//判断一张牌是否是闪
	bool IsPeach();//判断一张牌是否是桃
	bool IsAlcohol();//判断一张牌是否是酒
	bool IsRedCard();//判断一张牌是否是红色
	bool IsBlackCard();//判断一张牌是否是黑色
	bool IsTrickCard();//判断一张牌是否是锦囊牌
	bool IsLiemCard();//判断一张牌是否是装备牌
	bool IsWeapon();//判断一张牌是否是武器装备
	bool IsShield();//判断一张牌是否是防御装备
	bool IsHorse();//判断一张牌是否是马
	bool IsAttackHorse();//判断一张牌是否是进攻马
	bool IsDefendHorse();//判断一张牌是否是防御马
	bool IsUnassailAbility();//判断一张牌是否是无懈可击
	bool IsTrickCardWithDelay();//判断一张牌是否是延时锦囊
	bool IsTrickCardWithoutDelay();//判断一张牌是否是及时锦囊





private:
	CARD_FLOWER_E uiCardFlower;    //卡牌花色
	UINT32 uiCardNumber;	//卡牌点数
	UINT32 uiCardValue;		//卡牌价值
	CARD_TYPE_E uiCardType;		//卡牌类型

	UINT32 uiBelongingIndex; /* 卡牌所属的武将索引*/
	UINT32 uiTargetIndex;    /* 卡牌效果指向的武将索引 */



};

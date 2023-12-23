#pragma once
#pragma once
#define HERO_MAX 8
#define HERO_ACTIVE_MAX 8
#define HERO_INDEX_INVALID 0xFFFFFFFF
#define HERO_NAME_MAXLEN 15
#define HERO_NATION_MAXLEN 10
#define HERO_HERO_DESC_MAXLEN 255

#define GAME_INVULNERABLE_MAXTIME 4

typedef enum
{
	CARD_TYPE_BASIC_KILL = 0,				/*杀*/
	CARD_TYPE_BASIC_DODGE,					/*闪*/
	CARD_TYPE_BASIC_GRAPE,					/*桃*/
	CARD_TYPE_BASIC_WINE,					/*酒*/
	CARD_TYPE_BASIC_THUNERKILL,				/*雷杀*/
	CARD_TYPE_BASIC_FIREKILL,				/*火杀*/

	CARD_TYPE_ITEM_ZHUGECROSSBOW,         /*诸葛连弩*/
	CARD_TYPE_ITEM_MANANDFEMALESWORDS,    /*雌雄双股剑*/
	CARD_TYPE_ITEM_GREENSWORD,            /*青釭剑*/
	CARD_TYPE_ITEM_GUANSHIAXE,            /*贯石斧*/
	CARD_TYPE_ITEM_DRAGONKNIF,            /*青龙偃月刀*/
	CARD_TYPE_ITEM_SNAKESPEAR,            /*丈八蛇矛*/
	CARD_TYPE_ITEM_FANGTIANHALBER,        /*方天画戟*/
	CARD_TYPE_ITEM_KIRINBOW,              /*麒麟弓*/
	CARD_TYPE_ITEM_ICEBLADE,              /*寒冰剑*/
	CARD_TYPE_ITEM_ANCIENTKNIF,           /*古锭刀*/
	CARD_TYPE_ITEM_ROSEFINCHFAN,          /*朱雀扇*/
	CARD_TYPE_ITEM_EIGHTDIAGRAMTACTICS,   /*八卦阵*/
	CARD_TYPE_ITEM_RENWANGSHIELD,         /*仁王盾*/
	CARD_TYPE_ITEM_SILVERLION,            /*白银狮子*/
	CARD_TYPE_ITEM_RATTANNAIL,            /*藤甲*/

	CARD_TYPE_ITEM_DILU,                  /*的卢*/
	CARD_TYPE_ITEM_JUEYING,               /*绝影*/
	CARD_TYPE_ITEM_HUALIU,                /*骅骝*/
	CARD_TYPE_ITEM_ZHUAHUANGFEIDIAN,      /*爪黄飞电*/
	CARD_TYPE_ITEM_CHITU,                  /*赤兔*/
	CARD_TYPE_ITEM_ZIXIN,                  /*紫骍*/
	CARD_TYPE_ITEM_DAWAN,                  /*大宛*/

	CARD_TYPE_TRICK_ARRORTOALL,           /*万箭齐发*/
	CARD_TYPE_TRICK_SOTHERNBARBARIANS,    /*南蛮入侵*/
	CARD_TYPE_TRICK_ROB,                  /*顺手牵羊*/
	CARD_TYPE_TRICK_DISMANTLE,            /*过河拆桥*/
	CARD_TYPE_TRICK_SWORNBROTHER,         /*桃园结义*/
	CARD_TYPE_TRICK_GOLDENHARVEST,        /*五谷丰登*/
	CARD_TYPE_TRICK_BORROWAKNIFTOKILL,    /*借刀杀人*/
	CARD_TYPE_TRICK_FIGHT,                /*决斗*/
	CARD_TYPE_TRICK_FIREATTACK,           /*火攻*/
	CARD_TYPE_TRICK_IRONCHAIN,            /*铁索连环*/
	CARD_TYPE_TRICK_COMEOUTOFAIR,         /*无中生有*/
	CARD_TYPE_TRICK_UNASSAILABILITY,  	  /*无懈可击*/


	CARD_TYPE_DELAYEDTRICK_DISABLE, /* 乐不思蜀 */
	CARD_TYPE_DELAYEDTRICK_FOODLESS, /* 兵粮寸断 */
	CARD_TYPE_DELAYEDTRICK_THUNDER, /* 闪电 */

}CARD_TYPE_E;
typedef enum
{
	CARD_FLOWER_HEART = 0,/*桃花*/
	CARD_FLOWER_DIAMOND,/*方片*/
	CARD_FLOWER_CLUB,/*梅花*/
	CARD_FLOWER_SPADE,/*黑桃*/
}CARD_FLOWER_E;

typedef enum
{
	ROLE_UNKNOWN = 0, /* 身份未知 */
	ROLE_MASTER, 	  /*主公*/
	ROLE_SLAVE,       /*忠臣*/
	ROLE_EVIL,        /*内奸*/
	ROLE_ENEMY,       /*反贼*/
	ROLE_MAX,
}ROLE_E;

typedef enum
{
	NATION_WILD = 0, /* 群(野) */
	NATION_WEIJIN,
	NATION_SHUHAN,
	NATION_DONGWU,
	NATION_MAX
}NATION_E;

typedef enum
{
	STEP_PREPARING = 0,       /* 准备阶段 */
	STEP_JUDGING,           /*判定阶段*/
	STEP_DRAWINGCARDS,      /*摸牌阶段*/
	STEP_USINGCARDS,        /*出牌阶段*/
	STEP_DROPPINGCARDS,   /*弃牌阶段*/
	STEP_ENDING,            /*结束阶段*/
	STEP_MAX,
}STEP_E;

#define GAME_JUDGEMENT_DISABLE  0x1 /* 乐不思蜀 */
#define GAME_JUDGEMENT_FOODLESS 0x2 /* 兵粮寸断 */
#define GAME_JUDGEMENT_THUNDER   0x4 /* 闪电 */


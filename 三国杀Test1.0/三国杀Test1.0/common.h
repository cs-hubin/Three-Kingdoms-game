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
	CARD_TYPE_BASIC_KILL = 0,				/*ɱ*/
	CARD_TYPE_BASIC_DODGE,					/*��*/
	CARD_TYPE_BASIC_GRAPE,					/*��*/
	CARD_TYPE_BASIC_WINE,					/*��*/
	CARD_TYPE_BASIC_THUNERKILL,				/*��ɱ*/
	CARD_TYPE_BASIC_FIREKILL,				/*��ɱ*/

	CARD_TYPE_ITEM_ZHUGECROSSBOW,         /*�������*/
	CARD_TYPE_ITEM_MANANDFEMALESWORDS,    /*����˫�ɽ�*/
	CARD_TYPE_ITEM_GREENSWORD,            /*���G��*/
	CARD_TYPE_ITEM_GUANSHIAXE,            /*��ʯ��*/
	CARD_TYPE_ITEM_DRAGONKNIF,            /*�������µ�*/
	CARD_TYPE_ITEM_SNAKESPEAR,            /*�ɰ���ì*/
	CARD_TYPE_ITEM_FANGTIANHALBER,        /*���컭�*/
	CARD_TYPE_ITEM_KIRINBOW,              /*���빭*/
	CARD_TYPE_ITEM_ICEBLADE,              /*������*/
	CARD_TYPE_ITEM_ANCIENTKNIF,           /*�Ŷ���*/
	CARD_TYPE_ITEM_ROSEFINCHFAN,          /*��ȸ��*/
	CARD_TYPE_ITEM_EIGHTDIAGRAMTACTICS,   /*������*/
	CARD_TYPE_ITEM_RENWANGSHIELD,         /*������*/
	CARD_TYPE_ITEM_SILVERLION,            /*����ʨ��*/
	CARD_TYPE_ITEM_RATTANNAIL,            /*�ټ�*/

	CARD_TYPE_ITEM_DILU,                  /*��¬*/
	CARD_TYPE_ITEM_JUEYING,               /*��Ӱ*/
	CARD_TYPE_ITEM_HUALIU,                /*����*/
	CARD_TYPE_ITEM_ZHUAHUANGFEIDIAN,      /*צ�Ʒɵ�*/
	CARD_TYPE_ITEM_CHITU,                  /*����*/
	CARD_TYPE_ITEM_ZIXIN,                  /*���U*/
	CARD_TYPE_ITEM_DAWAN,                  /*����*/

	CARD_TYPE_TRICK_ARRORTOALL,           /*����뷢*/
	CARD_TYPE_TRICK_SOTHERNBARBARIANS,    /*��������*/
	CARD_TYPE_TRICK_ROB,                  /*˳��ǣ��*/
	CARD_TYPE_TRICK_DISMANTLE,            /*���Ӳ���*/
	CARD_TYPE_TRICK_SWORNBROTHER,         /*��԰����*/
	CARD_TYPE_TRICK_GOLDENHARVEST,        /*��ȷ��*/
	CARD_TYPE_TRICK_BORROWAKNIFTOKILL,    /*�赶ɱ��*/
	CARD_TYPE_TRICK_FIGHT,                /*����*/
	CARD_TYPE_TRICK_FIREATTACK,           /*��*/
	CARD_TYPE_TRICK_IRONCHAIN,            /*��������*/
	CARD_TYPE_TRICK_COMEOUTOFAIR,         /*��������*/
	CARD_TYPE_TRICK_UNASSAILABILITY,  	  /*��и�ɻ�*/


	CARD_TYPE_DELAYEDTRICK_DISABLE, /* �ֲ�˼�� */
	CARD_TYPE_DELAYEDTRICK_FOODLESS, /* ������� */
	CARD_TYPE_DELAYEDTRICK_THUNDER, /* ���� */

}CARD_TYPE_E;
typedef enum
{
	CARD_FLOWER_HEART = 0,/*�һ�*/
	CARD_FLOWER_DIAMOND,/*��Ƭ*/
	CARD_FLOWER_CLUB,/*÷��*/
	CARD_FLOWER_SPADE,/*����*/
}CARD_FLOWER_E;

typedef enum
{
	ROLE_UNKNOWN = 0, /* ���δ֪ */
	ROLE_MASTER, 	  /*����*/
	ROLE_SLAVE,       /*�ҳ�*/
	ROLE_EVIL,        /*�ڼ�*/
	ROLE_ENEMY,       /*����*/
	ROLE_MAX,
}ROLE_E;

typedef enum
{
	NATION_WILD = 0, /* Ⱥ(Ұ) */
	NATION_WEIJIN,
	NATION_SHUHAN,
	NATION_DONGWU,
	NATION_MAX
}NATION_E;

typedef enum
{
	STEP_PREPARING = 0,       /* ׼���׶� */
	STEP_JUDGING,           /*�ж��׶�*/
	STEP_DRAWINGCARDS,      /*���ƽ׶�*/
	STEP_USINGCARDS,        /*���ƽ׶�*/
	STEP_DROPPINGCARDS,   /*���ƽ׶�*/
	STEP_ENDING,            /*�����׶�*/
	STEP_MAX,
}STEP_E;

#define GAME_JUDGEMENT_DISABLE  0x1 /* �ֲ�˼�� */
#define GAME_JUDGEMENT_FOODLESS 0x2 /* ������� */
#define GAME_JUDGEMENT_THUNDER   0x4 /* ���� */


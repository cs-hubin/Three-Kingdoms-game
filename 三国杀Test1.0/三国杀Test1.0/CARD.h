
using namespace std;

//������
class CARD {
public:
	INT32 uiRand;            /*�������������*/
	//��ӡ��
	VOID Print();

	VOID Set(CARD* pCard,CARD_FLOWER_E uiCardFlower, UINT32 uiCardNumber, CARD_TYPE_E uiCardType, UINT32 uiCardValue);

	//��ȡ����
	CARD_FLOWER_E GetFlower(CARD* pCard);
	UINT32 GetNumber(CARD* pCard);
	UINT32 GetValue(CARD* pCard);
	CARD_TYPE_E GetType(CARD* pCard);


	//�ж��Ƶ����ͣ������ơ������ơ�װ���ƣ�
	bool IsBasicCard();//�ж�һ�����Ƿ��ǻ�����
	bool IsKill();//�ж�һ�����Ƿ���ɱ
	bool IsDodge();//�ж�һ�����Ƿ�����
	bool IsPeach();//�ж�һ�����Ƿ�����
	bool IsAlcohol();//�ж�һ�����Ƿ��Ǿ�
	bool IsRedCard();//�ж�һ�����Ƿ��Ǻ�ɫ
	bool IsBlackCard();//�ж�һ�����Ƿ��Ǻ�ɫ
	bool IsTrickCard();//�ж�һ�����Ƿ��ǽ�����
	bool IsLiemCard();//�ж�һ�����Ƿ���װ����
	bool IsWeapon();//�ж�һ�����Ƿ�������װ��
	bool IsShield();//�ж�һ�����Ƿ��Ƿ���װ��
	bool IsHorse();//�ж�һ�����Ƿ�����
	bool IsAttackHorse();//�ж�һ�����Ƿ��ǽ�����
	bool IsDefendHorse();//�ж�һ�����Ƿ��Ƿ�����
	bool IsUnassailAbility();//�ж�һ�����Ƿ�����и�ɻ�
	bool IsTrickCardWithDelay();//�ж�һ�����Ƿ�����ʱ����
	bool IsTrickCardWithoutDelay();//�ж�һ�����Ƿ��Ǽ�ʱ����





private:
	CARD_FLOWER_E uiCardFlower;    //���ƻ�ɫ
	UINT32 uiCardNumber;	//���Ƶ���
	UINT32 uiCardValue;		//���Ƽ�ֵ
	CARD_TYPE_E uiCardType;		//��������

	UINT32 uiBelongingIndex; /* �����������佫����*/
	UINT32 uiTargetIndex;    /* ����Ч��ָ����佫���� */



};

#include<iostream>
#include"basetype.h"
#include"common.h"
#include"ACTIVEHERO.h"
using namespace std;


/*
�������ܣ��غ�������
�����������
����ֵ����
�����ˣ�����
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
			//��ΪuiCardIndex��CARDS���˽�г�Ա������ֱ��ʹ��uiCardIndex����������
			memcpy(&(CARD cards[++uiCardIndex]),//�Ȱ�Ҫ�����ƴ����ƶ��У�Ĭ�ϴ����Ƶ�1���ƿ�ʼ����
				&(this->aclHandCard[index]),
				sizeof(CARD));
			RemoveCardFromHands(index);//�ٰ�Ҫ�����ƴ��������Ƴ�
			index++;
		}
	}
}
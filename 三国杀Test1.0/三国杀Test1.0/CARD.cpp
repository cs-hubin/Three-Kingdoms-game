#include<iostream>
#include"basetype.h"
#include"common.h"
#include"CARD.h"
using namespace std;

/*
  ��������:��ȡ���ƻ�ɫ
  �������:��
  �������:��
  ����ֵ:uiCardFlower�����ƻ�ɫ
  ����������:����
 */
CARD_FLOWER_E CARD::GetFlower(CARD * pCard)
{
	return this->uiCardFlower;
}


/*
  ��������:��ȡ��������
  �������:��
  �������:��
  ����ֵ:uiCardNumber�����Ƶ���
  ����������:����
 */
UINT32 CARD::GetNumber(CARD* pCard)
{
	return this->uiCardNumber;
}

/*
  ��������:��ȡ��������
  �������:��
  �������:��
  ����ֵ:uiCardType����������
  ����������:����
 */
CARD_TYPE_E CARD::GetType(CARD* pCard)
{
	return this->uiCardType;
}


/*
  ��������:��ȡ���Ƽ�ֵ
  �������:��
  �������:��
  ����ֵ:uiCardValue�����Ƽ�ֵ
  ����������:����
 */
UINT32 CARD::GetValue(CARD* pCard)
{
	return this->uiCardValue;
}



/*
�������ܣ��������Ը�ֵ
���������a:���ƻ�ɫ��b:�������֣�c:��������,d:���Ƽ�ֵ
����ֵ����
�����ˣ�����
*/
VOID CARD::Set(CARD* pCard,CARD_FLOWER_E uiCardFlower, UINT32 uiCardNumber,CARD_TYPE_E uiCardType , UINT32 uiCardValue) {
	this->uiCardFlower = uiCardFlower;
	this->uiCardNumber = uiCardNumber;
	this->uiCardType = uiCardType;
	this->uiCardValue = uiCardValue;
}

/*
  ��������:��ӡ���ſ���
  �������:��
  �������:��
  ����ֵ:
  ����������:����
 */
 VOID CARD::Print()
 {
 	printf("CARD::PRINT run");
 }

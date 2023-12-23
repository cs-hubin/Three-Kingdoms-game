#include<iostream>
#include"basetype.h"
#include"common.h"
#include"ACTIVEHERO.h"
using namespace std;


/*
�������ܣ������佫���
���������*PRole�����ָ��
�����������
����ֵ����
�����ˣ�����
*/

VOID ACTIVEHERO::SetRole(UINT32 PRole)
{
	uiRole = PRole;
}




/*
�������ܣ������佫���Ѫ��
���������*PMaxBlood:���Ѫ��ָ��
�����������
����ֵ����
�����ˣ�����
*/
VOID ACTIVEHERO::SetMaxBlood(UINT32 PMaxBlood)
{
	uiMaxBlood = PMaxBlood;
}


/*
�������ܣ������佫��ǰѪ��
���������*PCurrentBlood:��ǰѪ��ָ��
�����������
����ֵ����
�����ˣ�����
*/
VOID ACTIVEHERO::SetCurrentBlood(UINT32 PCurrentBlood)
{
	uiCurrnetBlood = PCurrentBlood;
}



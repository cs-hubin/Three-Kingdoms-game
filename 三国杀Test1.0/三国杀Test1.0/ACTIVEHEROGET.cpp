#include<iostream>
#include"basetype.h"
#include"common.h"
#include"ACTIVEHERO.h"
using namespace std;


/*
�������ܣ���ȡ�佫���
�����������
�����������
����ֵ��uiRole���佫���
�����ˣ�����
*/

UINT32 ACTIVEHERO::GetRole()
{
	return uiRole;
}




/*
�������ܣ���ȡ�佫���Ѫ��
�����������
�����������
����ֵ��uiMaxBlood:�佫���Ѫ��
�����ˣ�����
*/
UINT32 ACTIVEHERO::GetMaxBlood()
{
	return uiMaxBlood;
}


/*
�������ܣ���ȡ�佫��ǰѪ��
�����������
�����������
����ֵ��uiCurrnetBlood:�佫��ǰѪ��
�����ˣ�����
*/
UINT32 ACTIVEHERO::GetCurrentBlood()
{
	return uiCurrentBlood;
}



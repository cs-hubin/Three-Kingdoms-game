#include<iostream>
#include"basetype.h"
#include"common.h"
#include"ACTIVEHERO.h"
using namespace std;


/*
函数功能：获取武将身份
输入参数：无
输出参数：无
返回值：uiRole：武将身份
负责人：胡彬
*/

UINT32 ACTIVEHERO::GetRole()
{
	return uiRole;
}




/*
函数功能：获取武将最大血量
输入参数：无
输出参数：无
返回值：uiMaxBlood:武将最大血量
负责人：胡彬
*/
UINT32 ACTIVEHERO::GetMaxBlood()
{
	return uiMaxBlood;
}


/*
函数功能：获取武将当前血量
输入参数：无
输出参数：无
返回值：uiCurrnetBlood:武将当前血量
负责人：胡彬
*/
UINT32 ACTIVEHERO::GetCurrentBlood()
{
	return uiCurrentBlood;
}



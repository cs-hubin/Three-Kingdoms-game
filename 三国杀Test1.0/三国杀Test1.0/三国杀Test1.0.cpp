#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "basetype.h"
#include "common.h"
#include "CARD.h"
#include "CARDS.h"


VOID TestView();



INT32 main() {

	INT32 item;
	CARDS Cards;
	printf("CARD类和CARDS类方法测试,请按以下选项进行你想要进行的测试\n");
	printf("0：退出测试\n");
	printf("1：CARDS类的InitCard函数测试\n");
	printf("2：CARDS类的Print函数测试\n");
	printf("3:CARD类的Flush函数测试\n");
	printf("请输入你想要进行的操作的选项：");
		scanf("%d", &item);
	while (item) {
		switch (item)
		{
		case 0:				//输入零结束测试
			return 0;
		case 1:				//输入1初始化
			Cards.InitCards();
			break;
		case 2:				//输入2打印
			Cards.Print();
			break;
		case 3:
			Cards.Flush();
		defalut:
			break;
		}
		TestView();
		scanf("%d", &item);
	}


}

/*
函数名：VOID TestView()
函数功能：输出测试使用的视图
函数输出：测试视图
返回值：无
函数负责人：何珺烁
*/
void TestView() {
	printf("CARD类和CARDS类方法测试,请按以下选项进行你想要进行的测试\n");
	printf("0：退出测试\n");
	printf("1：CARDS类的InitCard函数测试\n");
	printf("2：CARDS类的Print函数测试\n");
	printf("请输入你想要进行的操作：\n");
}




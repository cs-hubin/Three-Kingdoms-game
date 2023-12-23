#define MaxCards 160
using namespace std;

class CARDS {

public:
	//初始化牌堆
	VOID InitCards();

	//打印牌堆
	VOID Print();

	//洗牌
	VOID Flush();

	//摸下一张牌
	VOID DrawNext();




private:
	CARD cards[MaxCards]; //牌堆
	UINT32 uiCardIndex;   //目前牌的索引

};


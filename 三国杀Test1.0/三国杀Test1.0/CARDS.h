#define MaxCards 160
using namespace std;

class CARDS {

public:
	//��ʼ���ƶ�
	VOID InitCards();

	//��ӡ�ƶ�
	VOID Print();

	//ϴ��
	VOID Flush();

	//����һ����
	VOID DrawNext();




private:
	CARD cards[MaxCards]; //�ƶ�
	UINT32 uiCardIndex;   //Ŀǰ�Ƶ�����

};


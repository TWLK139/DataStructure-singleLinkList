//**********************//
//������ʵ��ͷ�ļ�		//
//������1������ͷ�ļ�	//
//		2���ṹ����		//
//		3����������		//
//**********************//


#ifndef LINKEDLIST_H

#define LINKEDLIST_H

#include<iostream>

using namespace std;

typedef int elementType;

//*********************���ṹ*********************************//
typedef struct sLNode {											//
	elementType data;											//
	struct sLNode* next;										//
}node, * linkList;					//���������͡����ָ������//
//**************************************************************//

//*********************˳���ṹ*******************************//
//����ָ�����鴴���������ڲ���								//
#define ARRYLEN 20					//ָ��������󳤶�			//
																//
typedef struct sList {											//
	elementType data[ARRYLEN];									//
	int listLen;												//
}seqList, * seqP;					//���������͡����ָ������//
//**************************************************************//




//**********************��������********************************************************************************//
bool initialList(linkList& L);											//��ʼ������							//
bool creatLinkListToEnd(linkList& L);									//β�巨����������						//
bool creatLinkListToBegin(linkList& L);									//ͷ�巨����������						//
bool creatLinkListArray(linkList& L, int arrayNum);						//ָ������ͷ�巨��������				//
bool showLinkList(linkList& L);											//��ӡ����								//
bool destroyLinkList(linkList& L);										//��������								//
elementType linkListLen(linkList& L);									//��������							//
linkList getElement(linkList& L);										//����Ų���Ԫ��						//
linkList getElement(linkList& L, int i);								//����Ų���Ԫ�أ����أ�����ʵ�飩		//
bool addElement(linkList& L, int i, elementType x);						//�ڵ�i�����ǰ����ֵΪx�Ľ��(����)	//
bool addElement(linkList& L);											//�ڵ�i�����ǰ����ֵΪx�Ľ��			//
linkList localElement(linkList& L);										//����Ԫ��ֵΪx�Ľ��					//
linkList localElement(linkList& L, elementType x);						//����Ԫ��ֵΪx�Ľ��(����)				//
bool deleteElement(linkList& L);										//ɾ����i��Ԫ�ؽ��						//
bool deleteElement(linkList& L, int i);									//ɾ����i��Ԫ�ؽ��(����)				//
bool insertElement(linkList& L);										//��ֵ����Ԫ��							//
bool insertElement(linkList& L, elementType x);							//��ֵ����Ԫ��(����)					//
bool separateElement(linkList& L, linkList& odd, linkList& even);		//ɾ����i��Ԫ�ؽ��						//
bool publicElement(linkList& L1, linkList& L2, linkList& publicLink);	//��ȡ�������еĹ���Ԫ��				//
bool deleteRepetition(linkList& L);										//ɾ�������е��ظ�Ԫ��					//
bool unionSetLinkList(linkList& L1, linkList& L2);						//��������ϲ���һ������				//
//**************************************************************************************************************//


//**********************��������****************************************


//************������������ʼ����������******************
//���룺Ҫ��ʼ���Ľ������ָ��
//���أ���ʼ���ɹ�����true����ʼ��ʧ�ܷ���false
bool initialList(linkList& L)
{
	if (L == nullptr)
	{
		L = new node;
		L->next = nullptr;

		return true;
	}
	else
	{
		cout << "��ǰ�����Ѵ�������ʼ��ʧ�ܣ�" << endl;

		return false;
	}
}


//****************������������ӡ����******************
//���룺����ͷָ��
//��ӡ������
//���أ���ӡ�ɹ�����true����ӡʧ�ܷ���false
bool showLinkList(linkList& L)
{
	linkList nowNode = L;
	if (L == nullptr)
	{
		cout << "δ��������" << endl;

		return false;
	}
	else
	{
		cout << "��ǰ�������£�" << endl;
		while (nowNode->next != nullptr)
		{
			cout << nowNode->next->data << "\t\t";
			nowNode = nowNode->next;
		}
		cout << endl;

		return true;
	}
}


//****************β�巨�����Զ�������****************
//ʵ���.1��β�巨�����Զ�������
//���룺����ͷָ�루δ��ʼ��������
//�����LΪ�ɹ�����������ͷָ��
//���أ������ɹ�����true��ʧ�ܷ���false
bool creatLinkListToEnd(linkList& L)
{
	int i = 0, num = 0;
	elementType nowData = NULL;
	linkList lastNode = nullptr, newNode = nullptr;


	if (initialList(L))
	{
		lastNode = L;
		cout << "������ڵ������";
		cin >> num;

		for (i = 0; i < num; i++)
		{
			newNode = new node;
			cout << "�������" << i + 1 << "���ڵ�����ݣ�";
			cin >> nowData;
			newNode->data = nowData;
			lastNode->next = newNode;
			lastNode = lastNode->next;
		}

		lastNode->next = nullptr;
		cout << "�����Ѵ����ɹ���" << endl;

		return true;
	}
	else
	{
		cout << "�����Ѵ����������ٺ������´�����" << endl;

		return false;
	}
}


//****************ͷ�巨�����Զ�������****************
//ʵ���.2��ͷ�巨�����Զ�������
//���룺����ͷָ�루δ��ʼ��������
//�����LΪ�ɹ�����������ͷָ��
//���أ������ɹ�����true��ʧ�ܷ���false
bool creatLinkListToBegin(linkList& L)
{
	int i = 0, num = 0;
	elementType newData = NULL;
	linkList newNode = nullptr, nowNod = nullptr;

	if (initialList(L))
	{
		cout << "������ڵ������";
		cin >> num;

		for (i = 0; i < num; i++)
		{
			newNode = new node;
			cout << "�������" << i + 1 << "���ڵ�����ݣ�";
			cin >> newData;
			newNode->data = newData;
			nowNod = L->next;
			L->next = newNode;
			newNode->next = nowNod;
		}

		cout << "�����Ѵ����ɹ���" << endl;

		return true;
	}
	else
	{
		cout << "�����Ѵ����������ٺ������´�����" << endl;

		return false;
	}
}


//****************����������ָ�����鴴������******************
//���룺����ͷָ�롢ѡȡ���������
//���أ������ɹ�����true������ʧ�ܷ���false
bool creatLinkListArray(linkList& L, int arrayNum)
{
	seqList data[11] = {
		{ {},0 },
		{ { 1,3,6,10,15,16,17,18,19,20 },10 },
		{ { 1,2,3,4,5,6,7,8,9,10,18,20,30 },13 },
		{ { 1,2,3,4,5,6,7,8,9 },9 },
		{ { 1,1,2,2,2,3,4,5,5,5,6,6,7,7,8,8,9 },17 },
		{ { 1,2,3,4,5,5,6,7,8,8,9,9,9,9,9 },15 },
		{ { 1,3,6,10,15,16,17,18,19,20 },10 },
		{ { 10,20,30,40,50,60,70,80,90,100 },10 },
		{ { 1,2,3,4,5,6,7,8,9,10,20,30,40,50,60 },15 },
		{ { 2,4,5,7,8,9,12,22},8 },
		{ { 1,2,3,4,5,6,7,8,9,10 },10 }
	};
	int i = data[arrayNum - 1].listLen - 1;
	linkList newNode = nullptr;

	if (initialList(L))
	{
		while (i >= 0)
		{
			newNode = new node;
			newNode->data = data[arrayNum - 1].data[i];
			newNode->next = L->next;
			L->next = newNode;
			i--;
		}

		return true;
	}
	else
	{
		cout << "�����Ѵ����������ٺ������´�����" << endl;

		return false;
	}
}


//*********************��������*********************
//ʵ���.3����������
//���룺����ͷָ��
//�������ɹ����ӡ�ɹ���Ϣ������true�������ӡʧ����Ϣ������false
bool destroyLinkList(linkList& L)
{
	linkList nowNode = nullptr;
	while (L != nullptr)
	{
		nowNode = L;
		L = nowNode->next;
		delete(nowNode);
	}
	if (L == nullptr)
	{
		return true;
	}
	else
	{
		cout << "��������ʧ�ܣ�" << endl;

		return false;
	}
}


//****************��ȡ������****************
//ʵ���.4����ȡ�����ȡ�
//���룺����ͷָ��
//���أ�-1��ʾ����δ�������Ǹ�������ʾ������
elementType linkListLen(linkList& L)
{
	int len = 0;
	linkList nowNode = L;

	if (L == nullptr)
	{
		cout << "δ��������" << endl;

		return  -1;
	}
	else
	{
		while (nowNode->next != nullptr)
		{
			len++;
			nowNode = nowNode->next;
		}

		return len;
	}
}


//****************�������е�i��Ԫ��******************
//ʵ���.5������Ų���Ԫ�ء�
//���룺����ͷָ�롢����������Ԫ�����
//������ڵ�ָ������
linkList getElement(linkList& L)
{
	int nowNum = 0, i = NULL;
	linkList nowNode = L;

	cout << "��������ţ�";
	cin >> i;

	if (L == nullptr)
	{
		cout << "δ��������" << endl;

		return nullptr;
	}
	else if (i <= 0)
	{
		cout << "���Խ�½磡" << endl;

		return nullptr;
	}
	else
	{
		while (nowNum < i)
		{
			nowNode = nowNode->next;
			nowNum++;
		}
		if (nowNode == nullptr)
		{
			cout << "���Խ�Ͻ磡" << endl;

			return nullptr;
		}

		return nowNode;
	}
}


//****************�������е�i��Ԫ��******************
//ʵ���.5������Ų���Ԫ�ء������غ�����
//���룺����ͷָ�롢Ԫ�����
//������ڵ�ָ������
//��ע�����غ���������ʵ��
linkList getElement(linkList& L, int i)
{
	int nowNum = 0;
	linkList nowNode = L;

	if (nowNode == nullptr)
	{
		cout << "δ��������" << endl;

		return nullptr;
	}
	else if (i <= 0)
	{
		cout << "���Խ�½磡" << endl;

		return nullptr;
	}
	else
	{
		while (nowNum < i && nowNode != nullptr)
		{
			nowNode = nowNode->next;
			nowNum++;
		}
		if (nowNode == nullptr)
		{
			cout << "���Խ�Ͻ磡" << endl;

			return nullptr;
		}

		return nowNode;
	}
}


//****************�ڵ�i�����ǰ����ֵΪx�Ľ��******************
//ʵ���.6������Ų���Ԫ�ء�
//���룺��������������Ԫ����š�����ֵ
//���أ�����ɹ�����true������ʧ�ܷ���false
bool addElement(linkList& L)
{
	int i = NULL;
	elementType x = NULL;
	linkList nowNode = L, newNode = nullptr;
	int nowNum = 0;

	cout << "������Ҫ�����λ�ã�" << "\t";
	cin >> i;
	cout << "������Ҫ�����Ԫ�أ�" << "\t";
	cin >> x;

	if (L == nullptr)
	{
		cout << "��ǰ����δ������" << endl;

		return false;
	}
	else if (i <= 0)
	{
		cout << "���Խ�½磡" << endl;

		return false;
	}
	else
	{
		while (nowNum + 1 < i && nowNode->next != nullptr)
		{
			nowNode = nowNode->next;
			nowNum++;
		}
		if (nowNum + 1 == i)
		{
			newNode = new node;
			newNode->data = x;
			newNode->next = nowNode->next;
			nowNode->next = newNode;

			return true;
		}
		else
		{
			cout << "���Խ�Ͻ磡" << endl;

			return false;
		}
	}
}


//****************�ڵ�i�����ǰ����ֵΪx�Ľ��******************
//ʵ���.6������Ų���Ԫ�ء�(���غ���)
//���룺����Ԫ����š�����ֵ
//���أ�����ɹ�����true������ʧ�ܷ���false
//��ע�����غ���������ʵ��
bool addElement(linkList& L, int i, elementType x)
{
	linkList nowNode = L, newNode = nullptr;
	int nowNum = 0;

	if (L == nullptr)
	{
		cout << "��ǰ����δ������" << endl;

		return false;
	}
	else if (i <= 0)
	{
		cout << "���Խ�½磡" << endl;

		return false;
	}
	else
	{
		while (nowNum + 1 < i && nowNode->next != nullptr)
		{
			nowNode = nowNode->next;
			nowNum++;
		}
		if (nowNum + 1 == i)
		{
			newNode = new node;
			newNode->data = x;
			newNode->next = nowNode->next;
			nowNode->next = newNode;

			return true;
		}
		else
		{
			cout << "���Խ�Ͻ磡" << endl;

			return false;
		}
	}
}


//****************����Ԫ��ֵΪx�Ľ��******************
//ʵ���.7����ֵ����Ԫ�ء�
//���룺�����������������ֵ
//���أ�����ɹ����ؽ��ָ�룬����ʧ�ܷ���nullptr
linkList localElement(linkList& L)
{
	elementType x = NULL;
	linkList nowNode = L;


	cout << "������Ҫ���ҵ�Ԫ�أ�" << "\t";
	cin >> x;

	if (L == nullptr)
	{
		cout << "��ǰ����δ������" << endl;

		return nullptr;
	}
	else
	{
		while (nowNode->next != nullptr && nowNode->next->data != x)
		{
			nowNode = nowNode->next;
		}

		return nowNode->next;
	}
}


//****************����Ԫ��ֵΪx�Ľ��******************
//ʵ���.7����ֵ����Ԫ�ء�(���غ���)
//���룺�����������������ֵ
//���أ�����ɹ����ؽ��ָ�룬����ʧ�ܷ���nullptr
//��ע�����غ���������ʵ��
linkList localElement(linkList& L, elementType x)
{
	linkList nowNode = L;

	if (L == nullptr)
	{
		cout << "��ǰ����δ������" << endl;

		return nullptr;
	}
	else
	{
		while (nowNode->next != nullptr && nowNode->next->data != x)
		{
			nowNode = nowNode->next;
		}

		return nowNode->next;
	}
}


//****************ɾ���������е�i��Ԫ�ؽ��******************
//ʵ���.8�������ɾ��Ԫ�ء�
//���룺��������������ɾ�����
//���أ�ɾ���ɹ�����true��ɾ��ʧ�ܷ���false
bool deleteElement(linkList& L)
{
	int i = NULL, nowNum = 0;
	linkList nowNode = L, deleteNode = nullptr;


	cout << "������Ҫɾ������ţ�" << "\t";
	cin >> i;

	if (L == nullptr)
	{
		cout << "��ǰ����δ������" << endl;

		return false;
	}
	else if (i <= 0)
	{
		cout << "���Խ�½磡" << endl;

		return false;
	}
	else
	{
		while (nowNode->next != nullptr && nowNum + 1 < i)
		{
			nowNum++;
			nowNode = nowNode->next;
		}
		if (nowNode->next != nullptr && nowNum + 1 == i)
		{
			deleteNode = nowNode->next;
			nowNode->next = deleteNode->next;
			delete(deleteNode);

			return true;
		}
		else
		{
			cout << "���Խ�Ͻ磡" << endl;

			return false;
		}
	}
}


//****************ɾ���������е�i��Ԫ�ؽ��******************
//ʵ���.8�������ɾ��Ԫ�ء�(���غ���)
//���룺����ɾ�����
//���أ�ɾ���ɹ�����true��ɾ��ʧ�ܷ���false
//��ע�����غ���������ʵ��
bool deleteElement(linkList& L, int i)
{
	int nowNum = 0;
	linkList nowNode = L, deleteNode = nullptr;


	if (L == nullptr)
	{
		cout << "��ǰ����δ������" << endl;

		return false;
	}
	else if (i <= 0)
	{
		cout << "���Խ�½磡" << endl;

		return false;
	}
	else
	{
		while (nowNode->next != nullptr && nowNum + 1 < i)
		{
			nowNum++;
			nowNode = nowNode->next;
		}
		if (nowNode->next != nullptr && nowNum + 1 == i)
		{
			deleteNode = nowNode->next;
			nowNode->next = deleteNode->next;
			delete(deleteNode);

			return true;
		}
		else
		{
			cout << "���Խ�Ͻ磡" << endl;

			return false;
		}
	}
}


//****************��һ����������ĵ�����L�в���һ��ֵΪx��Ԫ��******************
//ʵ���.9����ֵ����Ԫ�ء�
//���룺�����������������ֵ
//���أ�����ɹ�����true������ʧ�ܷ���false
bool insertElement(linkList& L)
{
	elementType x = NULL;
	linkList nowNode = L, newNode = nullptr;

	cout << "������Ҫ�����Ԫ�أ�" << "\t";
	cin >> x;

	if (L == nullptr)
	{
		cout << "��ǰ����δ������" << endl;

		return false;
	}
	else
	{
		while (nowNode->next != nullptr && nowNode->next->data < x)
		{
			nowNode = nowNode->next;
		}
		newNode = new node;
		newNode->data = x;
		newNode->next = nowNode->next;
		nowNode->next = newNode;

		return true;
	}
}


//****************��һ����������ĵ�����L�в���һ��ֵΪx��Ԫ��******************
//ʵ���.9����ֵ����Ԫ�ء�(���غ���)
//���룺��������ֵ
//���أ�ɾ���ɹ�����true��ɾ��ʧ�ܷ���false
//��ע�����غ���������ʵ��
bool insertElement(linkList& L, elementType x)
{
	linkList nowNode = L, newNode = nullptr;


	if (L == nullptr)
	{
		cout << "��ǰ����δ������" << endl;

		return false;
	}
	else
	{
		while (nowNode->next != nullptr && nowNode->next->data < x)
		{
			nowNode = nowNode->next;
		}
		newNode = new node;
		newNode->data = x;
		newNode->next = nowNode->next;
		nowNode->next = newNode;

		return true;
	}
}


//****************����������е��������ż������ֽ⿪******************
//ʵ���.10����Ԫ�ذ���ż�Է��ࡣ
//���룺�������ڴ�Ž������ż����ָ��
//���أ�ɾ���ɹ�����true��ɾ��ʧ�ܷ���false
//�������żԪ�طֱ��������������
bool separateElement(linkList& L, linkList& odd, linkList& even)
{
	linkList nowNode = L, newNode = nullptr;

	if (L == nullptr)
	{
		cout << "��ǰ����δ������" << endl;

		return false;
	}
	else if (initialList(odd) && initialList(even))		//��������ָ���ʼ���ɹ��ſ��Խ��з���
	{
		while (nowNode->next != nullptr)
		{
			newNode = new node;
			newNode->data = nowNode->next->data;
			if (newNode->data % 2)						//����ͷ�巨����ż�����в�������
			{
				newNode->next = odd->next;
				odd->next = newNode;
			}
			else
			{
				newNode->next = even->next;
				even->next = newNode;
			}
			nowNode = nowNode->next;
		}

		return true;
	}
	else
	{
		cout << "�����Ž��������ָ���ѱ�ռ�ã�����ʧ�ܣ�" << endl;

		return false;
	}
}


//****************������������������L1��L2�еĹ���Ԫ�أ������µĵ�����L3��******************
//ʵ���.11����ȡ�������еĹ���Ԫ�ء�
//���룺�������ڴ�Ž���Ĺ���Ԫ������ָ��
//���أ�ɾ���ɹ�����true��ɾ��ʧ�ܷ���false
//���������Ԫ�ش���ڴ���������
bool publicElement(linkList& L1, linkList& L2, linkList& publicLink)
{
	linkList node_1 = L1, node_2 = L2, newNode = nullptr;

	if (L1 == nullptr || L2 == nullptr)
	{
		cout << "��ǰ��������δ������" << endl;

		return false;
	}
	else if (initialList(publicLink))
	{
		while (node_1->next != nullptr && node_2->next != nullptr)
		{
			if (node_1->next->data < node_2->next->data)
			{
				node_1 = node_1->next;
			}
			else if (node_1->next->data == node_2->next->data)
			{
				newNode = new node;
				newNode->data = node_1->next->data;

				newNode->next = publicLink->next;
				publicLink->next = newNode;

				node_1 = node_1->next;
				node_2 = node_2->next;
			}
			else
			{
				node_2 = node_2->next;
			}
		}

		return true;
	}
	else
	{
		cout << "�����Ž��������ָ���ѱ�ռ�ã�����Ԫ�ػ�ȡʧ�ܣ�" << endl;

		return false;
	}
}


//****************ɾ���������������е��ظ�Ԫ��******************
//ʵ���.12��ɾ�������е��ظ�Ԫ�ء�
//���룺����
//���أ�ɾ���ɹ�����true��ɾ��ʧ�ܷ���false
bool deleteRepetition(linkList& L)
{
	linkList p1 = nullptr, p2 = nullptr;

	if (L == nullptr)
	{
		cout << "��ǰ����δ������" << endl;

		return false;
	}
	else
	{
		p1 = L->next;
		p2 = p1->next ? p1->next : nullptr;				//������Ϊ��ʱ��p1Ϊnullptr
		while (p2 != nullptr)
		{
			if (p1->data < p2->data)
			{
				p1 = p1->next;
				p2 = p2->next;
			}
			else
			{
				p1->next = p2->next;
				delete(p2);
				p2 = p1->next;
			}
		}

		return true;
	}
}


//****************����ԭ�����2����кϲ�����ʹ�úϲ����Ϊһ������******************
//ʵ���.13����������ϲ���һ�����ϡ�
//���룺��������
//���أ��ϲ��ɹ�����true���ϲ�ʧ�ܷ���false
bool unionSetLinkList(linkList& L1, linkList& L2)
{
	linkList p1 = L1, p2 = L2, pNow_1 = nullptr, pNow_2 = nullptr;

	if (L1 == nullptr || L2 == nullptr)
	{
		cout << "��������Ϊ������" << endl;

		return false;
	}
	else
	{
		while (p1->next != nullptr && p2->next != nullptr)
		{
			if (p1->next->data < p2->next->data)
			{
				p1 = p1->next;
			}
			else if (p1->next->data == p2->next->data)
			{
				p1 = p1->next;
				p2 = p2->next;
			}
			else
			{
				//pMove = p1->next;						//ͨ����ε��������Խ�ʡһ��ָ��
				//p1->next = p2->next;
				//p2->next = pMove;
				//pMove = p1->next->next;
				//p1->next->next = p2->next;
				//p2->next = pMove;

				pNow_1 = p1->next;						//��ʹ��һ��ָ����Լ������θ�ֵ
				p1->next = p2->next;
				pNow_2 = p2->next->next;
				p2->next->next = pNow_1;
				p2->next = pNow_2;

				p1 = p1->next;
			}
		}
		if (p2->next != nullptr)
		{
			p1->next = p2->next;
			p2->next = nullptr;
		}
		destroyLinkList(L2);

		return true;
	}
}


#endif // !LINKEDLIST_H


//**********************//
//单链表实验头文件		//
//包含：1，依赖头文件	//
//		2，结构定义		//
//		3，函数声明		//
//**********************//


#ifndef LINKEDLIST_H

#define LINKEDLIST_H

#include<iostream>

using namespace std;

typedef int elementType;

//*********************结点结构*********************************//
typedef struct sLNode {											//
	elementType data;											//
	struct sLNode* next;										//
}node, * linkList;					//定义结点类型、结点指针类型//
//**************************************************************//

//*********************顺序表结构*******************************//
//用于指定数组创建链表，便于测试								//
#define ARRYLEN 20					//指定数组最大长度			//
																//
typedef struct sList {											//
	elementType data[ARRYLEN];									//
	int listLen;												//
}seqList, * seqP;					//定义结点类型、结点指针类型//
//**************************************************************//




//**********************函数声明********************************************************************************//
bool initialList(linkList& L);											//初始化链表							//
bool creatLinkListToEnd(linkList& L);									//尾插法创建单链表						//
bool creatLinkListToBegin(linkList& L);									//头插法创建单链表						//
bool creatLinkListArray(linkList& L, int arrayNum);						//指定数组头插法创建链表				//
bool showLinkList(linkList& L);											//打印链表								//
bool destroyLinkList(linkList& L);										//销毁链表								//
elementType linkListLen(linkList& L);									//求链表长度							//
linkList getElement(linkList& L);										//按序号查找元素						//
linkList getElement(linkList& L, int i);								//按序号查找元素（重载，便于实验）		//
bool addElement(linkList& L, int i, elementType x);						//在第i个结点前插入值为x的结点(重载)	//
bool addElement(linkList& L);											//在第i个结点前插入值为x的结点			//
linkList localElement(linkList& L);										//查找元素值为x的结点					//
linkList localElement(linkList& L, elementType x);						//查找元素值为x的结点(重载)				//
bool deleteElement(linkList& L);										//删除第i个元素结点						//
bool deleteElement(linkList& L, int i);									//删除第i个元素结点(重载)				//
bool insertElement(linkList& L);										//按值插入元素							//
bool insertElement(linkList& L, elementType x);							//按值插入元素(重载)					//
bool separateElement(linkList& L, linkList& odd, linkList& even);		//删除第i个元素结点						//
bool publicElement(linkList& L1, linkList& L2, linkList& publicLink);	//获取两链表中的公共元素				//
bool deleteRepetition(linkList& L);										//删除链表中的重复元素					//
bool unionSetLinkList(linkList& L1, linkList& L2);						//将两链表合并成一个集合				//
//**************************************************************************************************************//


//**********************函数定义****************************************


//************辅助函数：初始化链表链表******************
//输入：要初始化的结点类型指针
//返回：初始化成功返回true，初始化失败返回false
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
		cout << "当前连表已创建，初始化失败！" << endl;

		return false;
	}
}


//****************辅助函数：打印链表******************
//输入：链表头指针
//打印：链表
//返回：打印成功返回true，打印失败返回false
bool showLinkList(linkList& L)
{
	linkList nowNode = L;
	if (L == nullptr)
	{
		cout << "未创建链表！" << endl;

		return false;
	}
	else
	{
		cout << "当前链表如下：" << endl;
		while (nowNode->next != nullptr)
		{
			cout << nowNode->next->data << "\t\t";
			nowNode = nowNode->next;
		}
		cout << endl;

		return true;
	}
}


//****************尾插法创建自定义链表****************
//实验二.1，尾插法创建自定义链表。
//输入：链表头指针（未初始化的链表）
//输出：L为成功创建的链表头指针
//返回：创建成功返回true，失败返回false
bool creatLinkListToEnd(linkList& L)
{
	int i = 0, num = 0;
	elementType nowData = NULL;
	linkList lastNode = nullptr, newNode = nullptr;


	if (initialList(L))
	{
		lastNode = L;
		cout << "请输入节点个数：";
		cin >> num;

		for (i = 0; i < num; i++)
		{
			newNode = new node;
			cout << "请输入第" << i + 1 << "个节点的数据：";
			cin >> nowData;
			newNode->data = nowData;
			lastNode->next = newNode;
			lastNode = lastNode->next;
		}

		lastNode->next = nullptr;
		cout << "链表已创建成功！" << endl;

		return true;
	}
	else
	{
		cout << "链表已创建，请销毁后再重新创建！" << endl;

		return false;
	}
}


//****************头插法创建自定义链表****************
//实验二.2，头插法创建自定义链表。
//输入：链表头指针（未初始化的链表）
//输出：L为成功创建的链表头指针
//返回：创建成功返回true，失败返回false
bool creatLinkListToBegin(linkList& L)
{
	int i = 0, num = 0;
	elementType newData = NULL;
	linkList newNode = nullptr, nowNod = nullptr;

	if (initialList(L))
	{
		cout << "请输入节点个数：";
		cin >> num;

		for (i = 0; i < num; i++)
		{
			newNode = new node;
			cout << "请输入第" << i + 1 << "个节点的数据：";
			cin >> newData;
			newNode->data = newData;
			nowNod = L->next;
			L->next = newNode;
			newNode->next = nowNod;
		}

		cout << "链表已创建成功！" << endl;

		return true;
	}
	else
	{
		cout << "链表已创建，请销毁后再重新创建！" << endl;

		return false;
	}
}


//****************辅助函数：指定数组创建链表******************
//输入：链表头指针、选取的数组序号
//返回：创建成功返回true，创建失败返回false
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
		cout << "链表已创建，请销毁后再重新创建！" << endl;

		return false;
	}
}


//*********************销毁链表*********************
//实验二.3，销毁链表。
//输入：链表头指针
//返沪：成功则打印成功信息并返回true，否则打印失败信息并返回false
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
		cout << "链表销毁失败！" << endl;

		return false;
	}
}


//****************获取链表长度****************
//实验二.4，获取链表长度。
//输入：链表头指针
//返回：-1表示链表未创建，非负整数表示链表长度
elementType linkListLen(linkList& L)
{
	int len = 0;
	linkList nowNode = L;

	if (L == nullptr)
	{
		cout << "未创建链表！" << endl;

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


//****************求单链表中第i个元素******************
//实验二.5，按序号查找元素。
//输入：链表头指针、函数内输入元素序号
//输出：节点指针类型
linkList getElement(linkList& L)
{
	int nowNum = 0, i = NULL;
	linkList nowNode = L;

	cout << "请输入序号：";
	cin >> i;

	if (L == nullptr)
	{
		cout << "未创建链表！" << endl;

		return nullptr;
	}
	else if (i <= 0)
	{
		cout << "序号越下界！" << endl;

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
			cout << "序号越上界！" << endl;

			return nullptr;
		}

		return nowNode;
	}
}


//****************求单链表中第i个元素******************
//实验二.5，按序号查找元素。（重载函数）
//输入：链表头指针、元素序号
//输出：节点指针类型
//备注：重载函数，便于实验
linkList getElement(linkList& L, int i)
{
	int nowNum = 0;
	linkList nowNode = L;

	if (nowNode == nullptr)
	{
		cout << "未创建链表！" << endl;

		return nullptr;
	}
	else if (i <= 0)
	{
		cout << "序号越下界！" << endl;

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
			cout << "序号越上界！" << endl;

			return nullptr;
		}

		return nowNode;
	}
}


//****************在第i个结点前插入值为x的结点******************
//实验二.6，按序号插入元素。
//输入：链表；函数内输入元素序号、插入值
//返回：插入成功返回true，插入失败返回false
bool addElement(linkList& L)
{
	int i = NULL;
	elementType x = NULL;
	linkList nowNode = L, newNode = nullptr;
	int nowNum = 0;

	cout << "请输入要插入的位置：" << "\t";
	cin >> i;
	cout << "请输入要插入的元素：" << "\t";
	cin >> x;

	if (L == nullptr)
	{
		cout << "当前链表未创建！" << endl;

		return false;
	}
	else if (i <= 0)
	{
		cout << "序号越下界！" << endl;

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
			cout << "序号越上界！" << endl;

			return false;
		}
	}
}


//****************在第i个结点前插入值为x的结点******************
//实验二.6，按序号插入元素。(重载函数)
//输入：链表、元素序号、插入值
//返回：插入成功返回true，插入失败返回false
//备注：重载函数，便于实验
bool addElement(linkList& L, int i, elementType x)
{
	linkList nowNode = L, newNode = nullptr;
	int nowNum = 0;

	if (L == nullptr)
	{
		cout << "当前链表未创建！" << endl;

		return false;
	}
	else if (i <= 0)
	{
		cout << "序号越下界！" << endl;

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
			cout << "序号越上界！" << endl;

			return false;
		}
	}
}


//****************查找元素值为x的结点******************
//实验二.7，按值查找元素。
//输入：链表；函数内输入查找值
//返回：插入成功返回结点指针，插入失败返回nullptr
linkList localElement(linkList& L)
{
	elementType x = NULL;
	linkList nowNode = L;


	cout << "请输入要查找的元素：" << "\t";
	cin >> x;

	if (L == nullptr)
	{
		cout << "当前链表未创建！" << endl;

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


//****************查找元素值为x的结点******************
//实验二.7，按值查找元素。(重载函数)
//输入：链表；函数内输入查找值
//返回：插入成功返回结点指针，插入失败返回nullptr
//备注：重载函数，便于实验
linkList localElement(linkList& L, elementType x)
{
	linkList nowNode = L;

	if (L == nullptr)
	{
		cout << "当前链表未创建！" << endl;

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


//****************删除单链表中第i个元素结点******************
//实验二.8，按序号删除元素。
//输入：链表；函数内输入删除序号
//返回：删除成功返回true，删除失败返回false
bool deleteElement(linkList& L)
{
	int i = NULL, nowNum = 0;
	linkList nowNode = L, deleteNode = nullptr;


	cout << "请输入要删除的序号：" << "\t";
	cin >> i;

	if (L == nullptr)
	{
		cout << "当前链表未创建！" << endl;

		return false;
	}
	else if (i <= 0)
	{
		cout << "序号越下界！" << endl;

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
			cout << "序号越上界！" << endl;

			return false;
		}
	}
}


//****************删除单链表中第i个元素结点******************
//实验二.8，按序号删除元素。(重载函数)
//输入：链表、删除序号
//返回：删除成功返回true，删除失败返回false
//备注：重载函数，便于实验
bool deleteElement(linkList& L, int i)
{
	int nowNum = 0;
	linkList nowNode = L, deleteNode = nullptr;


	if (L == nullptr)
	{
		cout << "当前链表未创建！" << endl;

		return false;
	}
	else if (i <= 0)
	{
		cout << "序号越下界！" << endl;

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
			cout << "序号越上界！" << endl;

			return false;
		}
	}
}


//****************在一个递增有序的单链表L中插入一个值为x的元素******************
//实验二.9，按值插入元素。
//输入：链表；函数内输入插入值
//返回：插入成功返回true，插入失败返回false
bool insertElement(linkList& L)
{
	elementType x = NULL;
	linkList nowNode = L, newNode = nullptr;

	cout << "请输入要插入的元素：" << "\t";
	cin >> x;

	if (L == nullptr)
	{
		cout << "当前链表未创建！" << endl;

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


//****************在一个递增有序的单链表L中插入一个值为x的元素******************
//实验二.9，按值插入元素。(重载函数)
//输入：链表、插入值
//返回：删除成功返回true，删除失败返回false
//备注：重载函数，便于实验
bool insertElement(linkList& L, elementType x)
{
	linkList nowNode = L, newNode = nullptr;


	if (L == nullptr)
	{
		cout << "当前链表未创建！" << endl;

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


//****************将单链表Ｌ中的奇数项和偶数项结点分解开******************
//实验二.10，将元素按奇偶性分类。
//输入：链表、用于存放结果的奇偶链表指针
//返回：删除成功返回true，删除失败返回false
//输出：奇偶元素分别放在两个链表中
bool separateElement(linkList& L, linkList& odd, linkList& even)
{
	linkList nowNode = L, newNode = nullptr;

	if (L == nullptr)
	{
		cout << "当前链表未创建！" << endl;

		return false;
	}
	else if (initialList(odd) && initialList(even))		//两个链表指针初始化成功才可以进行分类
	{
		while (nowNode->next != nullptr)
		{
			newNode = new node;
			newNode->data = nowNode->next->data;
			if (newNode->data % 2)						//采用头插法向奇偶链表中插入数据
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
		cout << "传入存放结果的链表指针已被占用，分类失败！" << endl;

		return false;
	}
}


//****************求两个递增有序单链表L1和L2中的公共元素，放入新的单链表L3中******************
//实验二.11，获取两链表中的公共元素。
//输入：链表、用于存放结果的公共元素链表指针
//返回：删除成功返回true，删除失败返回false
//输出：公共元素存放在传入链表中
bool publicElement(linkList& L1, linkList& L2, linkList& publicLink)
{
	linkList node_1 = L1, node_2 = L2, newNode = nullptr;

	if (L1 == nullptr || L2 == nullptr)
	{
		cout << "当前存在链表未创建！" << endl;

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
		cout << "传入存放结果的链表指针已被占用，公共元素获取失败！" << endl;

		return false;
	}
}


//****************删除递增有序单链表中的重复元素******************
//实验二.12，删除链表中的重复元素。
//输入：链表
//返回：删除成功返回true，删除失败返回false
bool deleteRepetition(linkList& L)
{
	linkList p1 = nullptr, p2 = nullptr;

	if (L == nullptr)
	{
		cout << "当前链表未创建！" << endl;

		return false;
	}
	else
	{
		p1 = L->next;
		p2 = p1->next ? p1->next : nullptr;				//当链表为空时，p1为nullptr
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


//****************利用原表结点对2表进行合并，并使得合并后成为一个集合******************
//实验二.13，将两链表合并成一个集合。
//输入：两个链表
//返回：合并成功返回true，合并失败返回false
bool unionSetLinkList(linkList& L1, linkList& L2)
{
	linkList p1 = L1, p2 = L2, pNow_1 = nullptr, pNow_2 = nullptr;

	if (L1 == nullptr || L2 == nullptr)
	{
		cout << "存在链表为创建！" << endl;

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
				//pMove = p1->next;						//通过多次调换，可以节省一个指针
				//p1->next = p2->next;
				//p2->next = pMove;
				//pMove = p1->next->next;
				//p1->next->next = p2->next;
				//p2->next = pMove;

				pNow_1 = p1->next;						//多使用一个指针可以减少依次赋值
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


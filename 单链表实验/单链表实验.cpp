//**********************//
//单链表实验主程序		//
//**********************//

#include"linkedList.h"

int main(void)
{
	int order = NULL;
	linkList L_1 = nullptr, L_5 = nullptr, L_10[3] = { nullptr };
	linkList nowNode = nullptr;

	while (1)
	{
		cout << "实验二：单链表实验" << endl;
		cout << "*****************************************************************" << endl;
		cout << "*1，尾插法创建自定义链表。\t\t\t\t\t*" << endl;
		cout << "*2，头插法创建自定义链表。\t\t\t\t\t*" << endl;
		cout << "*3，销毁链表。\t\t\t\t\t\t\t*" << endl;
		cout << "*4，获取链表长度。\t\t\t\t\t\t*" << endl;
		cout << "*5，按序号查找元素。\t\t\t\t\t\t*" << endl;
		cout << "*6，按序号插入元素。\t\t\t\t\t\t*" << endl;
		cout << "*7，按值查找元素。\t\t\t\t\t\t*" << endl;
		cout << "*8，按序号删除元素。\t\t\t\t\t\t*" << endl;
		cout << "*9，按值插入元素。\t\t\t\t\t\t*" << endl;
		cout << "*10，将元素按奇偶性分类。\t\t\t\t\t*" << endl;
		cout << "*11，获取两链表中的公共元素。\t\t\t\t\t*" << endl;
		cout << "*12，删除链表中的重复元素。\t\t\t\t\t*" << endl;
		cout << "*13，将两链表合并成一个集合。\t\t\t\t\t*" << endl;
		cout << "*\t\t\t\t\t\t\t\t*" << endl;
		cout << "*0，退出程序。\t\t\t\t\t\t\t*" << endl;
		cout << "*****************************************************************" << endl;
		cout << "请输入菜单编号：\t";
		cin >> order;

		switch (order)
		{
		case 1:
			system("cls");
			if (creatLinkListToEnd(L_1))showLinkList(L_1);
			break;
		case 2:
			system("cls");
			if (creatLinkListToBegin(L_1))showLinkList(L_1);
			break;
		case 3:
			system("cls");
			if (destroyLinkList(L_1))cout << "当前链表销毁成功！" << endl;
			else cout << "链表销毁失败！" << endl;
			if (destroyLinkList(L_5))cout << "当前链表销毁成功！" << endl;
			else cout << "链表销毁失败！" << endl;
			if (destroyLinkList(L_10[0]))cout << "当前链表销毁成功！" << endl;
			else cout << "链表销毁失败！" << endl;
			if (destroyLinkList(L_10[1]))cout << "当前链表销毁成功！" << endl;
			else cout << "链表销毁失败！" << endl;
			if (destroyLinkList(L_10[2]))cout << "当前链表销毁成功！" << endl;
			else cout << "链表销毁失败！" << endl;
			if (destroyLinkList(nowNode))cout << "当前链表销毁成功！" << endl;
			else cout << "链表销毁失败！" << endl;
			break;
		case 4:
			system("cls");
			cout << "（为便于测试，仅限查看功能1、2创建的链表）" << endl;
			if (linkListLen(L_1) >= 0) cout << "当前链表长度为：" << linkListLen(L_1) << endl;
			else cout << "当前链表未创建！" << endl;
			break;
		case 5:
			system("cls");
			//第一组测试**********************************************************
			cout << "第一组实验数据（n=13）：" << endl;
			creatLinkListArray(L_5, 3);
			showLinkList(L_5);
			cout << endl;
			cout << "第5个元素为：" << "\t\t";				//一组一次
			nowNode = getElement(L_5, 5);
			if (nowNode) cout << nowNode->data << endl;
			else cout << "查找失败！" << endl;
			cout << "第n(n=13)个元素为：" << "\t";			//一组二次
			nowNode = getElement(L_5, 13);
			if (nowNode) cout << nowNode->data << endl;
			else cout << "查找失败！" << endl;
			cout << "第0个元素为：" << "\t\t";				//一组三次
			nowNode = getElement(L_5, 0);
			if (nowNode) cout << nowNode->data << endl;
			else cout << "查找失败！" << endl;
			cout << "第n+1(n=13)个元素为：" << "\t";		//一组四次
			nowNode = getElement(L_5, 14);
			if (nowNode) cout << nowNode->data << endl;
			else cout << "查找失败！" << endl;
			cout << "第n+2(n=13)个元素为：" << "\t";		//一组五次
			nowNode = getElement(L_5, 15);
			if (nowNode) cout << nowNode->data << endl;
			else cout << "查找失败！" << endl;
			//第一组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_5))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			//第二组测试**********************************************************
			cout << "第二组实验数据（n=0）：" << endl;
			creatLinkListArray(L_5, 1);
			showLinkList(L_5);
			cout << endl;
			cout << "第0个元素为：" << "\t\t";				//二组一次
			nowNode = getElement(L_5, 0);
			if (nowNode) cout << nowNode->data << endl;
			else cout << "查找失败！" << endl;
			cout << "第2个元素为：" << "\t\t";				//二组二次
			nowNode = getElement(L_5, 2);
			if (nowNode) cout << nowNode->data << endl;
			else cout << "查找失败！" << endl;
			//第二组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_5))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 6:
			system("cls");
			//第一组测试**********************************************************
			cout << "第一组实验数据（n=13，x=100）：" << endl;
			creatLinkListArray(L_5, 3);
			showLinkList(L_5);
			cout << endl;
			cout << "当i=5时：" << "\t\t";						//一组一次
			//destroyLinkList(L_5);
			//creatLinkListArray(L_5, 3);
			if (addElement(L_5,5,100))showLinkList(L_5);
			else cout << "插入失败！" << endl;
			cout << endl;
			cout << "当i=n(n=13)时：" << "\t\t";				//一组二次
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (addElement(L_5, 13, 100))showLinkList(L_5);
			else cout << "插入失败！" << endl;
			cout << endl;
			cout << "当i=n+1(n=13)时：" << "\t";				//一组三次
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (addElement(L_5, 14, 100))showLinkList(L_5);
			else cout << "插入失败！" << endl;
			cout << endl;
			cout << "当i=0时：" << "\t\t";						//一组四次
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (addElement(L_5, 0, 100))showLinkList(L_5);
			else cout << "插入失败！" << endl;
			cout << endl;
			cout << "当i=1时：" << "\t\t";						//一组五次
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (addElement(L_5, 1, 100))showLinkList(L_5);
			else cout << "插入失败！" << endl;
			cout << endl;
			cout << "当i=n+2(n=13)时：" << "\t";				//一组六次
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (addElement(L_5, 15, 100))showLinkList(L_5);
			else cout << "插入失败！" << endl;
			//第一组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_5))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			//第二组测试**********************************************************
			cout << "第二组实验数据（n=0，x=100）：" << endl;
			creatLinkListArray(L_5, 1);
			showLinkList(L_5);
			cout << endl;
			cout << "当i=5时：" << "\t\t";						//二组一次
			//destroyLinkList(L_5);
			//creatLinkListArray(L_5, 1);
			if (addElement(L_5, 5, 100))showLinkList(L_5);
			else cout << "插入失败！" << endl;
			//第二组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_5))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 7:
			system("cls");
			//测试****************************************************************
			cout << "实验数据：" << endl;
			creatLinkListArray(L_5, 2);
			showLinkList(L_5);
			cout << endl;
			cout << "当x=1时：" << "\t\t";							//一次测试
			nowNode = localElement(L_5, 1);
			if (nowNode) cout << "查找成功，通过返回指针查看元素为：" << nowNode->data << endl;
			else cout << "查找失败！" << endl;
			cout << endl;
			cout << "当x=17时：" << "\t\t";							//二次测试
			nowNode = localElement(L_5, 17);
			if (nowNode) cout << "查找成功，通过返回指针查看元素为：" << nowNode->data << endl;
			else cout << "查找失败！" << endl;
			cout << endl;
			cout << "当x=20时：" << "\t\t";							//三次测试
			nowNode = localElement(L_5, 20);
			if (nowNode) cout << "查找成功，通过返回指针查看元素为：" << nowNode->data << endl;
			else cout << "查找失败！" << endl;
			cout << endl;
			cout << "当x=88时：" << "\t\t";							//四次测试
			nowNode = localElement(L_5, 88);
			if (nowNode) cout << "查找成功，通过返回指针查看元素为：" << nowNode->data << endl;
			else cout << "查找失败！" << endl;
			//组测试结束，销毁链表，便于下次测试**********************************
			if (destroyLinkList(L_5))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 8:
			system("cls");
			//第一组测试**********************************************************
			cout << "第一组实验数据（n=13）：" << endl;
			creatLinkListArray(L_5, 3);
			showLinkList(L_5);
			cout << endl;
			cout << "当i=5时：" << "\t\t";						//一组一次
			//destroyLinkList(L_5);
			//creatLinkListArray(L_5, 3);
			if (deleteElement(L_5, 5))showLinkList(L_5);
			else cout << "删除失败！" << endl;
			cout << endl;
			cout << "当i=n(n=13)时：" << "\t\t";				//一组二次
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (deleteElement(L_5, 13))showLinkList(L_5);
			else cout << "删除失败！" << endl;
			cout << endl;
			cout << "当i=1时：" << "\t\t";						//一组三次
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (deleteElement(L_5, 1))showLinkList(L_5);
			else cout << "删除失败！" << endl;
			cout << "当i=n+1(n=13)时：" << "\t";				//一组四次
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (deleteElement(L_5, 14))showLinkList(L_5);
			else cout << "删除失败！" << endl;
			cout << endl;
			cout << "当i=0时：" << "\t\t";						//一组五次
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (deleteElement(L_5, 0))showLinkList(L_5);
			else cout << "删除失败！" << endl;
			cout << endl;
			//第一组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_5))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			//第二组测试**********************************************************
			cout << "第一组实验数据（n=0）：" << endl;
			creatLinkListArray(L_5, 1);
			showLinkList(L_5);
			cout << endl;
			cout << "当i=5时：" << "\t\t";						//二组一次
			//destroyLinkList(L_5);
			//creatLinkListArray(L_5, 1);
			if (deleteElement(L_5, 5))showLinkList(L_5);
			else cout << "删除失败！" << endl;
			cout << endl;
			//第二组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_5))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 9:
			system("cls");
			//测试****************************************************************
			cout << "实验数据：" << endl;
			creatLinkListArray(L_5, 8);
			showLinkList(L_5);
			cout << endl;
			cout << "当x=25时：" << "\t\t";							//一次测试
			//destroyLinkList(L_5);
			//creatLinkListArray(L_5, 8);
			if (insertElement(L_5, 25))showLinkList(L_5);
			else cout << "插入失败！" << endl;
			cout << endl;
			cout << "当x=85时：" << "\t\t";							//二次测试
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 8);
			if (insertElement(L_5, 85))showLinkList(L_5);
			else cout << "插入失败！" << endl;
			cout << endl;
			cout << "当x=110时：" << "\t\t";						//三次测试
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 8);
			if (insertElement(L_5, 110))showLinkList(L_5);
			else cout << "插入失败！" << endl;
			cout << endl;
			cout << "当x=8时：" << "\t\t";							//四次测试
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 8);
			if (insertElement(L_5, 8))showLinkList(L_5);
			else cout << "插入失败！" << endl;
			cout << endl;
			//测试结束，销毁链表，便于下次测试************************************
			if (destroyLinkList(L_5))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 10:
			system("cls");
			//第一组测试**********************************************************
			cout << "第一组实验数据：" << endl;
			creatLinkListArray(L_10[0], 9);
			showLinkList(L_10[0]);
			cout << endl;
			if (separateElement(L_10[0], L_10[1], L_10[2]))			//第一组测试
			{
				cout << "分类成功！" << endl;
				cout << "原链表：";
				showLinkList(L_10[0]);
				cout << "奇链表：";
				showLinkList(L_10[1]);
				cout << "偶链表：";
				showLinkList(L_10[2]);
			}
			else cout << "分类失败！" << endl;
			cout << endl;
			//第一组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]) && destroyLinkList(L_10[2]))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			//第一组测试**********************************************************
			cout << "第二组实验数据：" << endl;
			creatLinkListArray(L_10[0], 8);
			showLinkList(L_10[0]);
			cout << endl;
			if (separateElement(L_10[0], L_10[1], L_10[2]))			//第二组测试
			{
				cout << "分类成功！" << endl;
				cout << "原链表：";
				showLinkList(L_10[0]);
				cout << "奇链表：";
				showLinkList(L_10[1]);
				cout << "偶链表：";
				showLinkList(L_10[2]);
			}
			else cout << "分类失败！" << endl;
			cout << endl;
			//第二组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]) && destroyLinkList(L_10[2]))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 11:
			system("cls");
			//第一组测试**********************************************************
			cout << "第一组实验数据：" << endl;
			creatLinkListArray(L_10[0], 2);						//第一组测试
			creatLinkListArray(L_10[1], 3);
			if (publicElement(L_10[0], L_10[1], L_10[2]))
			{
				cout << "交集获取成功！" << endl;
				cout << "链表一为：" << endl;
				showLinkList(L_10[0]);
				cout << "链表二为：" << endl;
				showLinkList(L_10[1]);
				cout << "公共元素链表为：" << endl;
				showLinkList(L_10[2]);
			}
			else cout << "交集获取失败！" << endl;
			cout << endl;
			//第一组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]) && destroyLinkList(L_10[2]))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			//第二组测试**********************************************************
			cout << "第二组实验数据：" << endl;
			creatLinkListArray(L_10[0], 2);						//第二组测试
			creatLinkListArray(L_10[1], 10);
			if (publicElement(L_10[0], L_10[1], L_10[2]))
			{
				cout << "交集获取成功！" << endl;
				cout << "链表一为：" << endl;
				showLinkList(L_10[0]);
				cout << "链表二为：" << endl;
				showLinkList(L_10[1]);
				cout << "公共元素链表为：" << endl;
				showLinkList(L_10[2]);
			}
			else cout << "交集获取失败！" << endl;
			cout << endl;
			//第二组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]) && destroyLinkList(L_10[2]))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			//第三组测试**********************************************************
			cout << "第三组实验数据：" << endl;
			creatLinkListArray(L_10[0], 1);						//第三组测试
			creatLinkListArray(L_10[1], 11);
			if (publicElement(L_10[0], L_10[1], L_10[2]))
			{
				cout << "交集获取成功！" << endl;
				cout << "链表一为：" << endl;
				showLinkList(L_10[0]);
				cout << "链表二为：" << endl;
				showLinkList(L_10[1]);
				cout << "公共元素链表为：" << endl;
				showLinkList(L_10[2]);
			}
			else cout << "交集获取失败！" << endl;
			cout << endl;
			//第三组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]) && destroyLinkList(L_10[2]))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 12:
			system("cls");
			//第一组测试**********************************************************
			cout << "第一组实验数据：" << endl;
			creatLinkListArray(L_5, 4);							//第一组测试
			cout << "链表为：";
			showLinkList(L_5);
			if (deleteRepetition(L_5))
			{
				cout << "链表去重成功，去重后链表为：" << endl;
				showLinkList(L_5);
			}
			else cout << "链表去重失败！" << endl;
			cout << endl;
			//第一组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_5))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			//第二组测试**********************************************************
			cout << "第二组实验数据：" << endl;
			creatLinkListArray(L_5, 5);							//第二组测试
			cout << "链表为：";
			showLinkList(L_5);
			if (deleteRepetition(L_5))
			{
				cout << "链表去重成功，去重后链表为：" << endl;
				showLinkList(L_5);
			}
			else cout << "链表去重失败！" << endl;
			cout << endl;
			//第二组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_5))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			//第三组测试**********************************************************
			cout << "第三组实验数据：" << endl;
			creatLinkListArray(L_5, 6);							//第三组测试
			cout << "链表为：";
			showLinkList(L_5);
			if (deleteRepetition(L_5))
			{
				cout << "链表去重成功，去重后链表为：" << endl;
				showLinkList(L_5);
			}
			else cout << "链表去重失败！" << endl;
			cout << endl;
			//第三组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_5))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 13:
			system("cls");
			//第一组测试**********************************************************
			cout << "第一组实验数据：" << endl;
			creatLinkListArray(L_10[0], 2);						//第一组测试
			creatLinkListArray(L_10[1], 3);
			cout << "链表一为：";
			showLinkList(L_10[0]);
			cout << "链表二为：";
			showLinkList(L_10[1]);
			if (unionSetLinkList(L_10[0], L_10[1]))
			{
				cout << "并集获取成功！";
				cout << "合并后链表为：";
				showLinkList(L_10[0]);
			}
			else cout << "并集获取失败！" << endl;
			cout << endl;
			//第一组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			//第二组测试**********************************************************
			cout << "第二组实验数据：" << endl;
			creatLinkListArray(L_10[0], 2);						//第二组测试
			creatLinkListArray(L_10[1], 10);
			cout << "链表一为：";
			showLinkList(L_10[0]);
			cout << "链表二为：";
			showLinkList(L_10[1]);
			if (unionSetLinkList(L_10[0], L_10[1]))
			{
				cout << "并集获取成功！";
				cout << "合并后链表为：";
				showLinkList(L_10[0]);
			}
			else cout << "并集获取失败！" << endl;
			cout << endl;
			//第二组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			//第三组测试**********************************************************
			cout << "第三组实验数据：" << endl;
			creatLinkListArray(L_10[0], 1);						//第三组测试
			creatLinkListArray(L_10[1], 11);
			cout << "链表一为：";
			showLinkList(L_10[0]);
			cout << "链表二为：";
			showLinkList(L_10[1]);
			if (unionSetLinkList(L_10[0], L_10[1]))
			{
				cout << "并集获取成功！";
				cout << "合并后链表为：";
				showLinkList(L_10[0]);
			}
			else cout << "并集获取失败！" << endl;
			cout << endl;
			//第三组测试结束，销毁链表，便于下次测试******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]))cout << "测试结束，已销毁当前链表！" << endl;
			else cout << "链表销毁失败！" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 0:
			if (destroyLinkList(L_1))cout << "当前链表销毁成功！" << endl;
			else cout << "链表销毁失败！" << endl;
			if (destroyLinkList(L_5))cout << "当前链表销毁成功！" << endl;
			else cout << "链表销毁失败！" << endl;
			if (destroyLinkList(L_10[0]))cout << "当前链表销毁成功！" << endl;
			else cout << "链表销毁失败！" << endl;
			if (destroyLinkList(L_10[1]))cout << "当前链表销毁成功！" << endl;
			else cout << "链表销毁失败！" << endl;
			if (destroyLinkList(L_10[2]))cout << "当前链表销毁成功！" << endl;
			else cout << "链表销毁失败！" << endl;
			if (destroyLinkList(nowNode))cout << "当前链表销毁成功！" << endl;
			else cout << "链表销毁失败！" << endl;
			return 0;
		default:
			system("cls");
			cout << "输入错误！" << endl;
			break;
		}
	}

	return 0;
}
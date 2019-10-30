//**********************//
//������ʵ��������		//
//**********************//

#include"linkedList.h"

int main(void)
{
	int order = NULL;
	linkList L_1 = nullptr, L_5 = nullptr, L_10[3] = { nullptr };
	linkList nowNode = nullptr;

	while (1)
	{
		cout << "ʵ�����������ʵ��" << endl;
		cout << "*****************************************************************" << endl;
		cout << "*1��β�巨�����Զ�������\t\t\t\t\t*" << endl;
		cout << "*2��ͷ�巨�����Զ�������\t\t\t\t\t*" << endl;
		cout << "*3����������\t\t\t\t\t\t\t*" << endl;
		cout << "*4����ȡ�����ȡ�\t\t\t\t\t\t*" << endl;
		cout << "*5������Ų���Ԫ�ء�\t\t\t\t\t\t*" << endl;
		cout << "*6������Ų���Ԫ�ء�\t\t\t\t\t\t*" << endl;
		cout << "*7����ֵ����Ԫ�ء�\t\t\t\t\t\t*" << endl;
		cout << "*8�������ɾ��Ԫ�ء�\t\t\t\t\t\t*" << endl;
		cout << "*9����ֵ����Ԫ�ء�\t\t\t\t\t\t*" << endl;
		cout << "*10����Ԫ�ذ���ż�Է��ࡣ\t\t\t\t\t*" << endl;
		cout << "*11����ȡ�������еĹ���Ԫ�ء�\t\t\t\t\t*" << endl;
		cout << "*12��ɾ�������е��ظ�Ԫ�ء�\t\t\t\t\t*" << endl;
		cout << "*13����������ϲ���һ�����ϡ�\t\t\t\t\t*" << endl;
		cout << "*\t\t\t\t\t\t\t\t*" << endl;
		cout << "*0���˳�����\t\t\t\t\t\t\t*" << endl;
		cout << "*****************************************************************" << endl;
		cout << "������˵���ţ�\t";
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
			if (destroyLinkList(L_1))cout << "��ǰ�������ٳɹ���" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			if (destroyLinkList(L_5))cout << "��ǰ�������ٳɹ���" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			if (destroyLinkList(L_10[0]))cout << "��ǰ�������ٳɹ���" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			if (destroyLinkList(L_10[1]))cout << "��ǰ�������ٳɹ���" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			if (destroyLinkList(L_10[2]))cout << "��ǰ�������ٳɹ���" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			if (destroyLinkList(nowNode))cout << "��ǰ�������ٳɹ���" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			break;
		case 4:
			system("cls");
			cout << "��Ϊ���ڲ��ԣ����޲鿴����1��2����������" << endl;
			if (linkListLen(L_1) >= 0) cout << "��ǰ������Ϊ��" << linkListLen(L_1) << endl;
			else cout << "��ǰ����δ������" << endl;
			break;
		case 5:
			system("cls");
			//��һ�����**********************************************************
			cout << "��һ��ʵ�����ݣ�n=13����" << endl;
			creatLinkListArray(L_5, 3);
			showLinkList(L_5);
			cout << endl;
			cout << "��5��Ԫ��Ϊ��" << "\t\t";				//һ��һ��
			nowNode = getElement(L_5, 5);
			if (nowNode) cout << nowNode->data << endl;
			else cout << "����ʧ�ܣ�" << endl;
			cout << "��n(n=13)��Ԫ��Ϊ��" << "\t";			//һ�����
			nowNode = getElement(L_5, 13);
			if (nowNode) cout << nowNode->data << endl;
			else cout << "����ʧ�ܣ�" << endl;
			cout << "��0��Ԫ��Ϊ��" << "\t\t";				//һ������
			nowNode = getElement(L_5, 0);
			if (nowNode) cout << nowNode->data << endl;
			else cout << "����ʧ�ܣ�" << endl;
			cout << "��n+1(n=13)��Ԫ��Ϊ��" << "\t";		//һ���Ĵ�
			nowNode = getElement(L_5, 14);
			if (nowNode) cout << nowNode->data << endl;
			else cout << "����ʧ�ܣ�" << endl;
			cout << "��n+2(n=13)��Ԫ��Ϊ��" << "\t";		//һ�����
			nowNode = getElement(L_5, 15);
			if (nowNode) cout << nowNode->data << endl;
			else cout << "����ʧ�ܣ�" << endl;
			//��һ����Խ������������������´β���******************************
			if (destroyLinkList(L_5))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			//�ڶ������**********************************************************
			cout << "�ڶ���ʵ�����ݣ�n=0����" << endl;
			creatLinkListArray(L_5, 1);
			showLinkList(L_5);
			cout << endl;
			cout << "��0��Ԫ��Ϊ��" << "\t\t";				//����һ��
			nowNode = getElement(L_5, 0);
			if (nowNode) cout << nowNode->data << endl;
			else cout << "����ʧ�ܣ�" << endl;
			cout << "��2��Ԫ��Ϊ��" << "\t\t";				//�������
			nowNode = getElement(L_5, 2);
			if (nowNode) cout << nowNode->data << endl;
			else cout << "����ʧ�ܣ�" << endl;
			//�ڶ�����Խ������������������´β���******************************
			if (destroyLinkList(L_5))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 6:
			system("cls");
			//��һ�����**********************************************************
			cout << "��һ��ʵ�����ݣ�n=13��x=100����" << endl;
			creatLinkListArray(L_5, 3);
			showLinkList(L_5);
			cout << endl;
			cout << "��i=5ʱ��" << "\t\t";						//һ��һ��
			//destroyLinkList(L_5);
			//creatLinkListArray(L_5, 3);
			if (addElement(L_5,5,100))showLinkList(L_5);
			else cout << "����ʧ�ܣ�" << endl;
			cout << endl;
			cout << "��i=n(n=13)ʱ��" << "\t\t";				//һ�����
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (addElement(L_5, 13, 100))showLinkList(L_5);
			else cout << "����ʧ�ܣ�" << endl;
			cout << endl;
			cout << "��i=n+1(n=13)ʱ��" << "\t";				//һ������
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (addElement(L_5, 14, 100))showLinkList(L_5);
			else cout << "����ʧ�ܣ�" << endl;
			cout << endl;
			cout << "��i=0ʱ��" << "\t\t";						//һ���Ĵ�
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (addElement(L_5, 0, 100))showLinkList(L_5);
			else cout << "����ʧ�ܣ�" << endl;
			cout << endl;
			cout << "��i=1ʱ��" << "\t\t";						//һ�����
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (addElement(L_5, 1, 100))showLinkList(L_5);
			else cout << "����ʧ�ܣ�" << endl;
			cout << endl;
			cout << "��i=n+2(n=13)ʱ��" << "\t";				//һ������
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (addElement(L_5, 15, 100))showLinkList(L_5);
			else cout << "����ʧ�ܣ�" << endl;
			//��һ����Խ������������������´β���******************************
			if (destroyLinkList(L_5))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			//�ڶ������**********************************************************
			cout << "�ڶ���ʵ�����ݣ�n=0��x=100����" << endl;
			creatLinkListArray(L_5, 1);
			showLinkList(L_5);
			cout << endl;
			cout << "��i=5ʱ��" << "\t\t";						//����һ��
			//destroyLinkList(L_5);
			//creatLinkListArray(L_5, 1);
			if (addElement(L_5, 5, 100))showLinkList(L_5);
			else cout << "����ʧ�ܣ�" << endl;
			//�ڶ�����Խ������������������´β���******************************
			if (destroyLinkList(L_5))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 7:
			system("cls");
			//����****************************************************************
			cout << "ʵ�����ݣ�" << endl;
			creatLinkListArray(L_5, 2);
			showLinkList(L_5);
			cout << endl;
			cout << "��x=1ʱ��" << "\t\t";							//һ�β���
			nowNode = localElement(L_5, 1);
			if (nowNode) cout << "���ҳɹ���ͨ������ָ��鿴Ԫ��Ϊ��" << nowNode->data << endl;
			else cout << "����ʧ�ܣ�" << endl;
			cout << endl;
			cout << "��x=17ʱ��" << "\t\t";							//���β���
			nowNode = localElement(L_5, 17);
			if (nowNode) cout << "���ҳɹ���ͨ������ָ��鿴Ԫ��Ϊ��" << nowNode->data << endl;
			else cout << "����ʧ�ܣ�" << endl;
			cout << endl;
			cout << "��x=20ʱ��" << "\t\t";							//���β���
			nowNode = localElement(L_5, 20);
			if (nowNode) cout << "���ҳɹ���ͨ������ָ��鿴Ԫ��Ϊ��" << nowNode->data << endl;
			else cout << "����ʧ�ܣ�" << endl;
			cout << endl;
			cout << "��x=88ʱ��" << "\t\t";							//�Ĵβ���
			nowNode = localElement(L_5, 88);
			if (nowNode) cout << "���ҳɹ���ͨ������ָ��鿴Ԫ��Ϊ��" << nowNode->data << endl;
			else cout << "����ʧ�ܣ�" << endl;
			//����Խ������������������´β���**********************************
			if (destroyLinkList(L_5))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 8:
			system("cls");
			//��һ�����**********************************************************
			cout << "��һ��ʵ�����ݣ�n=13����" << endl;
			creatLinkListArray(L_5, 3);
			showLinkList(L_5);
			cout << endl;
			cout << "��i=5ʱ��" << "\t\t";						//һ��һ��
			//destroyLinkList(L_5);
			//creatLinkListArray(L_5, 3);
			if (deleteElement(L_5, 5))showLinkList(L_5);
			else cout << "ɾ��ʧ�ܣ�" << endl;
			cout << endl;
			cout << "��i=n(n=13)ʱ��" << "\t\t";				//һ�����
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (deleteElement(L_5, 13))showLinkList(L_5);
			else cout << "ɾ��ʧ�ܣ�" << endl;
			cout << endl;
			cout << "��i=1ʱ��" << "\t\t";						//һ������
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (deleteElement(L_5, 1))showLinkList(L_5);
			else cout << "ɾ��ʧ�ܣ�" << endl;
			cout << "��i=n+1(n=13)ʱ��" << "\t";				//һ���Ĵ�
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (deleteElement(L_5, 14))showLinkList(L_5);
			else cout << "ɾ��ʧ�ܣ�" << endl;
			cout << endl;
			cout << "��i=0ʱ��" << "\t\t";						//һ�����
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 3);
			if (deleteElement(L_5, 0))showLinkList(L_5);
			else cout << "ɾ��ʧ�ܣ�" << endl;
			cout << endl;
			//��һ����Խ������������������´β���******************************
			if (destroyLinkList(L_5))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			//�ڶ������**********************************************************
			cout << "��һ��ʵ�����ݣ�n=0����" << endl;
			creatLinkListArray(L_5, 1);
			showLinkList(L_5);
			cout << endl;
			cout << "��i=5ʱ��" << "\t\t";						//����һ��
			//destroyLinkList(L_5);
			//creatLinkListArray(L_5, 1);
			if (deleteElement(L_5, 5))showLinkList(L_5);
			else cout << "ɾ��ʧ�ܣ�" << endl;
			cout << endl;
			//�ڶ�����Խ������������������´β���******************************
			if (destroyLinkList(L_5))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 9:
			system("cls");
			//����****************************************************************
			cout << "ʵ�����ݣ�" << endl;
			creatLinkListArray(L_5, 8);
			showLinkList(L_5);
			cout << endl;
			cout << "��x=25ʱ��" << "\t\t";							//һ�β���
			//destroyLinkList(L_5);
			//creatLinkListArray(L_5, 8);
			if (insertElement(L_5, 25))showLinkList(L_5);
			else cout << "����ʧ�ܣ�" << endl;
			cout << endl;
			cout << "��x=85ʱ��" << "\t\t";							//���β���
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 8);
			if (insertElement(L_5, 85))showLinkList(L_5);
			else cout << "����ʧ�ܣ�" << endl;
			cout << endl;
			cout << "��x=110ʱ��" << "\t\t";						//���β���
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 8);
			if (insertElement(L_5, 110))showLinkList(L_5);
			else cout << "����ʧ�ܣ�" << endl;
			cout << endl;
			cout << "��x=8ʱ��" << "\t\t";							//�Ĵβ���
			destroyLinkList(L_5);
			creatLinkListArray(L_5, 8);
			if (insertElement(L_5, 8))showLinkList(L_5);
			else cout << "����ʧ�ܣ�" << endl;
			cout << endl;
			//���Խ������������������´β���************************************
			if (destroyLinkList(L_5))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 10:
			system("cls");
			//��һ�����**********************************************************
			cout << "��һ��ʵ�����ݣ�" << endl;
			creatLinkListArray(L_10[0], 9);
			showLinkList(L_10[0]);
			cout << endl;
			if (separateElement(L_10[0], L_10[1], L_10[2]))			//��һ�����
			{
				cout << "����ɹ���" << endl;
				cout << "ԭ����";
				showLinkList(L_10[0]);
				cout << "������";
				showLinkList(L_10[1]);
				cout << "ż����";
				showLinkList(L_10[2]);
			}
			else cout << "����ʧ�ܣ�" << endl;
			cout << endl;
			//��һ����Խ������������������´β���******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]) && destroyLinkList(L_10[2]))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			//��һ�����**********************************************************
			cout << "�ڶ���ʵ�����ݣ�" << endl;
			creatLinkListArray(L_10[0], 8);
			showLinkList(L_10[0]);
			cout << endl;
			if (separateElement(L_10[0], L_10[1], L_10[2]))			//�ڶ������
			{
				cout << "����ɹ���" << endl;
				cout << "ԭ����";
				showLinkList(L_10[0]);
				cout << "������";
				showLinkList(L_10[1]);
				cout << "ż����";
				showLinkList(L_10[2]);
			}
			else cout << "����ʧ�ܣ�" << endl;
			cout << endl;
			//�ڶ�����Խ������������������´β���******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]) && destroyLinkList(L_10[2]))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 11:
			system("cls");
			//��һ�����**********************************************************
			cout << "��һ��ʵ�����ݣ�" << endl;
			creatLinkListArray(L_10[0], 2);						//��һ�����
			creatLinkListArray(L_10[1], 3);
			if (publicElement(L_10[0], L_10[1], L_10[2]))
			{
				cout << "������ȡ�ɹ���" << endl;
				cout << "����һΪ��" << endl;
				showLinkList(L_10[0]);
				cout << "�����Ϊ��" << endl;
				showLinkList(L_10[1]);
				cout << "����Ԫ������Ϊ��" << endl;
				showLinkList(L_10[2]);
			}
			else cout << "������ȡʧ�ܣ�" << endl;
			cout << endl;
			//��һ����Խ������������������´β���******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]) && destroyLinkList(L_10[2]))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			//�ڶ������**********************************************************
			cout << "�ڶ���ʵ�����ݣ�" << endl;
			creatLinkListArray(L_10[0], 2);						//�ڶ������
			creatLinkListArray(L_10[1], 10);
			if (publicElement(L_10[0], L_10[1], L_10[2]))
			{
				cout << "������ȡ�ɹ���" << endl;
				cout << "����һΪ��" << endl;
				showLinkList(L_10[0]);
				cout << "�����Ϊ��" << endl;
				showLinkList(L_10[1]);
				cout << "����Ԫ������Ϊ��" << endl;
				showLinkList(L_10[2]);
			}
			else cout << "������ȡʧ�ܣ�" << endl;
			cout << endl;
			//�ڶ�����Խ������������������´β���******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]) && destroyLinkList(L_10[2]))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			//���������**********************************************************
			cout << "������ʵ�����ݣ�" << endl;
			creatLinkListArray(L_10[0], 1);						//���������
			creatLinkListArray(L_10[1], 11);
			if (publicElement(L_10[0], L_10[1], L_10[2]))
			{
				cout << "������ȡ�ɹ���" << endl;
				cout << "����һΪ��" << endl;
				showLinkList(L_10[0]);
				cout << "�����Ϊ��" << endl;
				showLinkList(L_10[1]);
				cout << "����Ԫ������Ϊ��" << endl;
				showLinkList(L_10[2]);
			}
			else cout << "������ȡʧ�ܣ�" << endl;
			cout << endl;
			//��������Խ������������������´β���******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]) && destroyLinkList(L_10[2]))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 12:
			system("cls");
			//��һ�����**********************************************************
			cout << "��һ��ʵ�����ݣ�" << endl;
			creatLinkListArray(L_5, 4);							//��һ�����
			cout << "����Ϊ��";
			showLinkList(L_5);
			if (deleteRepetition(L_5))
			{
				cout << "����ȥ�سɹ���ȥ�غ�����Ϊ��" << endl;
				showLinkList(L_5);
			}
			else cout << "����ȥ��ʧ�ܣ�" << endl;
			cout << endl;
			//��һ����Խ������������������´β���******************************
			if (destroyLinkList(L_5))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			//�ڶ������**********************************************************
			cout << "�ڶ���ʵ�����ݣ�" << endl;
			creatLinkListArray(L_5, 5);							//�ڶ������
			cout << "����Ϊ��";
			showLinkList(L_5);
			if (deleteRepetition(L_5))
			{
				cout << "����ȥ�سɹ���ȥ�غ�����Ϊ��" << endl;
				showLinkList(L_5);
			}
			else cout << "����ȥ��ʧ�ܣ�" << endl;
			cout << endl;
			//�ڶ�����Խ������������������´β���******************************
			if (destroyLinkList(L_5))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			//���������**********************************************************
			cout << "������ʵ�����ݣ�" << endl;
			creatLinkListArray(L_5, 6);							//���������
			cout << "����Ϊ��";
			showLinkList(L_5);
			if (deleteRepetition(L_5))
			{
				cout << "����ȥ�سɹ���ȥ�غ�����Ϊ��" << endl;
				showLinkList(L_5);
			}
			else cout << "����ȥ��ʧ�ܣ�" << endl;
			cout << endl;
			//��������Խ������������������´β���******************************
			if (destroyLinkList(L_5))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 13:
			system("cls");
			//��һ�����**********************************************************
			cout << "��һ��ʵ�����ݣ�" << endl;
			creatLinkListArray(L_10[0], 2);						//��һ�����
			creatLinkListArray(L_10[1], 3);
			cout << "����һΪ��";
			showLinkList(L_10[0]);
			cout << "�����Ϊ��";
			showLinkList(L_10[1]);
			if (unionSetLinkList(L_10[0], L_10[1]))
			{
				cout << "������ȡ�ɹ���";
				cout << "�ϲ�������Ϊ��";
				showLinkList(L_10[0]);
			}
			else cout << "������ȡʧ�ܣ�" << endl;
			cout << endl;
			//��һ����Խ������������������´β���******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			//�ڶ������**********************************************************
			cout << "�ڶ���ʵ�����ݣ�" << endl;
			creatLinkListArray(L_10[0], 2);						//�ڶ������
			creatLinkListArray(L_10[1], 10);
			cout << "����һΪ��";
			showLinkList(L_10[0]);
			cout << "�����Ϊ��";
			showLinkList(L_10[1]);
			if (unionSetLinkList(L_10[0], L_10[1]))
			{
				cout << "������ȡ�ɹ���";
				cout << "�ϲ�������Ϊ��";
				showLinkList(L_10[0]);
			}
			else cout << "������ȡʧ�ܣ�" << endl;
			cout << endl;
			//�ڶ�����Խ������������������´β���******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			//���������**********************************************************
			cout << "������ʵ�����ݣ�" << endl;
			creatLinkListArray(L_10[0], 1);						//���������
			creatLinkListArray(L_10[1], 11);
			cout << "����һΪ��";
			showLinkList(L_10[0]);
			cout << "�����Ϊ��";
			showLinkList(L_10[1]);
			if (unionSetLinkList(L_10[0], L_10[1]))
			{
				cout << "������ȡ�ɹ���";
				cout << "�ϲ�������Ϊ��";
				showLinkList(L_10[0]);
			}
			else cout << "������ȡʧ�ܣ�" << endl;
			cout << endl;
			//��������Խ������������������´β���******************************
			if (destroyLinkList(L_10[0]) && destroyLinkList(L_10[1]))cout << "���Խ����������ٵ�ǰ����" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			cout << endl;
			//********************************************************************
			break;
		case 0:
			if (destroyLinkList(L_1))cout << "��ǰ�������ٳɹ���" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			if (destroyLinkList(L_5))cout << "��ǰ�������ٳɹ���" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			if (destroyLinkList(L_10[0]))cout << "��ǰ�������ٳɹ���" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			if (destroyLinkList(L_10[1]))cout << "��ǰ�������ٳɹ���" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			if (destroyLinkList(L_10[2]))cout << "��ǰ�������ٳɹ���" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			if (destroyLinkList(nowNode))cout << "��ǰ�������ٳɹ���" << endl;
			else cout << "��������ʧ�ܣ�" << endl;
			return 0;
		default:
			system("cls");
			cout << "�������" << endl;
			break;
		}
	}

	return 0;
}
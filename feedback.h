#pragma once
#include<iostream>
using namespace std;
class feedback
{
private:
	bool type;			//��Ϣ���ͣ�trueΪ���ޣ�falseΪͶ��
	int householdID;	//�ύס��ID
	string time;		//�ύʱ��
	bool state;			//��ǰ״̬��trueΪ�����falseΪδ���
public:
	//�½���Ϣ
	feedback(bool TYPE, int HOUSEHOLDID, string TIME)
	{
		type = TYPE;
		householdID = HOUSEHOLDID;
		time = TIME;
		state = false;
	}
	//
};

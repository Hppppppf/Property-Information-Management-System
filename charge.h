#pragma once
#include<iostream>
using namespace std;
class charge
{
private:
	string name;		//�շ�����
	float cost;			//�շѽ��
	string info;	//�շ���Ϣ
	string time;		//�շ�ʱ��
	bool state;			//�շ�״̬
public:
	//��ʼ���շ�
	charge(string NAME, float COST, string INFO, string TIME)
	{
		name = NAME;
		cost = COST;
		info = INFO;
		time = TIME;
		state = false;
	}
	//��ȡ�շ���Ϣ
	string getChargeName()
	{
		return name;
	}
	float getChargeCost()
	{
		return cost;
	}
	string getChargeInfo()
	{
		return info;
	}
	string getChargeTime()
	{
		return time;
	}
	bool getChargeState()
	{
		return state;
	}
	//�޸��շ�״̬
	void setChargeState()
	{
		if (state)	state = false;
		else state = true;
	}
};
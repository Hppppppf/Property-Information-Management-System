#pragma once
#include<iostream>
using namespace std;
class household
{
private:
	int ID;				//ס�����		
	string name;		//ס������
	string tel;			//��ϵ�绰
	string location;	//��ַ
	float payment;		//���Ԥ��Ϊ����Ƿ��Ϊ����
public:
	//���캯�����½�ס��
	household(int householdID, string NAME, string TEL, string LOCATION, float PAYMENT)
	{
		ID = householdID;
		name = NAME;
		tel = TEL;
		location = LOCATION;
		payment = PAYMENT;
	}
	//��ȡס����Ϣ
	int getHouseholdID()
	{
		return ID;
	}
	string getHouseholdName()
	{
		return name;
	}
	string getHouseholdTel()
	{
		return tel;
	}
	string getHouseholdLocation()
	{
		return location;
	}
	float getHouseholdPayment()
	{
		return payment;
	}
	//�޸�ס����Ϣ
	void setHouseholdID(int id)
	{
		ID = id;
	}
	void setHouseholdName(string NAME)
	{
		name = NAME;
	}
	void setHouseholdTel(string TEL)
	{
		tel = TEL;
	}
	void setHouseholdLocation(string LOCATION)
	{
		location = LOCATION;
	}
	void setHouseholdPayment(float PAYMENT)
	{
		payment = PAYMENT;
	}
};
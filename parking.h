#pragma once
#include<iostream>
using namespace std;
class parking
{
private:
	int ID;
	float cost;
	int householdID;
public:
	//��ʼ����λ
	parking(int ID, float COST, int HOUSEHOLDID)
	{
		this->ID = ID;
		cost = COST;
		householdID = HOUSEHOLDID;
	}
	//��ȡ��λ��Ϣ
	int getParkingID()
	{
		return ID;
	}
	float getParkingCost()
	{
		return cost;
	}
	int getParkingHouseholdID()
	{
		return householdID;
	}
	//�޸ĳ�λ��Ϣ
	void setParkingCost(float COST)
	{
		cost = COST;
	}
	void setParkingHouseholdID(int ID)
	{
		householdID = ID;
	}
};

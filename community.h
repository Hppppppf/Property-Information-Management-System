#pragma once
#include<iostream>
using namespace std;
class community
{
private:
	string name;		//С������
	int buildingNum;	//¥������
	int householdNum;	//ס������
	int parkingNum;		//��λ����
public:
	community(string NAME, int BUILDINGNUM, int HOUSEHOLDNUM, int PARKINGNUM)
	{
		name = NAME;
		buildingNum = BUILDINGNUM;
		householdNum = HOUSEHOLDNUM;
		parkingNum = PARKINGNUM;
	}
	//�޸�С��������Ϣ
	//�������ơ�¥������ס��������λ��
	//�����
	void ModifyCommunityInfo(string NAME, int BUILDINGNUM, int HOUSEHOLDNUM, int PARKINGNUM)
	{
		name = NAME;
		buildingNum = BUILDINGNUM;
		householdNum = HOUSEHOLDNUM;
		parkingNum = PARKINGNUM;
	}
	//��ȡС����Ϣ
	string getCommunityName()
	{
		return name;
	}
	int getCommunityBuildingNum()
	{
		return buildingNum;
	}
	int getCommunityHouseholdNum()
	{
		return householdNum;
	}
	int getCommunityParkingNum()
	{
		return parkingNum;
	}
	//�޸�С��������Ϣ
	void setCommunityName(string NAME)
	{
		name = NAME;
	}
	void setCommunityBuildingNum(int BUILDINGNUM)
	{
		buildingNum = BUILDINGNUM;
	}
	void setCommunityHouseholdNum(int HOUSEHOLDNUM)
	{
		householdNum = HOUSEHOLDNUM;
	}
	void setCommunityParkingNum(int PARKINGNUM)
	{
		parkingNum = PARKINGNUM;
	}
};
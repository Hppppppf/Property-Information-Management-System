#pragma once
#include<iostream>
using namespace std;
class roomtype
{
private:
	int typeId;			//���ͱ��
	string typeName;	//��������
	float typeArea;		//�������
public:
	roomtype(int TYPEID, string TYPENAME, float TYPEAREA)
	{
		typeId = TYPEID;
		typeName = TYPENAME;
		typeArea = TYPEAREA;
	}
	//��ȡ������Ϣ
	int getTyoeId()
	{
		return typeId;
	}
	string getTypeName()
	{
		return typeName;
	}
	float typeArea()
	{
		return typeArea;
	}
};
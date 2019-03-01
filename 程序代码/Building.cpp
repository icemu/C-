#include<iostream>
#include<string.h>
using namespace std;
class CBuilding
{
private:
	char Building_Address[50];
	int Building_No;
public:
	void input()
	{
	  cin>>Building_Address>>Building_No;
	}
	void output()
	{
	  cout<<"地址:"<<Building_Address<<" "<<"楼号:"<<" "<<Building_No<<endl;
	}
};
class CHouse:public CBuilding
{
private:
  int House_No;
  float House_Area;
public:
	void input()
	{
		CBuilding::input();
		cin>>House_No>>House_Area;
	}
	void output()
	{
		CBuilding::output();
		cout<<"房号:"<<House_No<<" "<<"面积:"<<House_Area<<endl;
	}
};
class COffice:public CBuilding
{
private: 
  char Office_Name[20];
  char Telephone_No[10];
public:
	void input()
	{
		CBuilding::input();
		cin>>Office_Name>>Telephone_No;
	}
	void output()
	{
		CBuilding::output();
		cout<<"办公室名称:"<<Office_Name<<" "<<"电话号码:"<<Telephone_No<<endl;
	}
};
int main()
{ 
  CHouse h1;
  COffice o1;
  cout<<"请输入地址、楼号、房号与面积"<<endl;
  h1.input();
  h1.output();
  cout<<"......................................................"<<endl;
  cout<<"请输入地址、楼号、办公室名称和电话号码"<<endl;
  o1.input();
  o1.output();
  return 0;
}


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
	  cout<<"��ַ:"<<Building_Address<<" "<<"¥��:"<<" "<<Building_No<<endl;
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
		cout<<"����:"<<House_No<<" "<<"���:"<<House_Area<<endl;
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
		cout<<"�칫������:"<<Office_Name<<" "<<"�绰����:"<<Telephone_No<<endl;
	}
};
int main()
{ 
  CHouse h1;
  COffice o1;
  cout<<"�������ַ��¥�š����������"<<endl;
  h1.input();
  h1.output();
  cout<<"......................................................"<<endl;
  cout<<"�������ַ��¥�š��칫�����ƺ͵绰����"<<endl;
  o1.input();
  o1.output();
  return 0;
}


#include <iostream>
using namespace std;
const int num=3;
class TStudent
{
private:
	     char  RegisterationNumber[10];
		char Name[10];
		float PersonalAchievement;
public:
	void input();
	void output();
	float GetPersonalAchievement();
};
TStudent stu[num];
void TStudent::input()
{
	cin>>RegisterationNumber>>Name>>PersonalAchievement;
}
void TStudent::output()
{
	cout<<RegisterationNumber<<"\t"<<Name<<"\t"<<PersonalAchievement<<"\t"<<endl;
}
float TStudent::GetPersonalAchievement()
{
	return PersonalAchievement;
}


void main()
{
	TStudent stu[num];
	int i;
    float TeamAchievement=0;
	cout<<"�밴�� ׼��֤�� ���� ���˳ɼ� ��˳��������Ϣ"<<endl;
	for(i=0;i<num;i++)
	{
		stu[i].input();
	}

	for(i=0;i<num;i++)
	{
	  TeamAchievement+=stu[i].GetPersonalAchievement();	
	}
	cout<<"���ѧ����ϢΪ:"<<endl;

	for(i=0;i<num;i++)
	{
		stu[i].output();
	}
	cout<<"�Ŷӳɼ�Ϊ:"<<TeamAchievement<<endl;
	
}